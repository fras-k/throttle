#include <Joystick.h>

#define throttle    x
#define switch1     x
#define button1     x
#define button2     x
#define button3     x
#define button4     x
#define button5     x    
#define button6     x
#define button7     x
#define button8     x
#define button9     x
#define button10    x
#define button11    x
#define button12    x
#define button13    x
#define button14    x
#define button15    x

Joystick_ Joystick(0x15, JOYSTICK_TYPE_JOYSTICK, 16, 0, false, false, false, false, false, false, false, true, false, false, false);

const bool initAutoSendState = true;

int throttleV = 0;

int lastButton1State = 0;
int lastButton2State = 0;
int lastButton3State = 0;
int lastButton4State = 0;
int lastButton5State = 0;
int lastButton6State = 0;
int lastButton7State = 0;
int lastButton8State = 0;
int lastButton9State = 0;
int lastButton10State = 0;
int lastButton11State = 0;
int lastButton12State = 0;
int lastButton13State = 0;
int lastButton14State = 0;
int lastButton15State = 0;
int lastButton16State = 0;

void setup(){
pinMode(button1, INPUT_PULLUP);
pinMode(button2, INPUT_PULLUP);
pinMode(button3, INPUT_PULLUP);
pinMode(button4, INPUT_PULLUP);
pinMode(button5, INPUT_PULLUP);
pinMode(button6, INPUT_PULLUP);
pinMode(button7, INPUT_PULLUP);
pinMode(button8, INPUT_PULLUP);
pinMode(button9, INPUT_PULLUP);
pinMode(button10, INPUT_PULLUP);
pinMode(button11, INPUT_PULLUP);
pinMode(button12, INPUT_PULLUP);
pinMode(button13, INPUT_PULLUP);
pinMode(button14, INPUT_PULLUP);
pinMode(button15, INPUT_PULLUP);
pinMode(switch1, INPUT_PULLUP);

Joystick.begin();

}

void loop(){

throttleV = analogRead(throttle);
throttleV = map(throttleV, 0,1023,0,255);
Joystick.setThrotlle(throttleV);

int currentButton1State = !digitalRead(button1);
if (currentButton1State != lastButton1State){
Joystick.setButton (0, currentButton1State);
lastButton1State = currentButton1State;
}
int currentButton2State = !digitalRead(button2);
if (currentButton2State != lastButton2State){
Joystick.setButton (1, currentButton2State);
lastButton2State = currentButton2State;
}
int currentButton3State = !digitalRead(button3);
if (currentButton3State != lastButton3State){
Joystick.setButton (2, currentButton3State);
lastButton3State = currentButton3State;
}
int currentButton4State = !digitalRead(button4);
if (currentButton4State != lastButton4State){
Joystick.setButton (3, currentButton4State);
lastButton4State = currentButton4State;
}
int currentButton5State = !digitalRead(button5);
if (currentButton5State != lastButton5State){
Joystick.setButton (4, currentButton5State);
lastButton5State = currentButton5State;
}
int currentButton6State = !digitalRead(button6);
if (currentButton6State != lastButton6State){
Joystick.setButton (5, currentButton6State);
lastButton6State = currentButton6State;
}
int currentButton7State = !digitalRead(button7);
if (currentButton7State != lastButton7State){
Joystick.setButton (6, currentButton7State);
lastButton7State = currentButton7State;
}
int currentButton8State = !digitalRead(button8);
if (currentButton8State != lastButton8State){
Joystick.setButton (7, currentButton8State);
lastButton8State = currentButton8State;
}
int currentButton9State = !digitalRead(button9);
if (currentButton9State != lastButton9State){
Joystick.setButton (8, currentButton9State);
lastButton9State = currentButton9State;
}
int currentButton10State = !digitalRead(button10);
if (currentButton10State != lastButton10State){
Joystick.setButton (9, currentButton10State);
lastButton10State = currentButton10State;
}
int currentButton11State = !digitalRead(button11);
if (currentButton11State != lastButton11State){
Joystick.setButton (10, currentButton11State);
lastButton11State = currentButton11State;
}
int currentButton12State = !digitalRead(button12);
if (currentButton12State != lastButton12State){
Joystick.setButton (11, currentButton12State);
lastButton12State = currentButton12State;
}
int currentButton13State = !digitalRead(button13);
if (currentButton13State != lastButton13State){
Joystick.setButton (12, currentButton13State);
lastButton13State = currentButton13State;
}
int currentButton14State = !digitalRead(button14);
if (currentButton14State != lastButton14State){
Joystick.setButton (13, currentButton14State);
lastButton14State = currentButton14State;
}
int currentButton15State = !digitalRead(button15);
if (currentButton15State != lastButton15State){
Joystick.setButton (14, currentButton15State);
lastButton15State = currentButton15State;
}
int currentButton1State = !digitalRead(switch1);
if (currentButton1State != lastButton1State){
Joystick.setButton (15, currentButton1State);
lastButton1State = currentButton1State;
}

delay(10);

}