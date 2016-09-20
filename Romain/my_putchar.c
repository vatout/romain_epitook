/*
** my_putchar.c for my_putchar.c in /home/vatout_a/epitech/Romain
**
** Made by Vatoutine
** Login   <vatout_a@epitech.net>
**
** Started on  Tue Sep 20 18:44:46 2016 Vatoutine
** Last update Tue Sep 20 20:46:25 2016 Vatoutine
*/

int	my_putchar(char z)
{
  if (write(1, &z, 1))
    return (1);
  return (0);
}

int	my_change_letter(char z)
{
  z = 'r';
  return (z);
}

int	my_putstr(char *z)
{
  int	i;

  i = 0;
  while (z[i] != '\0')
    {
      my_putchar(z[i]);
      i++;
    }
  return (0);
}

int	my_strlen(char *z)
{
  int	i;

  i = 0;
  while (z[i] != '\0')
    i++;
  return (i);
}

int	my_alpha(void)
{
  int	i;
  int	z;
  int	y;

  z = 65;
  y = 97;
  i = 1;

  while (i <= 26)
    {
      if(i%2 == 0)
	my_putchar(y);
      else
	my_putchar(z);
      y++ & z++ & i++;
    }
  my_putchar('\n');
  return (0);
}

int	my_alpha_speed(void)
{
  int	a;
  int	b;

  a = 65;
  b = 98;
  my_putchar('\n');
  while (b < 123)
    {
      my_putchar(a);
      my_putchar(b);
      a += 2;
      b += 2;
    }
  my_putchar('\n');
  return (0);
}

int	main()
{
  my_alpha();
  my_alpha_speed();
  return (0);
}
