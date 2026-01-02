#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
    // Área para definição das variáveis para armazenar as propriedades das cidades
char Estado1[50], Estado2[50];
char Codigo_da_Carta1[5], Codigo_da_Carta2[5];
char Cidade1[50], Cidade2[50];
int População1, População2;
float Area_Territorial1, Area_Territorial2;
float PIB1, PIB2;
int Pontos_Turisticos1, Pontos_Turisticos2;

printf("Insira os dados da primeira carta:\n\n");
  // Área para entrada de dados da primeira carta
printf("Digite o Estado: \n");
  scanf("%s", Estado1);
printf("Digite o Código da Carta: \n");
  scanf("%s", Codigo_da_Carta1);
printf("Digite a Cidade: \n");
  scanf("%s", Cidade1);
printf("Digite a População: \n");
   scanf("%d", &População1);
printf("Digite a Área Territorial em Km²: \n");
   scanf("%.2f", &Area_Territorial1);
printf("Digite o PIB: \n");
  scanf("%.2f", &PIB1);
printf("Digite a Quantidade de Pontos Turísticos: \n");
  scanf("%d", &Pontos_Turisticos1);

  printf("Insira os dados da segunda carta:\n\n");
  // Área para entrada de dados da segunda carta
printf("Digite o Estado: \n");
   scanf("%s", Estado2);
printf("Digite o Código da Carta: \n");
   scanf("%s", Codigo_da_Carta2);
printf("Digite a Cidade: \n");
  scanf("%s", Cidade2);
printf("Digite a População: \n");
   scanf("%d", &População2);
printf("Digite a Área Territorial em Km²: \n");
   scanf("%.2f", &Area_Territorial2);
printf("Digite o PIB: \n");
   scanf("%.2f", &PIB2);
printf("Digite a Quantidade de Pontos Turístico: \n");
   scanf("%d", &Pontos_Turisticos2);
 // Área para exibição dos dados da cidade da primeira carta
printf("Carta 1\n\n");

printf("Estado: %s\nCódigo da carta: %s\nCidade: %s\nPopulação: %d\nÁrea Territoral: %.2f\nPIB: %.2f\nQuantidade de Pontos Turísticos: %d\n\n", Estado1, Codigo_da_Carta1, Cidade1, População1, Area_Territorial1, PIB1, Pontos_Turisticos1);
 // Área para exibição dos dados da cidade da segunda carta
printf("Carta 2:\n\n");

printf("Estado: %s\nCódigo da carta: %s\nCidade: %s\nPopulação: %d\nÁrea Territoral: %.2f\nPIB: %.2f\nQuantidade de Pontos Turísticos: %d\n\n", Estado2, Codigo_da_Carta2, Cidade2, População2, Area_Territorial2, PIB2, Pontos_Turisticos2);

    return 0;
}
