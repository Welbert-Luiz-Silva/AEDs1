// Atividade Matriz
// Elaborado por Welbert Luiz

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int At1();
int At2();
int At3();
int At4();
int At5();

void leMatriz (int [10][10]);
void imprimeMatriz (int[10][10]);

int main()
{
    int n;
    setlocale(LC_ALL, "portuguese");
    printf("Digite o número do exercício de 1 a 5: ");
    scanf("%d", &n);

    switch (n)
    {
    case 1:
        At1();
        break;
    case 2:
        At2();
        break;
    case 3:
        At3();
        break;
    case 4:
        At4();
        break;
    case 5:
        At5();
        break;

    default:
        printf("Escolha inválida\n");
    }
    return 0;
}

int At1()
{
//1) Preencher uma matriz  de 10 x 10  posições com valores aleatórios de 15 a 50 (utilize para cada número a função rand – faça uma
//função que dados os valores inicial e final devolva um número aleatório dentro deste intervalo) Em seguida imprima os índices (i,j) da
//matriz e o valor correspondente, na forma de matriz, bem como chame os módulos abaixo

    int A[10][10];
    int i,j;

    printf("Atividade 1\n");

    leMatriz(A);
    imprimeMatriz(A);
    return 0;
}
int At2()
{
//2) Escreva um procedimento que receba uma matriz 10x10 (passagem de parâmetro), imprimir o maior e o menor elemento da matriz bem
//como a posição de cada um.

    int A[10][10];
    int i,j, maior=0, menor=50;

    printf("Atividade 2\n");
    leMatriz(A);
    imprimeMatriz(A);
    for (i=0; i<10; i++)
    {
        for (j=0; j<10; j++)
        {
            if (A[i][j]>maior)
            {
                maior=A[i][j];
            }
            if (A[i][j]<menor)
            {
                menor=A[i][j];
            }
        }
    }
    printf ("\nMaior elemento = %d, Menor elemento = % d", maior, menor);
    for (i=0; i<10; i++)
    {
        for (j=0; j<10; j++)
        {
            if (A[i][j]==maior)
            {
                printf("\nPosição do Maior [%d][%d]=%d ", i, j, A[i][j]);
            }
            if (A[i][j]==menor)
            {
                printf("\nPosição do Menor [%d][%d]=%d ", i, j, A[i][j]);
            }
        }
    }

    return 0;
}
int At3()
{
//3) Escreva uma função que receba uma matriz 10x10 e retorne a soma dos elementos da diagonal.
    int A[10][10];
    int i,j, soma=0;

    printf("Atividade 3\n");
    leMatriz(A);
    imprimeMatriz(A);
    for (i=0; i<10; i++)
    {
        for (j=0; j<10; j++)
        {
            if (i==j)
            {
                soma=soma+A[i][j];
            }
        }
    }
    printf("\nA soma da diagonal da matriz = %d", soma);
}

int At4()
{
//4) Escreva um procedimento que receba uma matriz 10x10, peça ao usuário a posição [i,j] da matriz , e em seguida exiba o valor que esta
//na matriz nesta posição. FLAG -1
    int A[10][10];
    int i,j,a,b;

    printf("Atividade 4\n");
    leMatriz(A);
    imprimeMatriz(A);

    printf("\nDigite o valor da linha FLAG -1 ");
    scanf("%d", &a);
    printf("\nDigite o valor da coluna FLAG -1 ");
    scanf("%d", &b);

    if(a>=10||b>=10)
    {
        printf("\nDigite um valor menor do que 10");
        printf("\nDigite o valor da linha FLAG -1 ");
        scanf("%d", &a);
        printf("\nDigite o valor da coluna FLAG -1 ");
        scanf("%d", &b);
    }
    while ((a>0&&a<10)&&(b>0&&b<10))
    {
        printf("\nO valor da matriz na posição [%d][%d]=%d\n", a, b, A[a][b]);


        printf("\nDigite o valor da linha FLAG -1 ");
        scanf("%d", &a);
        printf("\nDigite o valor da coluna FLAG -1 ");
        scanf("%d", &b);
    }
    if(a<0||b<0)
    {
        return 0;

    }
}


int At5()
{
//5) Escreva um procedimento que receba uma matriz 10x10, e um número. O procedimento deverá verificar se o número está ou não na
//matriz. Se estiver imprima a(s) posição(ões) desse número e se não estiver imprima a mensagem valor não encontrado.
    int A[10][10];
    int i,j,num;

    printf("Atividade 5\n");
    leMatriz(A);
    imprimeMatriz(A);
    printf("\nDigite um número: ");
    scanf("%d", &num);
    for(i=0; i<10; i++)
    {
        for(j=0; j<10; j++)
        {
            if(A[i][j]==num)
            {
                printf("O número %d está na posição [%d][%d]=%d\n", num, i, j, A[i][j]);
            }
        }
    }
    for(i=0; i<10; i++)
    {
        for(j=0; j<10; j++)
        {
            if(A[i][j]!=num)
            {
                printf("\nValor não encontrado\n");
                return 0;
            }
        }
    }
}



void leMatriz (int V[10][10])
{
    srand(time(NULL));
    int i,j;
    for(i=0; i<10; i++)
    {
        for (j=0; j<10; j++)
        {
            V[i][j]=(rand()%36)+15;
        }
    }
}

void imprimeMatriz (int V[10][10])
{
    int i,j;
    for(i=0; i<10; i++)
    {
        for(j=0; j<10; j++)
        {
            printf("[%d][%d]=%d ", i, j, V[i][j]);
        }
        printf("\n");
    }
}
