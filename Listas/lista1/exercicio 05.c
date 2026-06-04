#include <stdio.h>
/* professor esse tava muito dicil eu tive que usar um pouco de IA que 
tava muito hard mas consegui fazer grande parte*/
int main() {
    int n;
    scanf("%d", &n);

    char nome[50];
     float preco;
      int quantidade;

    float valor;
     float total = 0;
      float maior_valor = 0;
       char produto_maior[50];

    printf("produto valor em estoque\n");
    printf("--------------------------------\n");

    for (int i = 0; i < n; i++) {
        scanf("%s", nome);
        scanf("%f", &preco);
        scanf("%d", &quantidade);

        valor = preco * quantidade;

        printf("%-15s %.2f\n", nome, valor);

        total += valor;

        if (i == 0 || valor > maior_valor) {
            maior_valor = valor;
            sprintf(produto_maior, "%s", nome);
        }
    }

    printf("--------------------------------\n");
    printf("total geral: %.2f\n", total);
    printf("produto com maior valor: %s\n", produto_maior);

    return 0;
}