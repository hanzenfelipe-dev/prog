//essetava identico do exercicio 06.c so copie oq eu ja fiz
#include <stdio.h>

typedef struct {
   char nome[50];
   int pontos;
} jogador;

int main(){
  
  int N;
   printf("digite a quantiedade de jogadores:");
scanf("%d", &N);
    
    jogador jogadores[N];
     for (int i = 0; i < N; i++) {
       printf("Digite o nome do jogador %d: ", i + 1);
        scanf("%s", jogadores[i].nome);
         printf("Digite os pontos do jogador %d: ", i + 1);
          scanf("%d", &jogadores[i].pontos);
}
      int maior = 0;
       int menor = 0;
        
    for (int i = 1; i < N;  i++) {
     if (jogadores[i].pontos  > jogadores[maior] .pontos) {
        maior = i;
    }

    if (jogadores[i].pontos  < jogadores[menor] .pontos) {
        menor = i;
    }
}
    printf("Maior: %s %d\n", jogadores[maior].nome, jogadores[maior].pontos);
     printf("Menor: %s %d\n", jogadores[menor].nome, jogadores[menor].pontos);   
       
       
    return 0;
}