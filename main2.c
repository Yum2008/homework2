#include <stdio.h>
#include <stdbool.h>

int main(){
    int a1,b1;
    scanf("%d%d", &a1,&b1);
    bool a = (bool)a1;
    bool b = (bool)b1;
    printf("MODULE_READY: %d\nFAULT_STATE: %d\nBOOL_SIZE: %ld\nFLAGS_SUM: %d\n",
        a,b,
        sizeof(bool),a+b);
    return 0;
}