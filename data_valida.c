/* Vamos entender o problema. Meu objetivo é testar as datas e saber se são válidas ou não.
autor: Luiz Miguel de Souza Barbosa Nascimento
data: 17/09/25
*/

#include <stdio.h>

int main()
{
    //declaração de variaveis
    int dia, mes, ano; //aqui declarei as variaveis dia, mes e ano, para irem para o scan

    //Programa
    
    //entrada para o dia
    scanf("%d,%d,%d", &dia, &mes, &ano); //aqui é a entrada dos dados para as variaveis dia, mes e ano, respectivamente

    //vou criar uma estrutura de condicionais para o ano bissexto
    if (ano%4==0 && ano%100==0);// se o ano for bissexto (for divisivel por 4 ao mesmo tempo que é divisivel por 100)
    {
        //Fevereiro
        if(mes==2 && 1<=dia<=29)
        {
            printf("valida\n");
        }

        // Meses que vão até o dia 31
        else if (mes== 1|| mes == 3 ||mes==5 ||mes== 7 ||mes==8 ||mes==10 ||mes==12 && 1<=dia<=31)
        {
            printf("valida\n");
        }

        // Meses que vão até o dia 30
        else if (mes==4||mes==6||mes==9||mes==11 && 1<=dia<=30)
        {
            printf("valida\n");
        }

        // caso nada disso tenha sido satisfeito, a data é inválida
        else
        {
            printf("invalida\n");
        }
    }

    // Estrutura condicional para o ano normal (sem ser bissexto)
    if (ano%4!=0 || ano%100==0 && ano%400 !=0 ) // ano normal (não é bissexto)
    {
        //Fevereiro
        if (mes==2 && 1<=dia<=28)
        {
            printf("valida\n");
        }

        // Meses que vão até o dia 31
        else if (mes== 1|| mes == 3 ||mes==5 ||mes== 7 ||mes==8 ||mes==10 ||mes==12 && 1<=dia<=31)
        {
            printf("valida\n");
        }

        // Meses que vão até o dia 30
        else if (mes==4||mes==6||mes==9||mes==11 && 1<=dia<=30)
        {
            printf("valida\n");
        }

        // caso nada disso tenha sido satisfeito, a data é inválida
        else
        {
            printf("invalida\n");
        }
    }
    
    return 0; 
}