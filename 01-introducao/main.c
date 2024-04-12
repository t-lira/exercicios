/*
1) Escreva um algoritmo que armazene o valor 10 em uma variável A e o valor 20 em uma variável B.
A seguir (utilizando apenas atribuições entre variáveis) troque os seus conteúdos fazendo com que o
valor que está em A passe para B e vice-versa. Ao final, escrever os valores que ficaram armazenados
nas variáveis. 
*/

#include <stdio.h>

int main() {
  int a, b, aux;

  // Atribuindo valores iniciais
  a = 10;
  b = 20;

  // Trocando os valores usando uma variável auxiliar
  aux = a;
  a = b;
  b = aux;

  // Exibindo os valores finais
  printf("Valor de A: %d\n", a);
  printf("Valor de B: %d\n", b);

  return 0;
}

/*
2. Fazer um programa para receber 3 valores inteiros do usuário e mostrar a sua média (que pode não ser inteira).
*/

#include <stdio.h>

int main() {
  int valor1, valor2, valor3;
  float media;
  int soma;

  // Leitura dos valores
  printf("Digite o primeiro valor: ");
  scanf("%d", &valor1);

  printf("Digite o segundo valor: ");
  scanf("%d", &valor2);

  printf("Digite o terceiro valor: ");
  scanf("%d", &valor3);

  // Cálculo da média e da soma
  media = (float)(valor1 + valor2 + valor3) / 3;

  // Exibição da média e da soma
  printf("A média dos valores é: %.2f\n", media);

  return 0;
}

/*
3) A jornada de trabalho semanal de um funcionário é de 40 horas. O funcionário que trabalhar mais
de 40 horas receberá hora extra, cujo cálculo é o valor da hora regular com um acréscimo de 50%.
Escreva um algoritmo que leia o número de horas trabalhadas em um mês, o salário por hora e escreva
o salário total do funcionário, que deverá ser acrescido das horas extras, caso tenham sido trabalhadas (considere que o mês possua 4 semanas exatas). 
*/

#include <stdio.h>

int main(void) {
    int horas_mensais, horas_extras;
    float salario_hora, salario_total, valor_hora_extra;

    // Leitura das informações
    printf("Digite o número de horas trabalhadas no mês: ");
    scanf("%d", &horas_mensais);

    printf("Digite o valor do salário por hora: ");
    scanf("%f", &salario_hora);

  // Cálculo do salário 
   salario_total = horas_mensais * salario_hora; 

  if (horas_mensais >= 40) {

    valor_hora_extra = salario_total * 1.5;

    // Exibição do salário total com acrescimo de 50%
    printf("O salário total do funcionário é: %.2f\n", salario_total);
    printf("O salário total do funcionário com as horas extras: %.2f\n", valor_hora_extra);
    
  } else{
    // Exibição do salário total 
    printf("O salário total do funcionário é: %.2f\n", salario_total);
  }

    return 0;
}