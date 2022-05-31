#include <stdio.h>

#include "foo.h"
#include "bar.h"

int main()
{
    printf("foo() = %i\nbar() = %i\n", foo(), bar());

    return 0;
}

