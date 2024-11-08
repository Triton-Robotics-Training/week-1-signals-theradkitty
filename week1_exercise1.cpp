//STARTER 
//THIS EXERCISE IS TO BE DONE IN THE ARM MBED SIMULATOR
//http://195.130.59.221/
//IF YOU HAVE ISSUES WITH THE SIMULATOR, CONTACT EMBEDDED LEAD
#include "mbed.h"

DigitalOut led(LED1);
DigitalIn button(BUTTON1);
int main() {
    while (1) {
        led = button;

        wait_ms(500);
    }
}
