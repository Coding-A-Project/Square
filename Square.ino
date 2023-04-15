int PWMA = 5;
int PWMB = 6;
int BIN_1 = 8;
int AIN_1 = 7;
int STBY = 3;
int i = 0;
void setup() {
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(3,OUTPUT);
  digitalWrite(PWMA, HIGH);
  digitalWrite(PWMB, HIGH);
}
void loop() {
  while(i<4){
    digitalWrite(AIN_1, HIGH);
    digitalWrite(BIN_1, HIGH);
    digitalWrite(STBY, HIGH);
    delay(1000);
    digitalWrite(STBY, LOW);
    delay(2000);
    digitalWrite(AIN_1, LOW);
    digitalWrite(BIN_1, HIGH);
    digitalWrite(STBY, HIGH);
    delay(175);
    digitalWrite(STBY, LOW);    
    delay(3000);
    i=i+1;
  }
  digitalWrite(STBY, LOW);
  digitalWrite(PWMA, LOW);
  digitalWrite(PWMB, LOW);
}