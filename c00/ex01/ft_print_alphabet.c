#include <unistd.h>

void ft_putchar(char c)
{
  write(1, &c, 1);
}

void ft_print_alphabet()
{
  char letter = 'a';
  while(letter <= 'z')
  {
    ft_putchar(letter);
    letter++;
  }
}

int main(int argc, char *argv[])
{
  ft_print_alphabet();
  return 0;
}
