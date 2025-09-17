#include <stdio.h>
#define pi 3,14

int main(void)
{
    /* vamos  ver como declarar uma variavel em c 
    tipo nome;
    char: caracteres
    int: valores inteiros
    float: valores flutuantes
    double: numero real, so que com maior precisão (pega mais memoria)\
    */
    char letra = 'M'; // para caractere usamos apenas aspas simples
    char string[7] = "Miguel"; //criei um array de char. para string usamos aspas duplas
    char numero_pequeno = 10; //posso armazenar pequenas quantidades de números no tipo char 
    int numero_inteiro = 1000;
    float numero_quebrado = 10.5;
    double numero_muito_grande = 10.0e4; //10 vezes 10 a quarta potência
    int numero_inteiro2, soma, numero_inteiro3;
    float numero_quebrado2;
    const int minha_constante_inteira = 10;

    //posso declarar varias variáveis do mesmo tipo em apenas uma linha, assim ó:
    int numero, numero1, numero2, numero3;

    // comando de saida
    printf("Hello World\n");
    // e se eu querer escrever as variáveis que eu ja havia definido? assim ó
    // %c coloco para escrever um caractere 
    printf("%c\n", letra);
    // %d coloco para escrever um numero inteiro
    printf("%d\n", numero_inteiro);
    // %f coloco para escrever um numero flutuante (real)
    printf("%f\n", numero_quebrado);
    // %s coloco para escrever uma string
    printf("%s\n", string);

    // observação, posso usar o %d para escrever o numero que representa o caractere dentro da tabela ASCII
    printf("%d\n", letra);

    // eu posso querer escrever mais de um valor dentro de uma unica linha do programa: digamaos que eu queira escrever uma letra e um número, eu posso fazer assim ó:
    printf("%c%d \n", letra, numero_inteiro);

    // no caso de numeros, eu não necessariamente preciso colocar uma variável. posso colocar uma operação matemática, assim ó:
    printf("%d\n", numero_inteiro+1);

    //vamos falar acerca do comando scanf. o scanf serve para fazer leitura dos dados que escrevemos pelo teclado e mandamos (entrada) e guarda-las nas variáveis
    // vamos começar assim ó:        scanf("tipos_de_entrada", lista de variaveis que vão ser lidas)
    /* vamos supor o seguinte
    char letra;
    int numero_inteiro;
    float numero_real;
    double numero_grande;

    faço o seguinte: usemos sempre esse "&" antes das variaveis
    
    scanf("%c",& letra);
    scanf("%d",& numero_inteiro);
    sacanf("%f", & numero_real);

    vou fazer um programinha simples aqui usando o sacnf! :)
    */

    printf("Digite um número! que vou somar ele com +2 ");
    scanf("%d", & numero_inteiro2);
    numero_inteiro2 +=2;
    printf("%d\n",numero_inteiro2);

    //posso utilizar o scanf para ler mais de um dado ao mesmo tempo, assim ó:

    printf("Digite dois numeros, um inteiro e um real\n");
    scanf("%d%f", &numero_inteiro2, &numero_quebrado2);
    printf("os numeros foram: %d, %g\n", numero_inteiro2, numero_quebrado2);

    /* vamos ver agora como utilizar o comando de atribuição
    a forma geral de uma atribuição é asssim ó:
    variavel = expressão;

    exemplo

    int x = 5, y;
    y = x;
    y = x+5;

    uma coisa bem daora é que podemos utilizar atribuições multiplas. ex
    int x, y, z;
    x = y = z = 10
    */

    /* vamos ver sobre declaração de constantes
    para que que eu declaro constantes? para quando eu quiser um valor que eu queria que nunca mude de acordo com o decorrer do programa. um exemplo disso é a constante pi

    para declarar uma constante basta fazer asssim ó:
    
    const int minha_constante; 

    posso transformar um inteiro em uam constante tambem

    int meu_numero_inteiro;
    const int meu_numero_inteiro;  

    uma coisa muito importante, eu tenho que colocar um valor inteiro quando eu tiver declarado a constante. um exemplo de programa
    ja declarei la em cima
    */
    printf("Dígite um numero inteiro! :), e vou somar a constante declarada la em cima\n");
    scanf("%d", &numero_inteiro3);
    soma = numero_inteiro3 + minha_constante_inteira;
    printf("%d", soma);

    /*outra forma de definir uma constante é utilizar o comando define(vou fazer isso la em cima), eu faço da seguinte forma: 

    #define nome_da_constante valor_da_constante.

    mas qual a diferença de usar o define ou o const? bom com o const, declaramos uma variável(o computador armazenou um espaço na memória para ele). ja o define é mais como se fosse uma substituição, o computador quando vé o nome da variável, ele apenas substitui 
    */

    /* vamos ver agora operadores aritméticos
    soma = +
    subtração = -
    divisão = /
    resto = %
    
    toda oṕeração aritimetica, nos guardamos ela em algum lugar, logo sempre usamos em conjunto com atribuição
    se eu quiser uma divisão inteira basta dividir inteiro por inteiro, por mais que a variavel que eu  estaja atribuindo seja float
    sendo assim:

    int x1;
    float f1;
    inteiro
    f1 = x1/2 
    o resultado será inteiro, mesmo que a variavel que eu declarei seja float. para ser float, basta fazer o seguinte

    f1 = x1/2.0


    vamos falar em questão de precendência. exemplo 
    float f1, f2 = 5.25;

    f1 = f2 + 10 / 2.0
    f1 = (f2+10) /2.0

    no caso a precendência é feita em ordem matematima mesmo 
    */

    /*Pré-Incremento e Pós-Incremento
        int x =10, y=10;

        digamos que eu queira somar +1 para a variavel. ao inves de fazer x = x+1; eu posso fazer assim ó:
        x ++ ou ++y
        o mesmo vale para a operação de subtração 
        x --; ou --y;

        pos-incremento
        o problema é quando a gente mistura incremento com uma outra atribuição
        y = x++. nesse caso, a posição do ++ faz total diferença. nesse caso é como se fizessemos na seguinte ordem
        y =x;
        para depois
        x++;
        
        no caso o y vale 10 e o x vale 11
        ou seja isso ai foi um pos-incremento. primeiro atribuiu para depois somar
        
        pré-incremento
        y = ++x;
        ou seja, somou primeiro e depois atribuiu. foi na seguinte ordem
        ++x
        e depois
        y = x

        no caso aqui, ambos vão ser 11
    */

    /*operações simplificadas
    aqui vou fazer direto (é bem intuivo)
    int x,y;

    x+=y
    x-=y
    x*=y
    x /= y
    x %=y
    */

    /* Operadores relacionais
    digamos que queremos saber qual variavel é maior ou menor que outra variavel. a forma geral é a seguinte
    valor_1 operador relacional valor_2

    0: a comparação é falsa
    1: a comparação é verdadeira

    os operadores são iguais ao python 
    */

    /*operadores lógicos
    && OPERADOR "E"
    || operador "OU"    
    ! operador de "NEGAÇÃO"

    forma geral:
    expressão operador logico expressão

    0: a comparação é falsa
    1: a comparação é verdadeira
    */

    /*Comando if
    permite executar ou não um comando de execuções

    forma geral
    if (condição)
    {
    conjunto de comandos
    }
    aonde essa condição é uma operação relacional ou lógica 
    */

    /*Comando else
    permite executar um conjunto de comandos quando o if for falso

    forma geral
    if (condição)
    {
        conjunto de comandos
    } else
    {
        segundo conjunto de comandos
    }
    
    */

    return 0;
}