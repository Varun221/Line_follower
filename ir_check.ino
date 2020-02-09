const int irl = A0;
const int irr = A1;
const int irc = A2;
const int irc2= A3;

void setup() {
  // put your setup code here, to run once:

 Serial.begin(9600);
 pinMode(irl, INPUT);
 pinMode(irr, INPUT);
 pinMode(irc, INPUT);
  pinMode(irc2, INPUT);
 
}

int val1 = 0;
int val2 = 0;
int val3 =0;
int val4 = 0;
void loop() {
  // put your main code here, to run repeatedly:

  val1 = analogRead(irl);
  val2 = analogRead(irc);
  val3 = analogRead(irr);
  val4 = analogRead(irc2);
    Serial.println("-------------------------------------------");
  Serial.println(val1);
  Serial.println(" ----- ");
  Serial.println(val2);
  Serial.println(" ----- ");
  Serial.println(val3);
    Serial.println(" ----- ");
  Serial.println(val4);
  Serial.println("-------------------------------------------");
  Serial.println(" \n");
  delay(500);


 
}
