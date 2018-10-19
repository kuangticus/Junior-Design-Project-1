int ledPin = 9;      // LED connected to digital pin 9
int analogPin = 3;   // potentiometer connected to analog pin 3
int voltage = 0;

void setup() {
  pinMode(ledPin, OUTPUT); // setting output pin analog write
  Serial.begin(9600); // serial for software testing 
}
void loop() {
  voltage = analogRead(analogPin); // this will be the voltage read in from potentiometer
  analogWrite( ledPin, voltage/4 ); // writing analogy to digital pin
  Serial.println(voltage/4); // prints the a number from 0-255 on the serial monitor
  delay(100); // delay make the changes smoother, dont go past 300 or else super slow
}
