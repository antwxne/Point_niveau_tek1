#include <stdio.h>
#include <assert.h>
#include <string.h>

int main(void)
{
    char *test1 = "Plop";
    char *test2 = "PLIPP";

    assert(my_strlen(test1) == strlen(test1));
    assert(my_strlen(test2) == strlen(test2));
    return 0;
}
