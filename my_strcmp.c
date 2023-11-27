#include <assert.h>

int main(void)
{
    char *str = "PLOP";

    assert(my_strcmp(str, "PLOP") == 0);
    assert(my_strcmp(str, "PLOPI") != 0);
}
