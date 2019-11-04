#include <MotorShield.h>
MS_DCMotor motor(MOTOR_A);
void setup() {
  motor.run(BRAKE);
  motor.setSpeed(127.5);
}

void loop() {
  motor.run(RELEASE);
  motor.run(FORWARD);
  delay(2000) ;
  motor.run(BRAKE);
  delay(1000) ;
  motor.run(RELEASE);
  motor.run(BACKWARD);
  delay(2000) ;
  motor.run(BRAKE);
  delay(1000) ;
}
