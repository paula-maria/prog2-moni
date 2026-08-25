// =========================================================
// ETAPA 6 - Ponteiros e Entradas (Inputs com scanf)
// O motivo pelo qual usamos '&' no scanf
// =========================================================
#include <stdio.h>

int main(void)
{
    int numero;
    
    printf("Digite um numero: ");
    
    // O scanf precisa saber ONDE na memória ele deve salvar a entrada do usuário.
    // Por isso passamos o endereço da variável usando o '&'.
    scanf("%d", &numero); 
    
    printf("Voce digitou o valor: %d\n", numero);
    printf("Ele foi guardado no endereco: %p\n", &numero);
    
    // ---------------------------------------------------------
    // BÔNUS: Fazendo a mesma coisa usando uma variável ponteiro
    // ---------------------------------------------------------
    
    int outro_numero;
    int *p = &outro_numero; // p já guarda o endereço
    
    printf("\nDigite outro numero: ");
    
    // Como 'p' já é um endereço de memória, NÃO usamos o '&' aqui!
    scanf("%d", p); 
    
    printf("Voce digitou o valor: %d\n", outro_numero);
    printf("Ele foi guardado no endereco apontado por p: %p\n", p);
    
    return 0;
}