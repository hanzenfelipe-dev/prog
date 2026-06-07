#include <stdio.h>
#include <string.h>

/* professor esse tava muito dificil eu tive que usar um pouco de IA
mas consegui fazer grande parte */

int main() {
    int n;

    printf("=== SISTEMA DE ESTOQUE ===\n");
     printf("Digite a quantidade de produtos: ");
      scanf("%d", &n);

      char nome[50];
     float preco;
    int quantidade;

     float valor;
      float total = 0;
       float maior_valor = 0;
        char produto_maior[50];

      printf("=====================================\n");
       printf("PRODUTO        VALOR EM ESTOQUE\n");
      printf("=====================================\n");

    for (int i = 0; i < n; i++) {

        printf("\nProduto %d\n", i + 1);

        printf("Nome: ");
         scanf("%49s", nome);

        printf("Preco: ");
         scanf("%f", &preco);

        printf("Quantidade: ");
         scanf("%d", &quantidade);

        valor = preco * quantidade;

        printf("-> Valor em estoque: %.2f\n", valor);

        total += valor;

        if (i == 0 || valor > maior_valor) {
            maior_valor = valor;
            strcpy(produto_maior, nome);
        }
    }

    printf("\n=====================================\n");
     printf("TOTAL GERAL DO ESTOQUE: %.2f\n", total);
      printf("PRODUTO COM MAIOR VALOR: %s\n", produto_maior);
       printf("=====================================\n");

    return 0;
}