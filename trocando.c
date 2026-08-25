#include <stdio.h>

int main(void)
{
int n = 50;
int *p = &n; // * na declaração: cria o ponteiro p, guardando o endereço de n.

printf("Valor de n: %d\n", n);    
printf("Endereço de n: %p\n", &n); // Imprime 0x...
printf("Valor de p: %p\n", p);     // Imprime 0x... (igual à linha de cima)
printf("Valor APONTADO: %d\n", *p);// * na execução: vai até o endereço e lê 50

*p = 99; 
    printf("Novo valor de n: %d\n", n); 
    printf("Endereço de n: %p\n", &n);
}