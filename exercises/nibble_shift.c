//swap the nibble &change endianness
#include<stdio.h>
#define  swap(x) ((x&0xF000)>>4 |(x&0x0F00)<<4 |(x&0x00F0)>>4|(x&0x000F)<<4)
#define  endian(x) ((x&0xFF000000)>>24 |(x&0xFF0000)>>8 |(x&0xFF00)<<8 |(x&0xFF)<<24)
int main()
{
 int a=0x1234;
 int b=0x12345678;
 printf("%x\t%x\t%x\t%x\n",a,swap(a),b,endian(b));
 return 0;
}
