#include <DS3231.h>

int Relay = 4;

DS3231 rtc(SDA,SCL);
Time t;

const int sabahHour = 8;
const int sabahMin = 03;
const int sabahSec = 00;

const int sabahKahvaltiHour = 9;
const int sabahKahvaltiMin = 30;
const int sabahKahvaltiSec = 00;

const int sabahKahvaltiBitisHour = 9;
const int sabahKahvaltiBitisMin = 45;
const int sabahKahvaltiBitisSec = 00;

const int oglenArasiHour = 13;
const int oglenArasiMin = 00;
const int oglenArasiSec = 00;

const int oglenArasiBitisHour = 14;
const int oglenArasiBitisMin = 00;
const int oglenArasiBitisSec = 00;

const int ikindiArasiHour = 16;
const int ikindiArasiMin = 00;
const int ikindiArasiSec = 00;

const int ikindiArasiBitisHour = 16;
const int ikindiArasiBitisMin = 15;
const int ikindiArasiBitisSec = 00;

const int aksamCikisHour = 19;
const int aksamCikisMin = 33;
const int aksamCikisSec = 00;


void setup() {

  Serial.begin(115200);
  rtc.begin();
  pinMode(Relay, OUTPUT);
  digitalWrite(Relay, HIGH);

}

void loop() {
  t = rtc.getTime();
  Serial.print(t.hour);
  Serial.print("hour(s), ");
  Serial.print(t.min);
  Serial.print("minute(s) ");
  Serial.print(t.sec);
  Serial.print("second(s)");
  Serial.println(" ");
  delay(1000);


  if (t.hour == sabahHour && t.min == sabahMin && t.sec == sabahSec) {
    digitalWrite(Relay, LOW);
    Serial.println("Bell ON");
    delay(2000);
    digitalWrite(Relay, HIGH);
    Serial.println("Bell OFF");
  }

  else if (t.hour == sabahKahvaltiHour && t.min == sabahKahvaltiMin && t.sec == sabahKahvaltiSec) {
    digitalWrite(Relay, LOW);
    Serial.println("Bell ON");
    delay(2000);
    digitalWrite(Relay, HIGH);
    Serial.println("Bell OFF");
  }

  else if (t.hour == sabahKahvaltiBitisHour && t.min == sabahKahvaltiBitisMin && t.sec == sabahKahvaltiBitisSec) {
    digitalWrite(Relay, LOW);
    Serial.println("Bell ON");
    delay(2000);
    digitalWrite(Relay, HIGH);
    Serial.println("Bell OFF");
  }

  else if (t.hour == oglenArasiHour && t.min == oglenArasiMin && t.sec == oglenArasiSec) {
    digitalWrite(Relay, LOW);
    Serial.println("Bell ON");
    delay(2000);
    digitalWrite(Relay, HIGH);
    Serial.println("Bell OFF");
  }

  else if (t.hour == oglenArasiBitisHour && t.min == oglenArasiBitisMin && t.sec == oglenArasiBitisSec) {
    digitalWrite(Relay, LOW);
    Serial.println("Bell ON");
    delay(2000);
    digitalWrite(Relay, HIGH);
    Serial.println("Bell OFF");
  }

  else if (t.hour == ikindiArasiHour && t.min == ikindiArasiMin && t.sec == ikindiArasiSec) {
    digitalWrite(Relay, LOW);
    Serial.println("Bell ON");
    delay(2000);
    digitalWrite(Relay, HIGH);
    Serial.println("Bell OFF");
  }

  else if (t.hour == ikindiArasiBitisHour && t.min == ikindiArasiBitisMin && t.sec == ikindiArasiBitisSec) {
    digitalWrite(Relay, LOW);
    Serial.println("Bell ON");
    delay(2000);
    digitalWrite(Relay, HIGH);
    Serial.println("Bell OFF");
  }

  else if (t.hour == aksamCikisHour && t.min == aksamCikisMin && t.sec == aksamCikisSec) {
    digitalWrite(Relay, LOW);
    Serial.println("Bell ON");
    delay(2000);
    digitalWrite(Relay, HIGH);
    Serial.println("Bell OFF");
  }
  else {
    digitalWrite(Relay, HIGH);
    Serial.println("Bell OFF");
  }

}
