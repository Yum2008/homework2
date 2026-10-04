#include <stdio.h>
#include <stdint.h>

int main(){
    uint8_t a;
    scanf("%u",&a);
    uint8_t a1 = a+67, a2 = a<<1, a3 = a*a;
    
    printf("ADD: %u\nMUL2: %u\nSQR: %u\n",
    a1,a2,a3);
    return 0;
}