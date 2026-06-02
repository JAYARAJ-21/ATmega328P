#include <util/delay.h>

int main(void){

	volatile uint8_t *ddr, *data;
        ddr=(volatile uint8_t *)0x24; data=(volatile uint8_t *)0x25;
        
        //set PB5 as output
        *ddr|=(1<<5); 
        
        //blink
        while(1){
            *data^=(1<<5);
           _delay_ms(500);   
       }

}
