void setup()
{
  volatile uint8_t *ddr, *data;   //data direction register, data register
  
  // address
  ddr=(volatile uint8_t *)0x24;
  data=(volatile uint8_t *)0x25;
  
  //assign PB5 as output
  *ddr=0x20;  

  //blink
  while(1)
  {
    *data^=0x20;                  //Toggle
     delay(1000);
  }

}
