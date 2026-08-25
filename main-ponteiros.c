// =========================================================
// ETAPA 1 - Demonstração inicial: Variável comum
// =========================================================
#include <stdio.h>

int main(void)
{
    int n = 50;
    printf("Valor de n: %i\n", n);
    
    return 0;
}

// =========================================================
// ETAPA 2 - Criando o ponteiro e exibindo endereços
// =========================================================
#include <stdio.h>

int main(void)
{
    int n = 50;
    int *p = &n; // Cria o ponteiro 'p' e guarda o endereço de 'n'
  
    printf("Endereço de n (&n): %p\n", &n); // Local onde 'n' está na memória
    printf("Valor de p (p): %p\n", p);      // O valor que 'p' guarda é igual ao endereço de 'n'
    
    return 0;
}

// =========================================================
// ETAPA 3 - Lendo dados através do ponteiro (Desreferência)
// =========================================================
#include <stdio.h>

int main(void)
{
    int n = 50;
    int *p = &n; 
  
    // O operador '*' na execução significa "Vá até esse endereço e pegue o valor"
    printf("Valor da variavel apontada (*p): %i\n", *p); 
    
    return 0;
}

// =========================================================
// ETAPA 4 - Alterando o valor da variável através do ponteiro
// =========================================================
#include <stdio.h>

int main(void)
{
    int x = 10;
    int *p = &x;

    printf("Valor inicial de x: %d\n", x);

    *p = 20; // Vai até o endereço guardado em 'p' e sobrescreve com 20

    printf("Novo valor de x: %d\n", x); // A variável original foi alterada
    
    return 0;
}

// =========================================================
// ETAPA 5 - Aplicação Prática: Função Swap (Troca)
// Modificando variáveis fora do escopo local
// =========================================================
#include <stdio.h>

void trocar(int *a, int *b) {
    int tmp = *a; // Guarda o valor original apontado por 'a' em uma variável temporária
    *a = *b;      // O valor apontado por 'a' recebe o valor apontado por 'b'
    *b = tmp;     // O valor apontado por 'b' recebe o valor original guardado em 'tmp'
}

int main(void)
{
    int x = 1, y = 2;
    
    printf("Antes: x = %d, y = %d\n", x, y);
    
    // Passamos os endereços de x e y para a função
    trocar(&x, &y); 
    
    printf("Depois: x = %d, y = %d\n", x, y); // Saída será x = 2, y = 1
    
    return 0;
}