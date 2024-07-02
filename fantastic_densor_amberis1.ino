int BUTTONPIN=2;
int BUTTONSTATE=0;

int ledpin=5;
void setup() {
  pinMode(ledpin,OUTPUT);
 
  
  pinMode(BUTTONPIN,INPUT);
  // put your setup code here, to run once:

}

void loop() {
  BUTTONSTATE=digitalRead(BUTTONPIN);
              if(BUTTONSTATE==HIGH){
  digitalWrite(ledpin,HIGH);
                delay(3000);}
              else{digitalWrite(ledpin,LOW);
                   delay(3000);}
              }