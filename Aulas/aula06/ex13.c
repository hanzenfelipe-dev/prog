#include <stdio.h>
//essa tava praticamente identica a uma da lista do copia
typedef struct {
    char nome[50];
     float preco;
      int quantidade;
       float totalEstoque;
} Produto;

  void lerProdutos(Produto est[], int n);
   void calcularEstoque(Produto est[], int n);
    void imprimirEstoque(Produto est[], int n);
   int encontrarMaiorEstoque(Produto est[], int n);
  int encontrarMenorPreco(Produto est[], int n);

int main() {
    int n;

    printf("Quantidade de produtos: ") ;
     scanf("%d", &n);

    Produto est[n];

    lerProdutos(est, n);
     calcularEstoque(est, n);
      imprimirEstoque(est, n);

      int maior = encontrarMaiorEstoque(est, n);
     int menor = encontrarMenorPreco(est, n);

    printf("\nProduto com maior valor em estoque: %s\n", est[maior].nome);
     printf("Produto com menor preco: %s\n", est[menor].nome);

    return 0;
}

void lerProdutos(Produto est[], int n) {
    for (int i = 0; i < n; i++) {
        printf("\nProduto %d\n", i + 1);

        printf("Nome: ");
         scanf(" %49[^\n]", est[i].nome);

        printf("Preco: ");
         scanf("%f", &est[i].preco);

        printf("Quantidade: ");
         scanf("%d", &est[i].quantidade);
    }
}

    void calcularEstoque(Produto est[], int n) {
      for (int i = 0; i < n; i++) {
        est[i].totalEstoque = est[i].preco * est[i].quantidade;
    }
}

void imprimirEstoque(Produto est[], int n)    {
    float totalGeral = 0;

    printf("\n%-20s %-10s %-10s %-15s\n",
           "Nome", "Preco", "Qtd", "Total Estoque");

    for (int i = 0; i < n; i++) {
        printf("%-20s %-10.2f %-10d %-15.2f\n",
               est[i].nome,
                 est[i].preco,
                  est[i].quantidade,
                   est[i].totalEstoque);

        totalGeral += est[i].totalEstoque;
    }

    printf("\nTotal geral do estoque: %.2f\n", totalGeral);
}

int encontrarMaiorEstoque(Produto est[], int n)   {
    int indice = 0;

    for (int i = 1; i < n; i++) {
        if (est[i].totalEstoque > est[indice].totalEstoque)    {
            indice = i;
        }
    }

    return indice;
}

int encontrarMenorPreco(Produto est[], int n) {
    int indice = 0;

    for (int i = 1; i < n; i++) {
        if (est[i].preco < est[indice].preco) {
            indice = i;
        }
    }

    return indice;
}