#include <stdio.h>
#include <string.h>
// literalmente so peguei o exercicio da lista que ja tinha feito e adicionei poucas coisa
int main() {
    int n;

    printf("Digite a quantidade de produtos: ");
     scanf("%d", &n);

      char nome[50];
       float preco;
        int quantidade;

     float valor;
      float total = 0;
      float maior_valor = 0;
     char produto_maior[50];

    printf("\nProduto        Preco     Qtd     Total\n");
     printf("-----------------------------------------\n");

    for (int i = 0; i < n; i++) {

          scanf("%s", nome);
         scanf("%f", &preco);
        scanf("%d", &quantidade);

        valor = preco * quantidade;

         printf("%-14s R$%6.2f %5d R$%7.2f\n",
               nome, preco, quantidade, valor);

        total += valor;

        if (i == 0 || valor > maior_valor) {
            maior_valor = valor;
             strcpy(produto_maior, nome);
        }
    }

    printf("-----------------------------------------\n");
       printf("Total geral : R$%.2f\n", total);
    printf("Maior estoque : %s (R$%.2f)\n", produto_maior, maior_valor);

    return 0;
}