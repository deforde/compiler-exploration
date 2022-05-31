#include <stdio.h>

unsigned reorder(unsigned* foo)
{
    *foo = 0;
    short* ptr = (short*)foo;
    *ptr = 1;
    return *foo;
}

int main()
{
    unsigned i = 2;
    printf("%u\n", reorder(&i));
    return 0;
}

