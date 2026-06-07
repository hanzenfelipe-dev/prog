#include <stdio.h>
// literalmente a mesma coisa do exercicio 09.c da lista
typedef struct {
    char nome[50];
     float n1, n2, n3;
      float media;
} aluno;

 aluno calcularMedia(aluno a);
  char definirConceito(float media);
   void imprimirAluno(aluno a);

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

     printf("\n--- BOLETIM ---\n");
      printf("%-20s %-10s %-10s\n", "Nome", "Media", "Conceito");

    for (int i = 0; i < N; i++) {
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