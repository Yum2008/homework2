#include <stdio.h>
#include <limits.h>

int main(){
    int a = (unsigned int)INT_MAX * 2u +1u == UINT_MAX;
    int b = INT_MIN, c = INT_MAX;
    unsigned int d = UINT_MAX;
    printf("INT_MIN: %d\nINT_MAX: %d\nUINT_MAX: %u\nRANGE_OK: %d\n",b,c,d,a);

    return 0;
}