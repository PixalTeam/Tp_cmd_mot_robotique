#include <MotorShield.h>
MS_DCMotor motora(MOTOR_A);
MS_DCMotor motorb(MOTOR_B);
void setup() {
  motora.run(BRAKE);
  motora.setSpeed(255);
  motorb.run(BRAKE);
  motorb.setSpeed(255);
  pinMode(4, INPUT);
  pinMode(5, INPUT);
  pinMode(6, INPUT);
  pinMode(7, INPUT);
}
void loop() {
  if (digitalRead(4) == '1') {
    motora.run(RELEASE);
    motorb.run(RELEASE);

    motora.run(BACKWARD);
    motorb.run(FORWARD);
  }
  if (digitalRead(5) == '1') {
    motora.run(RELEASE);
    motorb.run(RELEASE);

    motora.run(FORWARD);
    motorb.run(BACKWARD);
  }
  if (digitalRead(6) == '1') {
    motora.run(RELEASE);
    motorb.run(RELEASE);

    motora.run(FORWARD);
    motorb.run(FORWARD);
  }
  if (digitalRead(7) == '1') {
    motora.run(RELEASE);
    motorb.run(RELEASE);

    motora.run(BACKWARD);
    motorb.run(BACKWARD);
  }
}
