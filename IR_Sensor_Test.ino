int LED = 11;
int IR = 8;
void setup() {
  // put your setup code here, to run once:
pinMode(IR, INPUT);
pinMode(LED, OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
int  IRvalue = digitalRead(8);
Serial.println(IRvalue);
if(IRvalue==1){
  digitalWrite(LED, HIGH);
}
if(IRvalue==0){
  digitalWrite(LED, LOW);
}
}
