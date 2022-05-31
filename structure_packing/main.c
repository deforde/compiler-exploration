#include <stdio.h>
#include <stdint.h>

typedef struct
{
    float *a;
	uint16_t b;
	uint16_t c;
	uint16_t d;
	uint64_t e;
	uint64_t f;
	float g;
	uint64_t h;
	float i;
} naive_struct_t;

typedef struct
{
    float *a;
	uint16_t b;
	uint16_t c;
	uint16_t d;
	float g;
	float i;
	uint64_t h;
	uint64_t e;
	uint64_t f;
} ordered_struct_t;

#pragma pack(push, 1)
typedef struct
{
    float *a;
	uint16_t b;
	uint16_t c;
	uint16_t d;
	float g;
	float i;
	uint64_t h;
	uint64_t e;
	uint64_t f;
} packed_struct_t;
#pragma pack(pop)

int main()
{
    printf("sizeof(naive_struct_t) = %lu\n", sizeof(naive_struct_t));
    printf("sizeof(ordered_struct_t) = %lu\n", sizeof(ordered_struct_t));
    printf("sizeof(packed_struct_t) = %lu\n", sizeof(packed_struct_t));
    return 0;
}

