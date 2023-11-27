#include <unistd.h>

static void my_putchar(char c)
{
    write(1, &c, 1);
}

void my_putstr(const char *str)
{
  for(; *str; my_putchar(*str++));
}

int main(void)
{
    my_putstr("hello world!");
    return 0;
}
