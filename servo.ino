#include <Servo.h>
  
/*byte servoPin1 = 9 ;
byte servoPin2 = 10 ;
byte servoPin3 = 11 ;
byte servoPin4 = 12 ;*/
Servo servo_r ;
Servo servo_l ;
Servo servo_u ;
Servo servo_d ;
int p_r = A0, p_l = A1, p_u = A2, p_d = A3 ;
int val_r, val_l, val_u, val_d ;

void setup() {
  servo_r.attach(9);
  servo_l.attach(10);
  servo_u.attach(11);
  servo_d.attach(12);


  servo_r.writeMicroseconds(1500); // signal initialization.
  servo_l.writeMicroseconds(1500); 
  servo_u.writeMicroseconds(1500); 
  servo_d.writeMicroseconds(1500); 
  //delay(1000); // delay to allow the ESC to recognize the stopped signal
  
}

void loop() {
  //int signal = 1500; // Set signal value, which should be between 1100 and 1900 

  //servo.writeMicroseconds(signal); // Send signal to ESC.
  val_r = analogRead (p_r) ;
  val_r = map (val_r, 0, 1023, 0, 180) ;
  servo_r.write(val_r) ;
  delay (1000) ;
  
  val_l = analogRead (p_l) ;
  val_l = map (val_l, 0, 1023, 0, 180) ;
  servo_l.write(val_l) ;
  delay (1000) ;

  val_u = analogRead (p_u) ;
  val_u = map (val_u, 0, 1023, 0, 180) ;
  servo_u.write(val_u) ;
  delay (1000) ;

  val_d = analogRead (p_d) ;
  val_d = map (val_d, 0, 1023, 0, 180) ;
  servo_d.write(val_d) ;
  delay (1000) ;
  
}
