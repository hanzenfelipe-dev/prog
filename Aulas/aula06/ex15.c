#include <stdio.h>
//tava meio hard mas com um pouca da ajuda da IA foi ate que dboa
typedef struct {
    char nome[50];
     float media;
} Aluno;

void ordenarPorMedia(Aluno turma[], int n) {
    int i, j, iMaior;
     Aluno temp;

    for (i = 0; i < n - 1; i++)    {
         iMaior = i;

        for (j = i + 1; j < n; j++) {
             if (turma[j].media > turma[iMaior].media) {
                 iMaior = j;
            }
        }

        if (iMaior != i) {
            temp = turma[i];
            turma[i] = turma[iMaior];
            turma[iMaior] = temp;
        }
     }
}

int main() {
    int n;

    printf("Digite o numero de alunos: ");
     scanf("%d", &n);

    Aluno turma[n];

    for (int i = 0; i < n; i++) {
        printf("Nome do aluno %d: ", i + 1);
         scanf(" %49s", turma[i].nome);

         printf("Media do aluno %d: ", i + 1);
        scanf("%f", &turma[i].media);
    }

    ordenarPorMedia(turma, n);

     printf("\nAlunos ordenados por media:\n");

    for (int i = 0; i < n; i++) {
         printf("%s - %.1f\n", turma[i].nome, turma[i].media);
    }

    return 0;
}