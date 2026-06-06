#include <stdio.h>
//esse tava muito hard,precisei de ajuda mas foi legal fazer
 float somar(float a, float b) {
     return a + b;
}


 float  subtrair(float a, float b) {
    return a - b;
 }

 float multiplicar(float a, float b)   {
     return a * b;
 }

 float  dividir(float a, float b) {
    if (b  == 0) {
        printf("erro\n");
        return 0;
    }
    return a / b;
}

int main() {
    float num1, num2;

    printf("digite dois numeros: ");
     scanf("%f %f", &num1, &num2);

      printf("soma = %.2f\n", somar(num1, num2));
       printf("subtracao = %.2f\n", subtrair(num1, num2));
        printf("multiplicacao = %.2f\n", multiplicar(num1, num2));

     if (num2 != 0) {
         printf("Divisao = %.2f\n", dividir(num1, num2));
    }  else {
         dividir(num1, num2);
    }




      return 0;
}