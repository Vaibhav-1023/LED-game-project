int pinA = 2; 
int pinB = 3;
int pinC = 4;
int G1=5;
int G2A=6;
int G2B=7;
int G0=8;
int Vcc=9;
int upperl=1000;
const int potPin = A0; 
float potValue = 0;   
int key=10;
float fint =0;

void setup() {
  pinMode(pinA, OUTPUT);
  pinMode(pinB, OUTPUT);
  pinMode(pinC, OUTPUT);
  pinMode(G1,OUTPUT);
  pinMode(G2A,OUTPUT);
  pinMode(G2B,OUTPUT);
  pinMode(G0,OUTPUT);
  pinMode(Vcc,OUTPUT);
  pinMode(key, INPUT_PULLUP);
}
void loop() {
  digitalWrite(Vcc,HIGH);
  digitalWrite(G1,HIGH);
  digitalWrite(G0,LOW);
  digitalWrite(G2A,LOW);
  digitalWrite(G2B,LOW);
  for (int i = 0; i < 8; i++) {
  potValue = analogRead(potPin);
  fint=(potValue/1023.0)*upperl;

    digitalWrite(pinA, (i & 1));       // LSB
    digitalWrite(pinB, (i & 2) >> 1);  // Middle bit
    digitalWrite(pinC, (i & 4) >> 2);  // MSB
        if(i==0 && digitalRead(key)==LOW){
        for (int k = 0; k < 1;){
          digitalWrite(pinC, (i >> 2) & 1); // Set bit A
          digitalWrite(pinB, (i >> 1) & 1); // Set bit B
          digitalWrite(pinA, i & 1);        // Set bit C
        }
    }
    
    delay(fint); // Delay between each output
  }
  digitalWrite(G0,HIGH);
  digitalWrite(G1,LOW);
  for (int i = 0; i < 8; i++) {
    potValue = analogRead(potPin);
    fint=(potValue/1023.0)*upperl;
    digitalWrite(pinA, (i & 1));       // LSB
    digitalWrite(pinB, (i & 2) >> 1);  // Middle bit
    digitalWrite(pinC, (i & 4) >> 2);  // MSB
    
    delay(fint); // Delay between each output
  }

}