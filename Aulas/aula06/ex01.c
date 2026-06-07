#include <stdio.h>
//ja tinha feito no exercicio 03.c
struct Produto {
    char nome[50];
     float preco;
      int quantidade;
};

int main() {
    struct Produto produto;
    float valorTotal;

    printf("Digite o nome do produto: ");
     scanf("%49s", produto.nome);

    printf("Digite o preco: ");
     scanf("%f", &produto.preco);

    printf("Digite a quantidade: ");
     scanf("%d", &produto.quantidade);

    valorTotal = produto.preco * produto.quantidade;

    printf("\nNome : %s\n", produto.nome);
     printf("Preco : R$ %.2f\n", produto.preco);
      printf("Quantidade : %d\n", produto.quantidade);
       printf("---------------------------------\n");
        printf("Valor total em estoque : R$ %.2f\n", valorTotal);

    return 0;
}