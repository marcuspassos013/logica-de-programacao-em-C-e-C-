#include <stdio.h>
/*Efetua multiplicação por meio de adições*/
int Mult_soma(int num1,int num2)
{
    int contador, resultado;
    contador = 0;
    resultado = 0;
    /* Some num1 num2 vezes e acumule em resultado*/
    while (contador < num2)
    {
        resultado = resultado + num1;
        contador = contador + 1;
    }

    /*return corresponde ao comando retorne*/
    return (resultado);
}
/*Exponenciação*/
int Exponentiation(int base, int expoente) {
    int contador, resultado;
    if (expoente == 0)
        return (1);
    else
        /*Para o caso do expoente ser 1 */
        resultado = base;
    contador = 1;
    /* Se expoente = 1 o loop a seguir é evitado e temos o resultado pronto*/
    while (contador < expoente)
    {
        resultado = Mult_soma(base, resultado);
        contador = contador + 1;
    }
    return(resultado);
}
int main()
{
    int base, expoente, resultado;
    printf("Exponenciação. Digite a base e o expoente.\n");
    printf("Entre com a base; ");
    scanf("%d", &base);
    printf("Entre com o expoente: ");
    scanf("%d", &expoente);
    if (expoente < 0)
    {
        printf("Erro: o expoente deve ser um número positivo.\n");
        return (-1);
    }
    else
    {
        resultado = Exponentiation(base, expoente);
        printf("%d elevado a %d: %d\n", base, expoente, resultado);
        return(0);
    }
}