#include <16f84a.h>
#use delay(clock=10MHz)
#fuses HS
void main()
{
while(TRUE)
{
output_b(0x01);
delay_ms(1000);
output_b(0x02);
delay_ms(1000);
output_b(0x04);
delay_ms(1000);
output_b(0x08);
delay_ms(1000);
output_b(0x10);
delay_ms(1000);
output_b(0x20);
delay_ms(1000);
output_b(0x40);
delay_ms(1000);
output_b(0x80);
delay_ms(1000);
output_b(0xFF);
delay_ms(1000);
}
}
