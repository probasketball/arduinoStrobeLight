float dial;
int lightPin = 12;
void setup() {
  // put your setup code here, to run once:
pinMode(lightPin, OUTPUT);
pinMode(A1, INPUT);
Serial.begin(9600);
}

void loop() {
  //this code is verry personalized for my needs and is verry messy
  //this will work for most people out of the box but you might need to modify values for your potentiometer/resistors

  
  dial = analogRead(A1)+20 + ((analogRead(A1)-20)*0.09);

  digitalWrite(lightPin, HIGH);
  delay(5);
  digitalWrite(lightPin, LOW);
  delay(dial - 5);

  Serial.println((1/(dial/1000))*60);
}
