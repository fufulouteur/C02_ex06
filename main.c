#include <stdio.h>
int ft_str_is_printable(char *str);

int main() {
  printf("%i\n", ft_str_is_printable("coucou\0\n"));
  return 0;
}
