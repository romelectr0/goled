int in3 = 4;
int in2 = 8;
int in1 = 7;
int left = 3;
int right = 5;
int center = 6;
int timer;
void setup() {
  pinMode(in1,INPUT);
  pinMode(in2,INPUT);
  pinMode(left,OUTPUT);
  pinMode(right,OUTPUT);
  pinMode(center,OUTPUT);
}

void loop() {
  if (digitalRead(in3) == HIGH) {
          roll(center);
  }
  if (digitalRead(in1) == HIGH) {
    roll(right);
  }
  if (digitalRead(in2) == HIGH) {
    roll(left);
  }
  }
void roll(int out) {
  for(int y = 0;y < 7;y++) {
   for(int i = 0;i < 255;i++) {
            analogWrite(out,i);
            delay(5);
   }
   delay(50);
          for(int i = 0;i < 255;i++) {
          analogWrite(out,255-i);
          delay(5);
  }
}
  digitalWrite(out,LOW);
}
