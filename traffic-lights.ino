int LED1=0;
int LED2=1;
int LED3=2;
void setup() {
  
  // put yPINour setup code here, to run once:
  pinMode(0,OUTPUT);
  pinMode(1,OUTPUT);
  pinMode(2,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(LED1,HIGH);
  delay(5000);
  digitalWrite(LED1,LOW);
  delay(1000);
  digitalWrite(LED2,HIGH);
  delay(5000);
  digitalWrite(LED2,LOW);
  delay(1000);
  digitalWrite(LED3,HIGH);
  delay(5000);
  digitalWrite(LED3,LOW);
  delay(1000);

}
