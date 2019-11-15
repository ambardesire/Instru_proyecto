void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly: 
  float s = analogRead(A3);
  float vo = s * (3.3 / 1024.0);
  Serial.println(vo);
  delay(1000);
 
}
