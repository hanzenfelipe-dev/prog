#include <stdio.h>
//so copie do exercico 04 da lista pq e igual teacher

int main() {
    int n, i;
     char nome[50];
      float nota, soma = 0, media;
       int aprovados = 0;

    printf("\nquantidade de alunos: ");
    
     scanf("%d", &n);

    for(i = 0; i < n; i++) {

        printf("\n--- aluno %d ---\n", i + 1);

     printf("Nome: ");
          scanf("%s", nome);

       printf("Nota: ");
          scanf("%f", &nota);

         soma += nota;

        if(nota >= 7) {
            aprovados++;
        }

           printf("aluno: %s | Nota: %.2f\n", nome, nota);
       }

    media = soma / n;

      printf("\n====================\n");
   printf("media da turma: %.2f\n", media);
   printf("Aprovados: %d\n", aprovados);
      printf("====================\n");

    return 0;
}