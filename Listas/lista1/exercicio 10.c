#include <stdio.h>

/*esse tava dicil mas como foi curto ja que 
era so complementar vou dizer que tava mid*/

typedef struct {
    char nome[50];
    float n1, n2, n3;
    float media;
} aluno;

 aluno calcularMedia(aluno a);
  char definirConceito(float media);
   void imprimirAluno(aluno a);
    void ordenarPorNota(aluno turma[], int n);

int main() {
    int N;

      printf("Quantidade de alunos: ");
     scanf("%d", &N);

    aluno alunos[N];

    for (int i = 0; i < N; i++) {
        printf("\nAluno %d\n", i + 1);

        printf("Nome: ");
         scanf(" %49[^\n]", alunos[i].nome);

          printf("Nota 1: ");
           scanf("%f", &alunos[i].n1);

            printf("Nota 2: ");
             scanf("%f", &alunos[i].n2);

             printf("Nota 3: ");
              scanf("%f", &alunos[i].n3);

        alunos[i] = calcularMedia(alunos[i]);
    }

    ordenarPorNota(alunos, N);

    printf("\n--- RANKING DA TURMA ---\n");
      printf("%-5s %-20s %-10s %-10s\n", "Pos", "Nome", "Media", "Conceito");

    for (int i = 0; i < N; i++) {
         printf("%-5d ", i + 1);
          imprimirAluno(alunos[i]);
    }

    return 0;
}

    aluno calcularMedia(aluno a) {
      a.media = (a.n1 + a.n2 + a.n3) / 3.0;
    return a;
}

char definirConceito(float media) {
    if (media >= 9)
        return 'A';
    else if (media >= 7)
        return 'B';
    else if (media >= 5)
        return 'C';
    else
        return 'D';
}

void imprimirAluno(aluno a) {
    printf("%-20s %-10.2f %-10c\n",
           a.nome,
           a.media,
           definirConceito(a.media));
}

    void ordenarPorNota(aluno turma[], int n) {
      int i, j, maior;
       aluno temp;

    for (i = 0; i < n - 1; i++) {
        maior = i;

     for (j = i + 1; j < n; j++) {
            if (turma[j].media > turma[maior].media) {
                maior = j;
            }
        }

      if (maior != i) {
            temp = turma[i];
             turma[i] = turma[maior];
              turma[maior] = temp;
        }
    }
}