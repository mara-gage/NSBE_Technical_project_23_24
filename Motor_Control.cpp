//const int inputA= 11;
//const int inputA2= 3; 
//const int enable3_4 = 8;

const int left1=6;
const int left2=5;
const int right1=11;
const int right2=10;

const int multi255 = 255; // Mutiple user input by 255 to get speed 
int input = 0; 
int speed = 0;

int enable_right=3;
int enable_left=2;



//max value is 255, for analogWrite 

void setup() {
//analogWrite(inputA,0);
//analogWrite(inputA2,0);
pinMode(enable_right, OUTPUT);
pinMode(enable_left, OUTPUT);
pinMode(left1, OUTPUT);
pinMode(left2, OUTPUT);
pinMode(right1, OUTPUT);
pinMode(right2, OUTPUT);
digitalWrite(enable_right, 1); 
digitalWrite(enable_left, 1); 
Serial.begin(9600);

  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:
//nalogWrite(inputA,0 ); 
//nalogWrite(inputA2,128); 
carForward (0.5); 

}

void carForward (float input) 
{
  int speed = input * 255;
  Serial.println(speed);
analogWrite(left1, speed);
analogWrite(left2, 0);
analogWrite(right1, 0);
analogWrite(right2, speed);
}

void carBackward(float input)
{
  int speed = input * 255;
analogWrite(left1, 0); 
analogWrite(left2, speed); 
analogWrite(right1,0); 
analogWrite(right2, speed);
}

void carRight(float input)
{
  int speed = input * 255;
  analogWrite(left1, speed); 
  analogWrite(left2, 0); 
  analogWrite(right1,0); 
  analogWrite(right2, speed);
}

void carLeft()
{
  int speed = input * 255;
  analogWrite(left1, 0); 
  analogWrite(left2, speed); 
  analogWrite(right1,speed); 
  analogWrite(right2, 0);
}
