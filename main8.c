#include <stdio.h>
#include <float.h>

int main(){
    printf("FLOAT: size=%ld, digits=%d, max=%e\n",sizeof(float),FLT_DIG,FLT_MAX);
    printf("DOUBLE: size=%ld, digits=%d, max=%e\n",sizeof(double),DBL_DIG,DBL_MAX);
    printf("LDOUBLE: size=%ld, digits=%d, max=%Le\n",sizeof(long double),LDBL_DIG,LDBL_MAX);
    return 0;
}