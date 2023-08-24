#include <unistd.h>

void ft_putchar(char c)
{
  write(1, &c, 1);
}

int main(int argc, char *argv[])
{
  char myChar = argv[1][0];
  ft_putchar(myChar);
  return 0;
}
