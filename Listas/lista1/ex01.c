#include <stdio.h>


    typedef struct {
        char nome [50];
        int idade;
        float altura;
    } pessoa;
    int main(){
        pessoa p;
    scanf("%s",p.nome);
    scanf("%d", &p.idade);
    scanf("%f", &p.altura);
      printf("Nome:%s\n", p.nome);
      printf("Idade:%d\n", p.idade);
      printf("Altura:%.2f\n", p.altura);

    }
    

