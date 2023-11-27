#include <assert.h>
#include <string.h>

char *my_strcpy(char *dest, const char *src)
{
  return (*dest = *src) ? my_strcpy(dest + 1, src + 1) : "";
}

int main(void)
{
  char dest[100];
  char *src = "Hello world!";

  my_strcpy(dest, src);
  assert(strcmp(dest, src) == 0);
  return 0;
}
