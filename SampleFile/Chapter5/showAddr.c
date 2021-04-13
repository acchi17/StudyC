#include <stdio.h>

int main(void)
{
    char code  = 'E';
    int  num   = 1234567890;

    unsigned char *addr1 = &code;
    unsigned char *addr2 = &num;

    printf("Address of \"code\": 0x%x\n", addr1);
    printf("Value   of \"code\": %x\n",  *addr1);
    printf("\n");
    printf("Address of \"num\" : 0x%x\n",    addr2);
    printf("Value   of \"num\" : 0x%02x\n", *addr2);
    printf("Address of \"num\" : 0x%x\n",    (addr2+1));
    printf("Value   of \"num\" : 0x%02x\n", *(addr2+1));
    printf("Address of \"num\" : 0x%x\n",    (addr2+2));
    printf("Value   of \"num\" : 0x%02x\n", *(addr2+2));
    printf("Address of \"num\" : 0x%x\n",    (addr2+3));
    printf("Value   of \"num\" : 0x%02x\n", *(addr2+3));
}