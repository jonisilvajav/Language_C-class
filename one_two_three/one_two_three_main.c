#include <stdio.h>

int main()
{
    
  /* 1.Construa o Algoritmo em Descrição Narrativa e depois Valide com Teste de Mesa
    Faça um algoritmo para calcular o estoque médio de uma peça, sendo que: 
    ESTOQUEMÉDIO = (QUANTIDADE MÍNIMA + QUANTIDADE MÁXIMA) /2
 */
 
  /* 1.Build the Algorithm in Narrative Description and then Validate with Table Test
    Write an algorithm to calculate the average stock of a part, given that:
    AVERAGE STOCK = (MINIMUM QUANTITY + MAXIMUM QUANTITY) /2
  */
    int estoqueME;
    int estoqueMI = 0;
    int estoqueMAX = 0;
    printf ("o valor de estique minimo:");
    scanf ("%d", &estoqueMI);
    
    printf ("o valor de estique maximo:");
    scanf ("%d", &estoqueMAX);
   
    estoqueME = (estoqueMI + estoqueMAX) /2;
    
    printf ("resultado:%d", estoqueME);
    
    printf("\n_______________________________________________________\n\n");
    
    // 2.Faça um algoritmo que leia 2 números e escreva o menor deles.
    
    // 2.Make an algorithm that reads 2 numbers and writes the smaller one.
    
    int val1;
    int val2;
    printf ("escreva o primeiro valor: ");
    scanf ("%d",&val1);
    
    printf ("escreva o segundo valor: ");
    scanf ("%d",&val2);
    
    if (val1<val2){
        
    printf ("o primeiro valor é menor que: %d\n", val2);
    }else{
    printf("Erro, digite o primeiro numero menor que o segundo.");
}

printf("_______________________________________________________\n");

    /* 3.Faça um algoritmo que receba o salário de um funcionário, 
    calcule e mostre o novo salário sabendo-se que este sofreu 
    um aumento de 15,3% */
    
    /* 3. Make an algorithm that receives the salary of an employee,
    calculate and show the new salary knowing that it suffered
    an increase of 15.3% */
    
    float slarioFun; 
    float novoSala;
     printf("\n Digite o valor do salario do funcionário:");
     scanf ("%f",&slarioFun);
     
        novoSala = (slarioFun * 0.153) + slarioFun;
         printf ("\n O aumento do novo salario do funcionário é de:: %0.2f",novoSala);
         
    return 0;
}
