#include <stdio.h>

typedef struct {
    char nome [50];
    float preco;
    int quantidade;
} produto;

int main()
{ 
   produto p;
   float valortotal, valordescontado;
   printf("nome?:");
   scanf("%49s",p.nome);
   printf("preço?:");
   scanf("%f", &p.preco);
   printf("quantidade?:");
   scanf("%d", &p.quantidade);

 valortotal = p.preco * p.quantidade;
 valordescontado = valortotal* 0.9;
  
  printf("\nProduto: %s\n", p.nome);
    printf("valor total de estoque: R$ %.2f\n", valortotal);
    printf("valor com 10%% de desconto: R$ %.2f\n", valordescontado);

  
 
  
    return 0;
}