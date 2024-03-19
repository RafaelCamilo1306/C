#include <stdio.h>
#include <locale.h>

int main()

{

    setlocale (LC_ALL, "Portuguese");

    int num, soma;

    num = 1;

    printf ("Insira valores inteiros terminados em 0: ");

    while (num != 0)
    {

        scanf ("%d", &num);

        if (num != 0){
            
            if (num % 2 == 0){
            
                if (num % 10 == 0){
                    soma += num;
                }
            }
        }

        else{
            break;
        }

    }
    printf ("A soma dos números inseridos é igual a: %d", soma);

    return 0;
}