#include <stdio.h>
#include <locale.h>

int main()

{

    setlocale (LC_ALL, "Portuguese");

    int num, soma;
    
    scanf("%d", &num);
    
    printf ("\nD(%d): \t", num); 
    
    for(int i=1; i<num; i++){
        
        if(num % i == 0){
            
            printf("%d\t", i);
            soma += i;
            
        }
    }
    printf("\n\na soma é igual a %d.", soma);
    
}