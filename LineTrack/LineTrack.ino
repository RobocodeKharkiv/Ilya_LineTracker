#define PWMA 5
#define PWMB 10
#define SPEED 255
#define SPEED_LEFT 6
#define SPEED_RIGHT 5
#define STATE_FORWARD    0
#define STATE_RIGHT      1
#define STATE_LEFT       2
int state = STATE_FORWARD;
void setup()
{
  state = STATE_FORWARD;
  analogWrite(PWMA, SPEED);
  analogWrite(PWMB, SPEED);
  digitalWrite(6,HIGH);
  digitalWrite(8,HIGH);
}
void loop()
{
  
}
