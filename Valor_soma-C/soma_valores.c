#include <stdio.h>

int main()
{
    //Make an algorithm to add two numbers and multiply the result by the first number.
    //Faça um algoritmo para somar dois números e multiplicar o resultado pelo primeiro número.

int A, B, soma;
    int C, X, mult;
    
    //printf ("add two numbers and then multiply by the first result\n");
    printf ("some dois numeros e depois multiplique pelo primeiro resultado\n");
    //printf("Enter first value of first number:\n");
    printf ("digite primeiro valor do primeiro numero:\n");
    scanf ("%d", &A);
    //printf("Type the second value of the second number to be added to the first:\n");
    printf ("digite o segundo valor do segundo numero a ser somado com o primeiro:\n");
    scanf ("%d", &B);
    
    soma = A + B;
    //printf("the sum value is\n");
    printf ("o valor da soma é\n");
    printf ("soma: %d\n", soma);
    
    //printf("now take any number you want to use\n");
    printf ("agora pegue qualquer numero que deseje usar\n");
    scanf ("%d", &C);
    
    //printf ("now take the first result and multiply it with the number you chose\n");
    printf ("agora pegue o primeiro resultaado e multiploque com o numero que fescolhido\n");
    scanf ("%d", &X);
    
    mult = C * X;
    
    //printf("Multiplication value is\n");
    printf ("o valor da multiplicação é\n");
    printf ("mult: %d\n", mult);

return 0;
}


