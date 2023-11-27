#include <assert.h>
#include <string.h>


int main(void)
{
    char dest[100];
    char *src = "Hello world!";

    my_strcpy(dest, src);
    assert(strcmp(dest, src) == 0);
    return 0;
}
