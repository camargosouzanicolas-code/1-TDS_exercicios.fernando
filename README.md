#include <stdio.h>

int main() {
    int geracao_desejada;
    int total_coelhos = 0;
    int coelhos_na_geracao = 1;

    printf("Digite o numero da geracao: ");
    scanf("%d", &geracao_desejada);

    for (int i = 1; i <= geracao_desejada; i++) {
        total_coelhos += coelhos_na_geracao;
        coelhos_na_geracao *= 2;
    }

    // Voltar uma geração para encontrar o número de coelhos da última geração
    int coelhos_ultima_geracao = coelhos_na_geracao / 2;

    printf("Total de coelhos ate a geracao %d: %d\n", geracao_desejada, total_coelhos);
    printf("Coelhos apenas na geracao %d: %d\n", geracao_desejada, coelhos_ultima_geracao);
    return 0;
}
