/*
  🔹 This code is by Dream Invention 🔹
  Project: RFID Attendance System with LCD Display
  Components: Arduino UNO + RC522 RFID Module + 16x2 I2C LCD Display

  📘 Connections:

  🔸 LCD (I2C 16x2 Display)
      VCC  → 5V
      GND  → GND
      SDA  → A4
      SCL  → A5

  🔸 RC522 RFID Module
      VCC  → 3.3V
      GND  → GND
      RST  → Pin 9
      SDA(SS) → Pin 10
      MOSI → Pin 11
      MISO → Pin 12
      SCK  → Pin 13

  Note: You can change student names and card UIDs as per your project.
  Copy and paste your own UID codes where marked.
*/

#include <SPI.h>
#include <MFRC522.h>
#include <Wire.h>
#include <LiquidCrystal_I2C.h>

#define SS_PIN 10
#define RST_PIN 9

MFRC522 rfid(SS_PIN, RST_PIN);
LiquidCrystal_I2C lcd(0x27, 16, 2);  // Adjust address if LCD doesn’t display (try 0x3F)

struct Student {
  String cardID;
  String name;
};


Student students[] = {
  {"12 34 56 78", "Nuhamin"},  
  {"63 4B BB D9", "Eyosias"},
  {"A3 62 F1 E4", "Nebil"},
  {"43 97 E1 E1", "Mihret"},
  {"87 48 33 02", "Mahlet"} 
};

void setup() {
  Serial.begin(9600);
  SPI.begin();
  rfid.PCD_Init();
  lcd.begin();
  lcd.backlight();

  showWelcomeMessage();
}

void loop() {
  if (!rfid.PICC_IsNewCardPresent()) return;
  if (!rfid.PICC_ReadCardSerial()) return;

  String cardID = "";
  for (byte i = 0; i < rfid.uid.size; i++) {
    cardID += String(rfid.uid.uidByte[i], HEX);
    if (i < rfid.uid.size - 1) cardID += " ";
  }
  cardID.toUpperCase();

  Serial.println("Card Scanned: " + cardID);

  bool found = false;
  for (int i = 0; i < sizeof(students) / sizeof(students[0]); i++) {
    if (cardID == students[i].cardID) {
      lcd.clear();
      lcd.setCursor(0, 0);
      lcd.print("Name: " + students[i].name);
      Serial.println("Student: " + students[i].name);
      delay(2000);

      lcd.clear();
      lcd.setCursor(0, 0);
      lcd.print("Present");
      Serial.println("Status: Present");
      delay(2000);

      found = true;
      break;
    }
  }

  if (!found) {
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("Unknown Card");
    Serial.println("Unauthorized Card");
    delay(2000);
  }

  showWelcomeMessage();

  rfid.PICC_HaltA();
  rfid.PCD_StopCrypto1();
}


void showWelcomeMessage() {
  lcd.clear();
  lcd.setCursor(3, 0);
  lcd.print("Welcome");
}
