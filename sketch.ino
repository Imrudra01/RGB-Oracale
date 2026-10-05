int pinred=11;
int pinblue=6;
int pingreen=10;
int brightness=205;
String choosecolour;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(pinred, OUTPUT);
pinMode(pinblue, OUTPUT);
pinMode(pingreen, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
Serial.println("tell the colour u want ? ");
while(Serial.available() == 0){};
choosecolour = Serial.readString();
choosecolour.trim();

if (choosecolour == "red"){
analogWrite(pinred,brightness);
analogWrite(pingreen,0);
analogWrite(pinblue,0);
}

if (choosecolour == "green"){
analogWrite(pinred,0);
analogWrite(pingreen,brightness);
analogWrite(pinblue,0);
}

if (choosecolour == "blue"){
analogWrite(pinred,0);
analogWrite(pingreen,0);
analogWrite(pinblue,brightness);
}
if (choosecolour == "yellow") {
    analogWrite(pinred, brightness);
    analogWrite(pingreen, brightness);
    analogWrite(pinblue, 0);
  }
if (choosecolour == "cyan" || choosecolour == "aqua") {
    analogWrite(pinred, 0);
    analogWrite(pingreen, brightness);
    analogWrite(pinblue, brightness);
  }
if (choosecolour == "magenta" || choosecolour == "purple" || choosecolour == "violet") {
    analogWrite(pinred, brightness);
    analogWrite(pingreen, 0);
    analogWrite(pinblue, brightness);
  }
if (choosecolour == "white") {
    analogWrite(pinred, brightness);
    analogWrite(pingreen, brightness);
    analogWrite(pinblue, brightness);
  }
if (choosecolour == "orange") {
    analogWrite(pinred, brightness);
    analogWrite(pingreen, brightness / 2);
    analogWrite(pinblue, 0);
  }
if (choosecolour == "pink") {
    analogWrite(pinred, brightness);
    analogWrite(pingreen, brightness / 4);
    analogWrite(pinblue, brightness / 2);
  }
if (choosecolour == "skyblue" || choosecolour == "lightblue") {
    analogWrite(pinred, 0);
    analogWrite(pingreen, brightness / 2);
    analogWrite(pinblue, brightness);
  }
if (choosecolour == "lime") {
    analogWrite(pinred, brightness / 2);
    analogWrite(pingreen, brightness);
    analogWrite(pinblue, 0);
  }
if (choosecolour == "teal") {
    analogWrite(pinred, 0);
    analogWrite(pingreen, brightness / 2);
    analogWrite(pinblue, brightness / 2);
  }
if (choosecolour == "indigo") {
    analogWrite(pinred, brightness / 4);
    analogWrite(pingreen, 0);
    analogWrite(pinblue, brightness);
  }
if (choosecolour == "maroon") {
    analogWrite(pinred, brightness / 2);
    analogWrite(pingreen, 0);
    analogWrite(pinblue, 0);
  }
if (choosecolour == "brown") {
    analogWrite(pinred, brightness);
    analogWrite(pingreen, brightness / 3);
    analogWrite(pinblue, 0);
  }
if (choosecolour == "gold") {
    analogWrite(pinred, brightness);
    analogWrite(pingreen, brightness / 2);
    analogWrite(pinblue, 0);
  }
if (choosecolour == "turquoise") {
    analogWrite(pinred, 0);
    analogWrite(pingreen, brightness);
    analogWrite(pinblue, brightness / 2);
  }
if (choosecolour == "amber") {
    analogWrite(pinred, brightness);
    analogWrite(pingreen, brightness / 3);
    analogWrite(pinblue, 0);
  }
if (choosecolour == "off" || choosecolour == "none" || choosecolour == "black") {
    analogWrite(pinred, 0);
    analogWrite(pingreen, 0);
    analogWrite(pinblue, 0);
  }

}
