#include <stdio.h>
#include <locale.h>
int main(){

    setlocale (LC_ALL, "Portuguese");
    
    int  num, maior, menor;
    printf ("Insira quantos valores desejar (digite 0 para concluir): ");
    
    do{
        
        scanf ("%d", &num);
        
            if (num < menor){
                menor = num;
            }
            
            else if (num > maior){
                maior = num;
            }
            
        
    } while (num != 0);
    
}