#include <MotorShield.h> //INCLURE LA BIBLIOTHEQUE
MS_DCMotor motora(MOTOR_A); //DETECTER LE MOTEUR A
MS_DCMotor motorb(MOTOR_B); //DETECTER LE MOTEUR B
void setup() {
  motora.run(BRAKE); //COUPER LE MOTEUR A
  motora.setSpeed(255); //METTRE LA VITESSE DU MOTEUR A AU MAX
  motorb.run(BRAKE); //COUPER LE MOTEUR B
  motorb.setSpeed(255); //METTRE LA VITESSE DU MOTEUR B AU MAX
  pinMode(4, INPUT); //BOUTON GAUCHE RELIEE AU PIN 4
  pinMode(5, INPUT); //BOUTON DROIT RELIEE AU PIN 5
  pinMode(6, INPUT); //BOUTON AVANT RELIEE AU PIN 6
  pinMode(7, INPUT); //BOUTON ARRIERE RELIEE AU PIN 7
}
void loop() {
  if (digitalRead(4) == 1) { //SI LE BOUTON GAUCHE EST POUSSE
    motora.run(RELEASE); //LIBERER LE MOTEUR A
    motorb.run(RELEASE); //LIBERER LE MOTEUR B

    motora.run(BACKWARD); //FAIRE TOUENR LE MOTEUR A DANS LE SENS ANTIHORAIRE
    motorb.run(FORWARD); //FAIRE TOUENR LE MOTEUR B DANS LE SENS HORAIRE
  }
  else if (digitalRead(5) == 1) { //SI LE BOUTON DROIT EST POUSSE
    motora.run(RELEASE);//LIBERER LE MOTEUR A
    motorb.run(RELEASE);//LIBERER LE MOTEUR B

    motorb.run(BACKWARD); //FAIRE TOUENR LE MOTEUR A DANS LE SENS ANTIHORAIRE
    motora.run(FORWARD); //FAIRE TOUENR LE MOTEUR B DANS LE SENS HORAIRE
  }
  else if (digitalRead(6) == 1) { //SI LE BOUTON AVANT EST POUSSE
    motora.run(RELEASE);//LIBERER LE MOTEUR A
    motorb.run(RELEASE);//LIBERER LE MOTEUR B

    motora.run(FORWARD); //FAIRE TOUENR LE MOTEUR B DANS LE SENS HORAIRE
    motorb.run(FORWARD); //FAIRE TOUENR LE MOTEUR B DANS LE SENS HORAIRE
  }
  else if (digitalRead(7) == 1) { //SI LE BOUTON ARRIERE EST POUSSE
    motora.run(RELEASE);//LIBERER LE MOTEUR A
    motorb.run(RELEASE);//LIBERER LE MOTEUR B

    motora.run(BACKWARD); //FAIRE TOUENR LE MOTEUR A DANS LE SENS ANTIHORAIRE
    motorb.run(BACKWARD); //FAIRE TOUENR LE MOTEUR A DANS LE SENS ANTIHORAIRE
  }
  else {
    motora.run(BRAKE); //COUPER LE MOTEUR A
    motorb.run(BRAKE); //COUPER LE MOTEUR B
  }
}
