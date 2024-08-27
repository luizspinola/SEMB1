// Laboratorio 2 de Sistemas Embarcados
// Nome: Luiz Felipe Spinola Silva (12121EBI001)
// Data: 13/08/2024

#include <stdio.h>

int a = 10;                 //Ambas variaveis sao armazenadas na RAM. (Global nao declarado e 0)
int b;

void main(){                //Codigo e armazenado na flash

    int c;
    c = soma(a,b);          //variaveis sao armazenadas na RAM. (Local nao declarado e lixo)
}

int soma(int x, int y){     //Codigo e armazenado na flash

    return x+y;
}

//Interrupcoes sao gerada pelos perifericos do fabricante (pooling)

//excecoes sao geradas pelos perifericos da CPU

/*






*/