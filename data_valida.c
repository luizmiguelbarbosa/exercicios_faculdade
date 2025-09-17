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
    scanf("%d,%d,%d", dia, mes, ano); //aqui é a entrada dos dados para as variaveis dia, mes e ano, respectivamente

    if (mes == 2 && 1 <= dia <= 28 && ano%4==0 && ano%100 == 0) { //se o mes for fevereiro, o dia for de 1 até 28 e o ano for divisivel por 4 ao mesmo tempo que é divisivel por 100 (ano bissexto), a data é válida
        printf("Válida");
    }

    return 0; 
}