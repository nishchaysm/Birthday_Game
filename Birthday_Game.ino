#define BLYNK_PRINT Serial
#include<ESP8266WiFi.h>
#include<BlynkSimpleEsp8266.h>
#include <LiquidCrystal.h>
char auth[] = "92ace602539540458c9138296a296fcf";
char ssid[] = "Mi Phone";
char pass[] = "nishuudit";
int resp,resp3,dely=2000;
const int rs = D5, en = D1, d4 = D2, d5 = D3, d6 = D4, d7 = D6;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

void setup()
{
Serial.begin(9600);
lcd.begin(16, 2);
  delay(2000);
   lcd.clear();
  lcd.setCursor(0, 0);
         lcd.print("TOH CHLIYE SHURU");
         lcd.setCursor(0, 1);
         lcd.print("KRTE HAI,ON DABA");
Blynk.begin(auth,ssid,pass);
 }
void loop()
{
  Blynk.run();
 if (resp3==1 && resp==0)
 {
  
   lcd.clear();
  lcd.setCursor(2, 0);
         lcd.print("KYA LAGA KOI");
         lcd.setCursor(0, 1);
         lcd.print("B'DAY WISH KREGA");
 }
 if (resp3==1 && resp==1)
 {
  
   lcd.clear();
  lcd.setCursor(2, 0);
         lcd.print("CHAL NIKAL NA");
         lcd.setCursor(3, 1);
         lcd.print("AAGE BADH");
         resp=3;
 }
 if (resp3==1 && resp==2)
 {
  
   lcd.clear();
  lcd.setCursor(1, 0);
         lcd.print("KHUD BHI HOPE-");
         lcd.setCursor(0, 1);
         lcd.print("LESS HE THI ;-P");
         resp=3;
 }
 if (resp3==2 && resp==3)
 {
  
   lcd.clear();
  lcd.setCursor(2, 0);
         lcd.print("FINALLY 20 KI");
         lcd.setCursor(3, 1);
         lcd.print("HO HE GAYI");
 }
 if (resp3==2 && resp==1)
 {
  
   lcd.clear();
  lcd.setCursor(2, 0);
         lcd.print("KYA YES !!!");
         lcd.setCursor(0, 1);
         lcd.print("AKAL TOH AAI NHI");
         resp=4;
 }
 if (resp3==2 && resp==2)
 {
  
   lcd.clear();
  lcd.setCursor(0, 0);
         lcd.print("HAAN SAHI SOOCHA");
         lcd.setCursor(2, 1);
         lcd.print("BACHHI HE HAI");
         resp=4;
 }
 if (resp3==3 && resp==4)
 {
  
   lcd.clear();
  lcd.setCursor(2, 0);
         lcd.print("MATURITY AAI");
         lcd.setCursor(2, 1);
         lcd.print("THODI BAHUT?");
 }
 if (resp3==3 && resp==1)
 {
  
   lcd.clear();
  lcd.setCursor(1, 0);
         lcd.print("LAGTA TOH NAHI");
         resp=5;
 }
 if (resp3==3 && resp==2)
 {
  
   lcd.clear();
  lcd.setCursor(1, 0);
         lcd.print("AAYEGI BHI NHI");
         resp=5;
 }
 if (resp3==4 && resp==5)
 {
  
   lcd.clear();
  lcd.setCursor(1, 0);
         lcd.print("CHAL BAHUT HUA");
         lcd.setCursor(0, 1);
         lcd.print("H.B'DAY SUNNA H?");
 }
 if (resp3==4 && resp==1)
 {
  lcd.clear();
lcd.setCursor(0, 0);
lcd.print(" LOOK UP TO THE ");
lcd.setCursor(0, 1);
lcd.print(" FUTURE AND TRY ");
delay(dely);
lcd.setCursor(0, 0);
lcd.print(" FUTURE AND TRY ");
lcd.setCursor(0, 1);
lcd.print(" TO ACHIEVE ALL ");
delay(dely);
lcd.setCursor(0, 0);
lcd.print(" TO ACHIEVE ALL ");
lcd.setCursor(0, 1);
lcd.print("  THAT YOU HAVE ");
delay(dely);
lcd.setCursor(0, 0);
lcd.print("  THAT YOU HAVE ");
lcd.setCursor(0, 1);
lcd.print("EVER DREAMED OF.");
delay(dely);
lcd.setCursor(0, 0);
lcd.print("EVER DREAMED OF.");
lcd.setCursor(0, 1);
lcd.print("WISHING YOU TONS");
delay(dely);
lcd.setCursor(0, 0);
lcd.print("WISHING YOU TONS");
lcd.setCursor(0, 1);
lcd.print("OF HAPPINESS AND");
delay(dely);
lcd.setCursor(0, 0);
lcd.print("OF HAPPINESS AND");
lcd.setCursor(0, 1);
lcd.print("  GOOD HEALTH.  ");
delay(dely);
lcd.setCursor(0, 0);
lcd.print("  GOOD HEALTH.  ");
lcd.setCursor(0, 1);
lcd.print("  HAVE LOTS OF  ");
delay(dely);
lcd.setCursor(0, 0);
lcd.print("  HAVE LOTS OF  ");
lcd.setCursor(0, 1);
lcd.print("  JOY AND FUN.  ");
delay(dely);
lcd.setCursor(0, 0);
lcd.print("  JOY AND FUN.  ");
lcd.setCursor(0, 1);
lcd.print("  A VERY HAPPY  ");
delay(dely);
lcd.setCursor(0, 0);
lcd.print("  A VERY HAPPY  ");
lcd.setCursor(0, 1);
lcd.print(" BIRTHDAY TO AN ");
delay(dely);
lcd.setCursor(0, 0);
lcd.print(" BIRTHDAY TO AN ");
lcd.setCursor(0, 1);
lcd.print(" AWESOME PERSON ");
delay(dely);
lcd.setCursor(0, 0);
lcd.print(" AWESOME PERSON ");
lcd.setCursor(0, 1);
lcd.print("  WHO KEEPS ON  ");
delay(dely);
lcd.setCursor(0, 0);
lcd.print("  WHO KEEPS ON  ");
lcd.setCursor(0, 1);
lcd.print("SPREADING CHEER ");
delay(dely);
lcd.setCursor(0, 0);
lcd.print("SPREADING CHEER ");
lcd.setCursor(0, 1);
lcd.print("  ALL AROUND.   ");
delay(dely);
lcd.setCursor(0, 0);
lcd.print("  ALL AROUND.   ");
delay(dely);
lcd.clear();
         resp=6;
 }
 if (resp3==4 && resp==2)
 {
  lcd.clear();
lcd.setCursor(0, 0);
lcd.print("  CHAL TU BHI   ");
lcd.setCursor(0, 1);
lcd.print("KYA YAAD KAREGI ");
delay(dely);
lcd.setCursor(0, 0);
lcd.print("KYA YAAD KAREGI ");
lcd.setCursor(0, 1);
lcd.print(" LOOK UP TO THE ");
delay(dely);
lcd.setCursor(0, 0);
lcd.print(" LOOK UP TO THE ");
lcd.setCursor(0, 1);
lcd.print(" FUTURE AND TRY ");
delay(dely);
lcd.setCursor(0, 0);
lcd.print(" FUTURE AND TRY ");
lcd.setCursor(0, 1);
lcd.print(" TO ACHIEVE ALL ");
delay(dely);
lcd.setCursor(0, 0);
lcd.print(" TO ACHIEVE ALL ");
lcd.setCursor(0, 1);
lcd.print("  THAT YOU HAVE ");
delay(dely);
lcd.setCursor(0, 0);
lcd.print("  THAT YOU HAVE ");
lcd.setCursor(0, 1);
lcd.print("EVER DREAMED OF.");
delay(dely);
lcd.setCursor(0, 0);
lcd.print("EVER DREAMED OF.");
lcd.setCursor(0, 1);
lcd.print("WISHING YOU TONS");
delay(dely);
lcd.setCursor(0, 0);
lcd.print("WISHING YOU TONS");
lcd.setCursor(0, 1);
lcd.print("OF HAPPINESS AND");
delay(dely);
lcd.setCursor(0, 0);
lcd.print("OF HAPPINESS AND");
lcd.setCursor(0, 1);
lcd.print("  GOOD HEALTH.  ");
delay(dely);
lcd.setCursor(0, 0);
lcd.print("  GOOD HEALTH.  ");
lcd.setCursor(0, 1);
lcd.print("  HAVE LOTS OF  ");
delay(dely);
lcd.setCursor(0, 0);
lcd.print("  HAVE LOTS OF  ");
lcd.setCursor(0, 1);
lcd.print("  JOY AND FUN.  ");
delay(dely);
lcd.setCursor(0, 0);
lcd.print("  JOY AND FUN.  ");
lcd.setCursor(0, 1);
lcd.print("  A VERY HAPPY  ");
delay(dely);
lcd.setCursor(0, 0);
lcd.print("  A VERY HAPPY  ");
lcd.setCursor(0, 1);
lcd.print(" BIRTHDAY TO AN ");
delay(dely);
lcd.setCursor(0, 0);
lcd.print(" BIRTHDAY TO AN ");
lcd.setCursor(0, 1);
lcd.print(" AWESOME PERSON ");
delay(dely);
lcd.setCursor(0, 0);
lcd.print(" AWESOME PERSON ");
lcd.setCursor(0, 1);
lcd.print("  WHO KEEPS ON  ");
delay(dely);
lcd.setCursor(0, 0);
lcd.print("  WHO KEEPS ON  ");
lcd.setCursor(0, 1);
lcd.print("SPREADING CHEER ");
delay(dely);
lcd.setCursor(0, 0);
lcd.print("SPREADING CHEER ");
lcd.setCursor(0, 1);
lcd.print("  ALL AROUND.   ");
delay(dely);
lcd.setCursor(0, 0);
lcd.print("  ALL AROUND.   ");
delay(dely);
lcd.clear();
         resp=6;
 }
 if (resp3==5)
 {
  
   lcd.clear();
  lcd.setCursor(1, 0);
         lcd.print("CHAL BAHUT HUA");
         lcd.setCursor(0, 1);
         lcd.print("LG JA AB KAAM PR");
 }
  delay(100);
}
BLYNK_WRITE(V3)
{
  resp3=param.asInt();
} 
BLYNK_WRITE(V1)
{
  resp=param.asInt();

}
