#include <stdio.h>

int main(void)
{
    // PASSO 1 — rode só até aqui e mostre o estado inicial.
    int n = 50;
    int outra = 999;
    int *p = &n;

    printf("--- Estado inicial ---\n");
    printf("n = %d, endereço de n = %p\n", n, &n);
    printf("p aponta para = %p\n\n", p);
    // Pergunte à turma: "&n e p vão imprimir o mesmo valor?" Rode e confirme que sim.

    // PASSO 2 — antes de descomentar/rodar este bloco, pergunte:
    // "isso vai mudar n, mudar p, ou nada?"
    *p = 100; // sobrescreve o VALOR guardado no endereço que p aponta
    printf("--- Depois de *p = 100; ---\n");
    printf("n = %d (mudou!)\n", n);
    printf("endereço de n = %p (igual a antes)\n", &n);
    printf("p aponta para = %p (igual a antes)\n\n", p);
    // Ponto-chave pra falar em voz alta: o endereço de n não mudou,
    // só o conteúdo guardado nele. p continua olhando pro mesmo lugar.

    // PASSO 3 — antes de rodar, pergunte de novo:
    // "agora que vou mexer em p, n vai mudar também?"
    p = &outra; // sobrescreve PARA ONDE p aponta (não mexe no conteúdo de n)
    printf("--- Depois de p = &outra; ---\n");
    printf("n = %d (não mudou!)\n", n);
    printf("p aponta para = %p (mudou — agora é o endereço de outra)\n", p);
    printf("*p = %d (valor de outra, não de n)\n", *p);
    // Aqui costuma "cair a ficha": p esqueceu n completamente.
    // *p agora lê a casa de outra, não a de n.
}