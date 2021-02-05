int trigPin = 9;
int echoPin = 10;
int led = 7;


void setup() {
  Serial.begin(9600); 
   pinMode(led, OUTPUT);
   pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  // put your setup code here, to run once:

}

void loop() {
  long duration, distance;
  digitalWrite(trigPin,HIGH);
  delayMicroseconds(1000);
  digitalWrite(trigPin, LOW);
  duration=pulseIn(echoPin, HIGH);
  distance =(duration/2)/29.1;
  Serial.print(150-distance);
  Serial.println("CM");
  delay(10);
 
 if(((150-distance)<=20)) 
  {
    digitalWrite(led, LOW);
}
   else
 {
     digitalWrite(led, HIGH);
   }
}
