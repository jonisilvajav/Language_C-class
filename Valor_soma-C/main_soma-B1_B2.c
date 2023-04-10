#include <stdio.h>

int main()
{
    
/*• Students of the Engineering course take, during the school semester, tests, works and exams whose grades vary between 0 and 10.
  • During the first two months, an exam with a weight of 8. They also have two papers with a weight of 1 each.
  • In the second two months, they carry out two papers which together add up to a weight of 2, a multidisciplinary exam with a weight of 2, and a final test with a weight of 6.
*/
    
/*• Os alunos do curso de Engenharia de realizam, durante o semestre letivo, provas, trabalhos e exames cujas notas variam entre 0 a 10. 
  • Durante o primeiro bimestre, uma prova com peso 8. Também possuem dois trabalhos com peso 1 cada. 
  • Já no segundo bimestre, eles realizam dois trabalhos onde somados totalizam peso 2, um exame multidisciplinar com peso 2 uma prova final com peso 6.
*/

    int provb1, BI1tra1, BI1tra2, somaB1;
    int BI2tra1, BI2tra2, exa, provb2, somaB2;
    
    //printf ("put the values from 0 to 8 for the test and 0 to 1 for the two works of the first two months, which added up are:\n\n");
    printf ("coloque os valores de 0 a 8 para a prova e no 0 a 1 para os dois trabalhos do primeiro bimestre, que somadas são:\n\n");
    
    //printf("Enter first test value:");
    printf ("digite primeiro valor da prova:");
    scanf ("%d", &provb1);
    
    //printf("Enter the value of the first job:");
    printf ("digite o valor da primeiro trabalho:");
    scanf ("%d", &BI1tra1);
    
    //printf("Enter the value of the second job:");
    printf ("digite o valor do segundo trabalho:");
    scanf ("%d", &BI1tra2);
    
    somaB1 = provb1 + BI1tra1 + BI1tra2;
    
    if (provb1 >8|| BI1tra1 > 1 || BI1tra2 > 1) {
        
        //printf("\nError: The grades cannot exceed the value of 8 of the test nor the weight of 1 of the two works, and cannot exceed the maximum value of 10 of the first Bimester.\n");
        printf("\nErro: As notas não podem ultrapassar o valor 8 da prova e nem o peso 1 dos dois trabalhos, e não podem ultrapassar o valor máximo de 10 do primeiro Bimestre.\n");
    } else {
        
        //printf ("\n the values of the first two months added:%d \n", sumB1);
        printf ("\n os valores do primeiro bimestre somados:%d \n", somaB1);
    }
    
    //printf ("\n============ 2nd BIMESTER ======\n\n");
    printf ("\n============ BIMESTRE 2°=============\n\n");
    
    //printf ("\n In the second quarter, put the weight 0 to 1 for the papers, the exam the weight 0 to 2 and the test 0 to 6, which will be added:\n\n");
    printf ("\n No segundo bimestre, coloque para os trabalhos o peso  0 a 1, o exame o peso 0 a 2 e a prova 0 a 6, que serão somadas:\n\n");
    
    //printf("Enter the value of the first job:");
    printf ("digite o valor da primeiro trabalho:");
    scanf ("%d", &BI2tra1);
    
    //printf("Enter the value of the second job:");
    printf ("digite o valor do segundo trabalho:");
    scanf ("%d", &BI2tra2);
    
    //printf("Enter the exam value: ");
    printf ("digite o valor do exame:");
    scanf ("%d", &exa);
    
    //printf("Enter first test value: ");
    printf ("digite primeiro valor da prova:");
    scanf ("%d", &provb2);
    
    somaB2 = BI2tra1 + BI2tra2 + exa + provb2;
    
    if (BI2tra1 > 1 || BI2tra2 > 1 || exa > 2 || provb2 > 6) {
        //printf("\nError: The grades cannot exceed the weight of 1 of the two papers, as well as the value of 2 of the exam and the value of 6 of the test, and cannot exceed the maximum value of 10 of the second Bimester.\n");
        printf("\nErro: As notas não podem ultrapassar o peso 1 dos dois trabalhos assim como o valor 2 do exame e valor 6 da prova, e não pode ultrapassar o valor máximo de 10 do segundo Bimestre.\n");
    } else {
        //printf ("\n the total sum of grades for the second quarter is:%d \n", sumB2);
        printf ("\n o total da soma das notas do segundo bimestre é:%d \n", somaB2);
    }
    return 0;
}

