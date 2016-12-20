
#include <Servo.h>

Servo myservo;  // create servo object to control a servo
// twelve servo objects can be created on most boards


int pos = 0;    // variable to store the servo position

void setup() {
  
}

void loop() {
  myservo.attach(9);
  for (pos = 0; pos <= 180; pos += 1) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    myservo.write(pos);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15ms for the servo to reach the position
  }
  delay(3000);
  for (pos = 180; pos >= 0; pos -= 1) { // goes from 180 degrees to 0 degrees
    myservo.write(pos);              // tell servo to go to position in variable 'pos'
    if(pos !=0 && pos % 45 == 0) 
      delay(500);
    delay(15);                       // waits 15ms for the servo to reach the position
  }
  //avoid buzz, reattach each cycle.
  myservo.detach();
  delay(3000);
}

