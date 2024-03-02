int pinSensor = 4;
int led = 8;

void setup() {
  pinMode(led, OUTPUT);
  pinMode(pinSensor, INPUT);
  Serial.begin(9600);
}

void loop() {
  if(digitalRead(pinSensor) == LOW){
    Serial.println("Movimento");
    digitalWrite(led, HIGH);
  }else{
    Serial.println("Sem Movimento");
    digitalWrite(led, LOW);
  }
}
