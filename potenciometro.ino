int estado;
int pot=A0;
int led1=2;
int led2=3;
int led3=4;
int led4=5;

void setup() {
pinMode(led1, OUTPUT);
pinMode(led2, OUTPUT);
pinMode(led3, OUTPUT);
pinMode(led4, OUTPUT);
Serial.begin(9600);
}

void loop() {
estado=analogRead(pot);

if( estado>=0 && estado<= 256) {
digitalWrite(led1, HIGH);

}
else{
digitalWrite(led1, LOW);
}

if( estado>=257 && estado<= 512) {
digitalWrite(led2, HIGH);
}
else{
digitalWrite(led2, LOW);
}

if( estado>=513 && estado <= 768) {
digitalWrite(led3, HIGH);

}
else{
digitalWrite(led3, LOW);
}

if( estado>=769 && estado <= 1023) {
digitalWrite(led4, HIGH);

}
else{
  digitalWrite(led4, LOW);
}
}
