#include <stdio.h>
void imprime(float media) {
  char *s[10];
  if (media >= 6) {
    s[9] = ("Aprovado");
  } else {
    s[9] = ("Reprovado");
  }
  printf("Condicao: %s", s[9]);
}

float notaFinal(float av1, float av2, float av3) {
  float media;
  if (av1 > av2) {
    media = (av1 + av3) / 2;
  } else {
    media = (av2 + av3) / 2;
  }
  return media;
}

float possivel_AV3(float av1, float av2) {
  float media = 0;
  media = (av1 + av2) / 2;
  if (av1 >= 4 && av2 >= 4) {
  }
  if (media >= 6) {
    printf("Media: %.2f\n", media);
  } else if (media < 6 && av1 >= 4 && av2 >= 4) {
    printf("Tem que fazer AV3\nMedia: %.2f\n", media);
  } else if (av1 < 4 && av2 < 4) {
    printf("Reprovado!\nMedia: %.2f\n", media);
  }
  return media;
}

int main() {
  float av1, av2, av3, media;
  printf("Digite a AV1: ");
  scanf("%f", &av1);
  printf("Digite a AV2: ");
  scanf("%f", &av2);
  media = possivel_AV3(av1, av2);
  if (media < 6) {
    printf("Digite a AV3: ");
    scanf("%f", &av3);
    media = notaFinal(av1, av2, av3);
    printf("Media: %.2f\n", media);
  }

  imprime(media);

  return 0;
}
