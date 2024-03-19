#include <stdio.h>
int main ()
{
  int soma, num;

  printf ("digite a sequencia, sendo o ultimo numero 0:\n");
  num = 1;

  while (num != 0)
	{

	  scanf ("%d", &num);

	  if (num != 0)
		{
		  if (num % 2 == 0)
			{
			  if (num % 10 == 0)
				{
				  soma += num;
				}
			}
		}
	  else
		{
		  break;
		}
	}
  printf ("a soma C) igual a %d", soma);
  return 0;
}