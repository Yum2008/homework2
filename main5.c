#include <stdint.h>
#include <stdio.h>
#include <limits.h>

int main(){
    long long a = INT8_MAX-INT8_MIN+1, b = UINT8_MAX+1, c = INT16_MAX-INT16_MIN+1, d = UINT16_MAX+1, e = (int64_t)INT32_MAX-INT32_MIN+1, f = (int64_t)UINT32_MAX+1;
    printf("INT8: size=%ld, min=%d, max=%d, values=%lld\n", sizeof(int8_t), INT8_MIN, INT8_MAX, a);
    printf("UINT8: size=%ld, min=%d, max=%d, values=%lld\n", sizeof(uint8_t), 0, UINT8_MAX, b);
    printf("INT16: size=%ld, min=%d, max=%d, values=%lld\n", sizeof(int16_t), INT16_MIN, INT16_MAX, c);
    printf("UINT16: size=%ld, min=%d, max=%d, values=%lld\n", sizeof(uint16_t), 0, UINT16_MAX, d);
    printf("INT32: size=%ld, min=%d, max=%d, values=%lld\n", sizeof(int32_t), INT32_MIN, INT32_MAX, e);
    printf("UINT32: size=%ld, min=%d, max=%u, values=%lld\n", sizeof(uint32_t), 0, UINT32_MAX, f);
    return 0;
}