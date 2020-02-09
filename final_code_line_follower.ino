int left1 = 3;
int left2 = 4;
int right1 = 5;
int right2 = 6;

int leftsp = 11;
int rightsp = 10;

const int irl = A0;
const int irr = A1;
const int irc = A2;
const int irc2 = A3;

int fast = 70;
int slow = 50;
int more_slow = 70;
int thresh = 800;


// cc2 right
void setup()
{
  pinMode(left1, OUTPUT);
  pinMode(left2, OUTPUT);
  pinMode(right1, OUTPUT);
  pinMode(right2, OUTPUT);
  pinMode(irl, INPUT);
  pinMode(irr, INPUT);
  pinMode(irc, INPUT);
  pinMode(irc2, INPUT);
  pinMode(leftsp, OUTPUT);
  pinMode(rightsp, OUTPUT);
  Serial.begin(9600);
  
}

int val1 = 0;
int val2 = 0;
int val3 =0;
int val4 =0;
int cr,cc,cl,cc2;
void loop()
{
  val1 = analogRead(irl);
  val3 = analogRead(irr);
  val2 = analogRead(irc);
  val4 = analogRead(irc2);
  // 0 means white
  // 1 means black
  if(val1>thresh) cl = 1;
  else cl =0;
  if(val2>thresh) cc = 1;
  else cc =0;
  if(val3>thresh) cr = 1;
  else cr =0;
  if(val4>thresh) cc2 = 1;
  else cc2 =0;
  

  /*cl = !digitalRead(val1);
  cc = !digitalRead(val2);
  cr = !digitalRead(val3);*/
  
  if(cl == 0 && (cc == 1 || cc2 ==1 ) && cr == 0)
  {
    digitalWrite(left1, LOW);
    digitalWrite(left2, HIGH);
    analogWrite(leftsp,fast);
    
    digitalWrite(right1, LOW);
    digitalWrite(right2, HIGH);
    analogWrite(rightsp,fast);
    // Going straight 
    
  }

  if(cc2 == 0 && cr == 0)
  {
     digitalWrite(left1, LOW);
    digitalWrite(left2, LOW);
    
    digitalWrite(right1, LOW);
    digitalWrite(right2, HIGH);
   analogWrite(rightsp,slow);
   // Turning left 
   
  }

  if(cl == 0 && cc == 0)
  {
     digitalWrite(left1, LOW);
    digitalWrite(left2, HIGH);
    analogWrite(leftsp,slow);
    
    digitalWrite(right1, LOW);
    digitalWrite(right2, LOW);
    // Turning Right 
  }

  if(cl == 0 && cc == 0 && cc2 == 0 && cr ==0)
  {
     digitalWrite(left1, HIGH);
    digitalWrite(left2, LOW);
    analogWrite(leftsp, more_slow);
    
    digitalWrite(right1, HIGH);
    digitalWrite(right2, LOW);
    analogWrite(rightsp, more_slow);
    

    // Going back
    
  }

  if(cr == 1 && cc2 == 1 && cc == 1 && cl == 0)
  {
      digitalWrite(left1, LOW);
    digitalWrite(left2, HIGH);
    analogWrite(leftsp,slow);
    
    digitalWrite(right1, LOW);
    digitalWrite(right2, LOW);
    // Turning Right
  }

  if(cr == 0 && cc2 == 1 && cc == 1 && cl == 1)
  {
    digitalWrite(left1, LOW);
    digitalWrite(left2, LOW);
    
    digitalWrite(right1, LOW);
    digitalWrite(right2, HIGH);
   analogWrite(rightsp,slow);
   //Turning left
  }

  if(cl == 1 && (cc == 1 || cc2 == 1) && cr ==1)
  {
    digitalWrite(left1, LOW);
    digitalWrite(left2, HIGH);
    analogWrite(leftsp, more_slow);
    
    
    
    digitalWrite(right1, LOW);
    digitalWrite(right2, HIGH);
    analogWrite(rightsp, more_slow);

    // Going front
    
  }

  
  
}
