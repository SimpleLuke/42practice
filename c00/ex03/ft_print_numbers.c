#include <unistd.h>

void ft_putchar(char c)
{
  write(1, &c, 1);
}

void ft_print_numbers()
{
  int number = 0;
  while(number <= 9)
  {
    ft_putchar('0'+number);
    number++;
  }
}

int main(int argc, char *argv[])
{
  ft_print_numbers();
  return 0;
}
