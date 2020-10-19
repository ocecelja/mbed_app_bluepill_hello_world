#include "mbed.h"

//UnbufferedSerial pc(PA_2, PA_3); // TX, RX
DigitalOut  myled(PC_13);   // on-board LED

int main()
{
    while(1) {
        // The on-board LED is connected via a resistor to +3.3V (not to GND). 
        // So the LED is active on 0
        myled = 0;      // turn the LED on
        ThisThread::sleep_for(200);   // wait 200 millisecond
        myled = 1;      // turn the LED off
//        pc.write("Blink\r\n", 8);
        ThisThread::sleep_for(1000);  // wait 1000 millisecond
    }
}