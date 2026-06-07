#include <stdio.h>
#include <string.h>
//mesma coisa so que com adicionais
int main() {
    int n, i;
     char nome[50];
      char maiorNome[50], menorNome[50];
       float nota, soma = 0, media;
        float maiorNota, menorNota;
         int aprovados = 0;

    printf("Quantidade de alunos: ");
   scanf("%d", &n);

    for(i = 0; i < n; i++) {

         printf("\n--- aluno %d ---\n", i + 1);

          printf("Nome: ");
           scanf("%49s", nome);

          printf("Nota: ");
           scanf("%f", &nota);

        soma += nota;

        if(nota >= 7) {
            aprovados++;
        }

        
        if(i == 0) {
            maiorNota = menorNota = nota;
             strcpy(maiorNome, nome);
              strcpy(menorNome, nome);
        }

       
        if(nota > maiorNota) {
             maiorNota = nota;
              strcpy(maiorNome, nome);
        }

        
        if(nota < menorNota) {
             menorNota = nota;
              strcpy(menorNome, nome);
        }

        printf("Aluno: %s | Nota: %.2f\n", nome, nota);
    }

    media = soma / n;

         printf("\n====================\n");
          printf("Media da turma: %.2f\n", media);
           printf("Aprovados: %d\n", aprovados);
            printf("Maior nota: %.2f (%s)\n", maiorNota, maiorNome);
             printf("Menor nota: %.2f (%s)\n", menorNota, menorNome);
              printf("====================\n");

    return 0;
}