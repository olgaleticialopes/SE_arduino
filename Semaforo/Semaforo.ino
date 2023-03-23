int ledRed = 9; int ledGreen = 11; int ledYellow = 10;
int timeRed = 5000, timeGreen = 3000, timeYellow = 1000;




void setup() {
  pinMode (ledRed, OUTPUT);
  pinMode (ledGreen, OUTPUT);
  pinMode (ledYellow, OUTPUT);
}

void loop() {
  digitalWrite(ledRed, 1);
   digitalWrite(ledGreen, 0);
    digitalWrite(ledYellow, 0);
  delay(timeRed);

digitalWrite(ledRed, 0);
   digitalWrite(ledGreen, 1);
    digitalWrite(ledYellow, 0);
  delay(timeYellow);
  
  digitalWrite(ledRed, 0);
   digitalWrite(ledGreen, 0);
    digitalWrite(ledYellow, 1);
  delay(timeGreen);
  
  
 

}
