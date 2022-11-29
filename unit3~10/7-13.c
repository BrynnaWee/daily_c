#include <stdio.h>
#include <stdint.h>

int main()
{
    int8_t num1 = INT8_MIN; //8bit = 1byte
    uint16_t num2 = UINT16_MAX;//16bit = 2byte
    uint32_t num3 = 0; //32bit = 4byte
    int64_t num4 = INT64_MAX;//64bit = 8byte
 
    printf("%d %u %u %lld\n", num1, num2, num3, num4);

    return 0;
}