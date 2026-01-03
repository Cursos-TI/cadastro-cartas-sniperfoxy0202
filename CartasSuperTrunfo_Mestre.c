#include <stdio.h>

// Desafio Super Trunfo - Países
// Objetivo: No nível aventureiro o programa continuará lendo as mesmas informações do usuário e agora deve Calcular a Densidade Populacional e o PIB per Capita e exibir os resultados.

int main() {
    // Área para definição das variáveis para armazenar as propriedades das cidades
    char Estado1[50], Estado2[50];
    char Codigo_da_Carta1[5], Codigo_da_Carta2[5];
    char Cidade1[50], Cidade2[50];
    int População1, População2;
    float Area_Territorial1, Area_Territorial2;
    float PIB1, PIB2;
    int Pontos_Turisticos1, Pontos_Turisticos2;
    float PIB_per_Capita1, PIB_per_Capita2;
    float Densidade_Populacional1, Densidade_Populacional2;
    float Super_Poder1, Super_Poder2;

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
        scanf("%f", &Area_Territorial1);
    printf("Digite o PIB: \n");
        scanf("%f", &PIB1);
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
        scanf("%f", &Area_Territorial2);
    printf("Digite o PIB: \n");
        scanf("%f", &PIB2);
    printf("Digite a Quantidade de Pontos Turístico: \n");
        scanf("%d", &Pontos_Turisticos2);
 // Área para exibição dos dados da cidade da primeira carta
printf("Carta 1\n\n");
//Área para o calculo da Densidade Populacional e o PIB per Capita
Densidade_Populacional1 = População1 / Area_Territorial1;
PIB_per_Capita1 = População1 / PIB1;

printf("Estado: %s\nCódigo da carta: %s\nCidade: %s\nPopulação: %d\nÁrea Territoral: %.2f\nPIB: %.2f\nQuantidade de Pontos Turísticos: %d\nDensidade Populacional: %.2f\nPIB per Capita; %.2f\n\n", Estado1, Codigo_da_Carta1, Cidade1, População1, Area_Territorial1, PIB1, Pontos_Turisticos1, Densidade_Populacional1, PIB_per_Capita1);
 // Área para exibição dos dados da cidade da segunda carta
printf("Carta 2:\n\n");
//Área para o calculo da Densidade Populacional e o PIB per Capita
Densidade_Populacional2 = População2 / Area_Territorial2;
PIB_per_Capita2 = População2 / PIB2;

printf("Estado: %s\nCódigo da carta: %s\nCidade: %s\nPopulação: %d\nÁrea Territoral: %.2f\nPIB: %.2f\nQuantidade de Pontos Turísticos: %d\nDensidade Populacional: %.2f\nPIB per Capita; %.2f\n\n", Estado2, Codigo_da_Carta2, Cidade2, População2, Area_Territorial2, PIB2, Pontos_Turisticos2, Densidade_Populacional2, PIB_per_Capita2);
//Área para o calculo dos Super Poderes
    Super_Poder1 = População1 + Area_Territorial1 + PIB1 + Pontos_Turisticos1 + Densidade_Populacional1 + PIB_per_Capita1;
      Super_Poder2 = População2 + Area_Territorial2 + PIB2 + Pontos_Turisticos2 + Densidade_Populacional2 + PIB_per_Capita2;
 //Área para a exibição dos atributos vencedores de cada carta     
printf("População: Carta %d venceu\n",
       1 + (População2 > População1));

printf("Área Territorial: Carta %d venceu\n",
       1 + (Area_Territorial2 > Area_Territorial1));

printf("PIB: Carta %d venceu\n",
       1 + (PIB2 > PIB1));

printf("Pontos Turísticos: Carta %d venceu\n",
       1 + (Pontos_Turisticos2 > Pontos_Turisticos1));

printf("Densidade Populacional: Carta %d venceu\n",
       1 + (Densidade_Populacional1 > Densidade_Populacional2));

printf("PIB per Capita: Carta %d venceu\n",
       1 + (PIB_per_Capita2 > PIB_per_Capita1));

printf("Super Poder: Carta %d venceu\n",
       1 + (Super_Poder2 > Super_Poder1));
  
    return 0;
    
}
