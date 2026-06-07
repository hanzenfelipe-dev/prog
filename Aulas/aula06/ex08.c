#include <stdio.h>
#include <string.h>
//so copie denovo das lista e modifiquei poucas coisas
#define MAX 100

typedef struct {
    char nome[50];
     float nota;
} Aluno;

int main() {
     Aluno turma[MAX];
    
    int n;

    printf("Quantos alunos deseja cadastrar? ");
     scanf("%d", &n);

   
    for (int i = 0; i < n; i++) {
        printf("\nAluno %d\n", i + 1);

        printf("Nome: ");
         scanf("%49s", turma[i].nome);

        printf("Nota: ");
         scanf("%f", &turma[i].nota);
    }

   
     printf("\n=== BOLETIM ===\n");
    for (int i = 0; i < n; i++) {
        printf("%s - Nota: %.1f\n",
               turma[i].nome,
                turma[i].nota);
    }

    
    char busca[50];
     printf("\nBuscar aluno: ");
      scanf("%49s", busca);

    int encontrado = 0;

    for (int i = 0; i < n; i++) {
        if (strcmp(turma[i].nome, busca) == 0) {
             printf("\nEncontrado:\n");
              printf("Nome: %s\n", turma[i].nome);
               printf("Nota: %.1f\n", turma[i].nota);

             encontrado = 1;
            break;
        }
    }

    if (!encontrado) {
         printf("Aluno nao encontrado.\n");
    }

    return 0;
}