#include <stdio.h>

struct Produto {
    char nome[50];
     float preco;
      int quantidade;
};

int main() {
    struct Produto produto;
     float precoComDesconto;

    printf("Digite o nome do produto: ");
     scanf("%49s", produto.nome);

    printf("Digite o preco: ");
     scanf("%f", &produto.preco);

    printf("Digite a quantidade: ");
     scanf("%d", &produto.quantidade);

    precoComDesconto = produto.preco * 0.90; 

     printf("\nNome: %s\n", produto.nome);
      printf("Preco original: R$ %.2f\n", produto.preco);
       printf("Preco com 10%% de desconto: R$ %.2f\n", precoComDesconto);

    return 0;
}