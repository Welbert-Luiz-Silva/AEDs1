#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <time.h>
#include <conio.h>


int ex1();
int ex2();
int ex3();
int ex4();
int ex5();
int ex6();
int ex7();
int ex8();
int ex9();
int ex10();

int main()
{
    setlocale(LC_ALL,"portuguese");
    int esc;
    printf("Escolha  o número do exercício e 1 a 10:");
    scanf("%i",&esc);
    switch (esc)
    {
    case 1:
        ex1();
        break;
    case 2:
        ex2();
        break;
    case 3:
        ex3();
        break;
    case 4:
        ex4();
        break;
    case 5:
        ex5();
        break;
    case 6:
        ex6();
        break;
    case 7:
        ex7();
        break;
    case 8:
        ex8();
        break;
    case 9:
        ex9();
        break;
    case 10:
        ex10();
        break;
    default:
        printf("escolha inválida\n");
    }
    return 0;
}

/*1 - Faça um algoritmo que leia um conjunto de números (X) e imprima a quantidade de números pares
(QPares) e a quantidade de números impares (QImpares) lidos. Admita que o valor 9999 é utilizado como
sentinela (FLAG) para fim de leitura. Ex.: 1,2,3,4,5,9999 => Pares=2 Impares=3*/

int ex1()
{
   int QPares=0, QImpares=0, n=0;
   printf("Digite um número - Flag = 9999: ");
   scanf("%i",&n);
   while (n!=9999) {
    if(n%2==0){
       QPares=QPares+1;
    }
    if(n%2==1){
         QImpares=QImpares+1;
    }
   printf("Digite um número - Flag = 9999: ");
   scanf("%i",&n);
   }

   printf("Total de números pares digitados = %i\n", QPares);
   printf("Total de números impares digitados = %i\n", QImpares);


 return 0;

   }
/*2 - Faça um programa que leia um conjunto indeterminado de números inteiros positivos e imprima o maior, o
menor e a média aritmética desse conjunto de dados. (Flag -1).*/

int ex2()
{
  int n, maior, menor, quant, soma;
  float media;
    printf("Digite um número - Flag = -1: ");
    scanf("%i",&n);
    maior=n;
    menor=n;
    soma=0;
    quant=0;
    while(n>0) {
        if(n>maior){
            maior=n;
        }
        if(n<menor){
            menor=n;
        }
    soma=soma+n;
    quant=quant+1;
    media=(float)soma/quant;
    printf("Digite um número - Flag = -1: ");
    scanf("%i",&n);
    }
    printf("Maior número digitado = %i\n", maior);
    printf("Menor número digitado = %i\n", menor);
    printf("Soma = %i, Quantidade = %i,\n", soma,quant);
    printf("Média dos números digitados é = %5.2f",media);

 return 0;
}
//3-Escrever um algoritmo em Portugol,para calcular e imprimir o fatorial de um número lido do teclado.

int ex3(){
    int n, aux, f;
    printf("Digite um número inteiro: ");
    scanf("%d",&n);
    aux=n-1;
    f=n*aux;
    while(aux>2){
        aux=aux-1;
        f=f*aux;
    }
    printf("n=%d, aux=%d, f=%d", n, aux, f);

 return 0;
}
//4 – Calcule o valor da seguinte série lido a quantidade de termos.

int ex4(){
    int base, sinal, i, termo;
    float unidade, s;
    base=1;
    sinal=1;
    s=1;
    i=2;
    printf("Digite a quantidade de termos: ");
    scanf("%d",&termo);
    while(i<=termo){
        base=base+2;
        sinal=sinal*-1;
        unidade=pow(base,-3);
        s=s+(sinal*unidade);
        i=i+1;
    }
    printf("Base = %d, Sinal = %d, Termo = %d, unidade = %5.5f, S=%5.5f", base, sinal, termo, unidade, s);

return 0;
}
//5 - A série de fibonacci é formada pela seqüência:

int ex5(){
    int a, b, c, cont, n;
    printf("Digite o termo da série de Fibonacci: ");
    scanf("%d", &n);
    a=1;
    b=1;
    printf("%d, %d, ", a, b);
    for(cont=1;cont<n;cont=cont+1){
        c=a+b;
        printf("%d, ",c);
        a=b;
        b=c;
    }
return 0;
}

//6 - Fazer um algoritmo para calcular o valor de s, dado por, sendo o valor de N deverá se lido do teclado.
int ex6(){
    int n, num, den, i, sinal;
    float soma, frac;
    printf("Digite o número do termo N: ");
    scanf("%d", &n);
    num=1;
    den=n;
    soma=0;
    sinal=1;
    for(i=1;i<=n;i=i+1){
        frac=(float)num/den*sinal;
        soma=soma+frac;
        num=num+1;
        den=den-1;
        sinal=sinal*(-1);
    }
    printf("n = %d, num = %d, den = %d, i = %d, sinal = %d, frac = %5.2f, s = %5.2f", n, num, den, i, sinal, frac, soma);
return 0;
}

//7 - Números palíndromos são aqueles que escritos da direita para esquerda ou da esquerda para direita tem o mesmo valor. Exemplo:929, 44, 97379. Fazer um algoritmo que imprima todos os números palíndromos de 10000 a 99999.
int ex7(){
    int a, b, c, d , e, aux, n, quant;
    n=10000;
    quant=0;
    while(n>=10000 && n<=99999){
    a=n%10;
    aux=n/10;
    b=aux%10;
    aux=aux/10;
    c=aux%10;
    aux=aux/10;
    d=aux%10;
    aux=aux/10;
    e=aux;
    if(a==e && b==d){
        printf("%d, ",n);
        quant=quant+1;
    }
    n=n+1;
    }
    printf("\nTotal de palíndromos = %d", quant);
return 0;
}
// 8 - O numero 3025 possui a seguinte característica: 30 + 25 = 55,  55^2 = 3025
//Quantos e quais são os números de 4 dígitos possuem essa característica?
int ex8(){
    int n, a, b, soma, quad, quant;
    n=1000;
    quant=0;
    for(n=1000; n<=9999; n=n+1){
        a=n/100;
        b=n%100;
        soma=a+b;
        quad=pow(soma,2);
        if(quad==n){
            printf("%d, ",n);
            quant=quant+1;
        }
    }
    printf("\nA quantidade similares é = %d",quant);

return 0;
}

//9.Faça um programa para um jogo de cara ou coroa. Neste caso, o jogador escolhe cara ou coroa
// (0 –cara e 1 –para coroa) mostre ao final de 10 tentativas, quantas foram certas e quantas erradas.
// (utilize o comando -para que o computador escolha o resultado).
int ex9(){
      int i;
      printf("Gerando 10 valores aleatorios:\n\n");
      srand(time(NULL));
        for (i=0;i<10;i+1)
{
        printf("%d",rand()%100);
}
    getch();
    return 0;
}
//10.Faça um programa para adivinhar um número escolhido pelo usuário, entre 1 e 1023.
//Indique ao final quantas tentativas foram necessárias. O programa deverá localizar o número escolhido pelo usuário
//em no máximo 10 tentativas!
int ex10(){
    int maior, menor, metade, quant, quest;
    printf("Pense um número entre 1 e 1023");
    menor=1;
    maior=1023;
    quant=0;
    while(quest!=1){
    metade=(maior-menor)/2;
    printf("O numero pensado é a %d? ", metade);
    printf("\nDigite 3 se >, 2 se <, 1 se = : ");
    scanf("%d",&quest);
    quant=quant+1;
    if(quest==3){
        menor=metade;
        metade=((maior-menor)/2)+menor;
        printf("O numero pensado é a %d? ", metade);
        printf("\nDigite 3 se >, 2 se <, 1 se = : ");
        scanf("%d",&quest);
        quant=quant+1;
    }
    if(quest==2){
        maior=metade;
        metade=((maior-menor)/2)+menor;
        printf("O numero pensado é a %d? ", metade);
        printf("\nDigite 3 se >, 2 se <, 1 se = : ");
        scanf("%d",&quest);
        quant=quant+1;
    }

    }
    printf("Acertei o valor!!!!");
    printf("\nForam %d tentativas", quant);

 return 0;
}
