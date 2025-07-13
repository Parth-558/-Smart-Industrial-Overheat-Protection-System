#include <LiquidCrystal.h>
LiquidCrystal lcd(9, 10, 11, 12, 13, 2);
const int tempin = A0;

const int greenpin = 4;
const int redpin = 6;
const int yellowpin = 8;
const int buzzerpin = 7;
const int buttonpin = 3;
const int dcmotorpin = 5;

bool cooling = false;
bool systemlock = false;
unsigned long countdowntime = 0;

void setup(){
  Serial.begin(9600);
  lcd.begin(16,2);
  lcd.print("System Starting...");
  delay(500);
  lcd.clear();
  
   pinMode(greenpin,OUTPUT);
   pinMode(redpin,OUTPUT);
   pinMode(yellowpin,OUTPUT);
   pinMode(buzzerpin,OUTPUT);
   pinMode(INPUT_PULLUP,INPUT);
   pinMode(dcmotorpin,OUTPUT);
}
void loop(){
    int raw = analogRead(tempin);
    float voltage = raw * (5.0/1023.0);
    float temp = voltage * 100;
  
  Serial.print("TEMP :");
  Serial.print(temp);
  Serial.println("c");
  
   lcd.setCursor(0, 0);
   lcd.print("Temp: ");
    lcd.print(temp);
    lcd.print(" C  ");

  if (temp <60 && !cooling && !systemlock){
      lcd.setCursor(0, 1);
      lcd.print("Status: Normal   ");

   digitalWrite(greenpin,HIGH);
   digitalWrite(redpin,LOW);
   digitalWrite(yellowpin,LOW);
   digitalWrite(buzzerpin,LOW);
   digitalWrite(dcmotorpin,LOW);
  }
   if (temp >= 60 && !cooling ){ 
      lcd.setCursor(0, 1);
     lcd.print("Overheat! Cooling");
     
    cooling = true;
    systemlock = true;
    countdowntime = millis();
   digitalWrite(greenpin,LOW);
   digitalWrite(redpin,HIGH);
   digitalWrite(yellowpin,HIGH);
   digitalWrite(buzzerpin,HIGH);
     digitalWrite(dcmotorpin,HIGH);
   }
  if (cooling && millis()-countdowntime >=15000){
    digitalWrite(buzzerpin,LOW);
      lcd.setCursor(0, 1);
  lcd.print("Press Reset Btn  ");
    
    if(digitalRead(buttonpin)==LOW){
    cooling = false;
      systemlock == false;
      
   digitalWrite(greenpin,HIGH);
   digitalWrite(redpin,LOW);
   digitalWrite(yellowpin,LOW);
   digitalWrite(buzzerpin,LOW);
   digitalWrite(dcmotorpin,LOW);
   
      Serial.println(" System reset by operator.");
      delay(500);
    }
    else {
      Serial.println(" Waiting for reset button...");
    }
  }
  delay(500);
}