#include <stdio.h>
#include <stdint.h>

int main(){
    int a; unsigned int b1; float c;
    scanf("%x%o%f", &a, &b1, &c);
    uint8_t b = (uint8_t)b1;
    uint16_t d = a+b;
    printf("PACKET_ID: %d\nSTATUS_CODE: %u\nSTATUS_CHAR: %c\nVOLTAGE: %.2f\nCHECKSUM: %u\n",a,b,b,c,d);
    return 0;
}