#include <stdio.h>

int main(){
    int a1 = 10,b1 = 010, c1 = 0x10;
    char a = 'A';
    printf("DEC_10: %d\nOCT_10: %d\nHEX_10: %d\nINT_SUFFIX: %ld %ld %ld %ld\n",a1,b1,c1, sizeof(10), sizeof(10u),sizeof(10LL),sizeof(10ULL));
    printf("FLOAT_SUFFIX: %ld %ld %zu\nFLOAT_EQ: %d\nCHAR_FORMS: %d %d %d\n",
       sizeof(0.1f), sizeof(0.1), sizeof(0.1L), 0.1f == 0.1, 'A', '\x41', '\101');
    printf("CHAR_LIT_VAR_STR: %ld %ld %ld\n",sizeof('A'),sizeof(a),sizeof("A"));

    return 0;
}