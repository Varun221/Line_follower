
int left1 = 3;
int left2 = 4;
int right1 = 5;
int right2 = 6;
int rightsp = 10;
int leftsp = 11;
int speed_left = 70;
int speed_right = 70;

void setup() {
  // put your setup code here, to run once:
  pinMode(left1, OUTPUT);
  pinMode(left2, OUTPUT);
  pinMode(right1, OUTPUT);
  pinMode(right2, OUTPUT);
  pinMode(rightsp, OUTPUT);
  pinMode(leftsp, OUTPUT);

}

void loop() {
  digitalWrite(left1, LOW);
  digitalWrite(left2, HIGH);
  digitalWrite(right1, LOW);
  digitalWrite(right2, HIGH);
   analogWrite(rightsp,speed_right);
   analogWrite(leftsp,speed_left);
  
  

}
