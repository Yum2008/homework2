#include <stdio.h>
#include <stdint.h>

int main(){
    long double a;
    scanf("%Lf", &a);
    double b = a; float c = a;
    printf("FLOAT: %.6f\nDOUBLE: %.6f\nLDOUBLE: %.6Lf\nFLOAT+1: %.6f\nDOUBLE+1: %.6f\nLDOUBLE+1: %.6Lf\n",
       c, b, a, c + 1, b + 1, a + 1);
    return 0;
}