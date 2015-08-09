#include <stdio.h>
#include <stdint.h>

int main(int argc, char* argv[]) {
    // int8_t a = 0;
    // uint8_t b = 0;

    printf("INT(8)_MAX = %d, INT(8)_MIN = %d, UINT(8)_MAX = %u\n",
        INT8_MAX, INT8_MIN, UINT8_MAX);
    printf("INT(16)_MAX = %d, INT(16)_MIN = %d, UINT(16)_MAX = %u\n",
        INT16_MAX, INT16_MIN, UINT16_MAX);
    printf("INT(32)_MAX = %d, INT(32)_MIN = %d, UINT(32)_MAX = %u\n",
        INT32_MAX, INT32_MIN, UINT32_MAX);
    printf("INT(64)_MAX = %lld, INT(64)_MIN = %lld, UINT(64)_MAX = %llu\n",
        INT64_MAX, INT64_MIN, UINT64_MAX);

    size_t sizet = 0;
    printf("sizeof(size_t) = %lu\n", sizeof(size_t));

    while (1) {
        printf("sizet = %ld\n", sizet);
        sizet++;
    }

    return 0;
}