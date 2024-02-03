int red=13;
int yellow=9;
int green=12;
int button=8;
int reading=0;
int count=0;
void setup()
{
  pinMode(red, OUTPUT);
  pinMode(yellow, OUTPUT);
      pinMode(green, OUTPUT);
  
   pinMode(button, INPUT);
}

void loop()
{
reading=digitalRead(button);
if(reading==HIGH){
  count++;
  delay(100);
  if(count==1){
   digitalWrite(red,HIGH);
  }
  else if(count==2){
   digitalWrite(red,HIGH);
    digitalWrite(yellow,HIGH);
  }
  else if(count==3){
  digitalWrite(red,HIGH);
  digitalWrite(yellow,HIGH);
    digitalWrite(green,HIGH);
    delay(800);
      digitalWrite(red,LOW);
  digitalWrite(yellow,LOW);
    digitalWrite(green,LOW);
   
  }
  else{
    count=0;
   }
}
  
}