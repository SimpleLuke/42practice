#include <unistd.h>

void ft_putchar(char c)
{
  write(1, &c, 1);
}

void ft_print_reverse_alphabet()
{
  char letter = 'z';
  while(letter >= 'a')
  {
    ft_putchar(letter);
    letter--;
  }
}

int main(int argc, char *argv[])
{
  ft_print_reverse_alphabet();
  return 0;
}
