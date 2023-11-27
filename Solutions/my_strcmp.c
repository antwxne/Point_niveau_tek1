#include <assert.h>

int my_strcmp(const char *str1, const char *str2)
{
  return (*str1 || *str2) && *str1 == *str2 ?
      my_strcmp(str1 + 1, str2 + 1) :
      *str1 - *str2;
}



int main(void)
{
    char *str = "PLOP";

    assert(my_strcmp(str, "PLOP") == 0);
    assert(my_strcmp(str, "PLOPI") != 0);
}
