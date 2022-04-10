#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

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
    int op;
    printf("escolha:\n");
    printf("1 - exercicio 01\n");
    printf("2 - exercicio 02\n");
    printf("3 - exercicio 03\n");
    printf("4 - exercicio 04\n");
    printf("5 - exercicio 05\n");
    printf("6 - exercicio 06\n");
    printf("7 - exercicio 07\n");
    printf("8 - exercicio 08\n");
    printf("9 - exercicio 09\n");
    printf("10 - exercicio 10\n");
    scanf("%i",&op);
    switch (op)
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
        printf("Invalido\n");
        return 0;
    }
}

int ex1()
{
    setlocale(LC_ALL,"portuguese");
    int x;

    printf("Escreva um número: ");
    scanf("%i", & x);

    switch(x%2)
    {
    case 0:
        printf("O número é par.");
        break;
    case 1:
        printf("O número é ímpar.");
        break;
    }
    return 0;

}

int ex2()
{
    setlocale(LC_ALL,"portuguese");
    float n1,n2,n3,m;
    char nome[50];
    printf("Escreva o nome do aluno: ");
    gets(nome);

    printf("Escreva a primeira nota: ");
    scanf("%f",&n1);
    printf("Escreva a segunda nota: ");
    scanf("%f",&n2);
    printf("Escreva a terceira nota: ");
    scanf("%f",&n3);

    m=(n1+n2+n3)/3;

    switch(m>=6)
    {
    case 1:
        printf("O aluno %s teve a média de: %.2f.\nPortanto ele foi aprovado!", nome, m);
        break;
    case 0:
        printf("O aluno %s teve a média de: %.2f.\nPortanto ele foi reprovado!", nome, m);
        break;
    }

    return 0;
}

int ex3()
{
    setlocale(LC_ALL,"portuguese");
    float t;

    printf("Escreva a temperatura da água:");
    scanf("%f",&t);

    if(t<0)
    {
        printf("A água na temperatura %.2fCº está no estado sólido.",t);
    }
    else
    {
        if(t>100)
        {
            printf("A água na temperatura %.2fCº está no estado gasoso.",t);
        }
        else
        {
            printf("A água na temperatura %.2fCº está no estado liquído.",t);
        }

    }

    return 0;

}

int ex4()
{
    setlocale(LC_ALL,"portuguese");
    int x,y;

    printf("Escreva um número: ");
    scanf("%i",&x);

    if(x<0)
    {
        y=pow(x,2)+4;
        printf("O valor de %i na função x²+4= %i.", x,y);
    }

    else
    {
        if(x>0)
        {
            y=pow(x,3)-3;
            printf("O valor de %i na função x³-3= %i.", x,y);
        }
        else
        {
            printf("Erro!");
        }
    }
    return 0;

}

int ex5()
{
    setlocale(LC_ALL,"portuguese");
    float a,b,c,x;
    
    printf("Digite três valores:");
    scanf("%f %f %f",&a,&b,&c);

    if(a>b)
    {
        x = a;
        a = b;
        b = x;
    }

    if(a>c)
    {
        x = a;
        a = c;
        c = x;

    }
    if (b>c)
    {
        x = b;
        b = c;
        c = x;
    }

    printf("A ordem é %.2f %.2f %.2f",a,b,c);

    return 0;
}

int ex6()
{

    setlocale(LC_ALL,"portuguese");
    int x, y, z;

    printf("Valor de X:");
    scanf("%i", &x);

    printf("Valor de Y:");
    scanf("%i", &y);

    printf("Valor de Z:");
    scanf("%i", &z);

    if (x % y == 0 && x % z == 0)
    {
        printf("O número é divisível por %i e %i",y,z);
    }

    if (x % y == 0 && x % z != 0)
    {
        printf("O número é divisível por %i mas não por %i",y,z);
    }

    if (x % z == 0 && x % y != 0)
    {
        printf("O número é divisível por %i mas não por %i",z,y);
    }

    if (x % y != 0 && x % z != 0)
    {
        printf("O número não é divisível nem %i nem por %i.",y,z);
    }

    return 0;
}

int ex7()
{
    setlocale(LC_ALL,"portuguese");
    int i, t1, t2, t3;

    printf("Escreva um número de 4 digítos: ");
    scanf("%i", &i);

    t1 = i / 100;
    t2 = i % 100;
    t3 = t1 + t2;

    if (t3 * t3 == i)
    {
        printf("\nPossui a característica.\n");
    }

    else
    {
        printf("\nNão possui a característica.\n");
    }

    return 0;
}

int ex8()
{
    setlocale(LC_ALL,"portuguese");
    int codigo;

    printf("Escreva um dos códigos: 221, 211, 311 , 312, 332.\n");
    scanf("%i",&codigo);

    switch (codigo)
    {
    case 221:
        printf("Bernardo.\n");
        break;
    case 211:
        printf("Eustáquio.\n");
        break;
    case 311:
        printf("Luiz.\n");
        break;
    case 312:
        printf("Mario.\n");
        break;
    case 332:
        printf("Artur.\n");
        break;
        
    default:
        printf ("Código Inválido.");
    }
    return 0;
}

int ex9()
{
    setlocale(LC_ALL,"portuguese");
    int n1,n2,n3,n4,n5,numero,aux, inverter;

    printf("Escreva um número de 5 digítos:\n");
    scanf("%d",&numero);

    n1 = numero / 10000;
    aux = numero % 10000;
    n2 = aux / 1000;
    aux = aux % 1000;
    n3 = aux / 100;
    aux = aux % 100;
    n4 = aux / 10;
    n5 = aux % 10;

    inverter = (n5 * 10000) + (n4 * 1000) + (n3 * 100) + (n2 * 10) + n1;

    if (numero == inverter)
    {
        printf("O NÚMERO É PALÍNDROMO.\n");
    }

    else
    {
        printf("O NÚMERO NÃO É PALÍNDROMO.\n");
    }

    return 0;
}

int ex10()
{
    setlocale(LC_ALL,"portuguese");
    int contacliente, consumoagua;
    float formula;
    char tipoconsumidor[15];

    printf("Conta do Cliente:\n");
    scanf("%d",&contacliente);

    printf("Consumo de Água:\n");
    scanf("%d",&consumoagua);

    printf("Qual o tipo de consumidor:\n");
    scanf("%s",tipoconsumidor);

    if (strcmp(tipoconsumidor,"RESIDÊNCIAL") == 0)
    {
        formula = 5.00 + (0.05 * consumoagua);
        printf("CONTA = %d\n",contacliente);
        printf("VALOR DA CONTA = %.2f\n",formula);
    }

    if (strcmp(tipoconsumidor,"COMERCIAL") == 0 && consumoagua <= 80 )
    {
        formula = 500.00;
        printf("CONTA = %d\n",contacliente);
        printf("VALOR DA CONTA = %.2f\n",formula);
    }

    else if (strcmp(tipoconsumidor,"COMERCIAL") == 0 && consumoagua > 80 )
    {
        formula = 500.00 + ((consumoagua - 80) * 0.25);
        printf("CONTA = %d\n",contacliente);
        printf("VALOR DA CONTA = %.2f\n",formula);
    }

    if (strcmp(tipoconsumidor,"INDUSTRIAL") == 0 && consumoagua <= 100)
    {
        formula = 800.00;
        printf("CONTA = %d\n",contacliente);
        printf("VALOR DA CONTA = %.2f",formula);
    }
    else if (strcmp(tipoconsumidor,"INDUSTRIAL") == 0 && consumoagua > 100)
    {
        formula = 800.00 + ((consumoagua - 100 )* 0.04);
        printf("CONTA = %d\n",contacliente);
        printf("VALOR DA CONTA = %.2f\n",formula);
    }

    return 0;
}