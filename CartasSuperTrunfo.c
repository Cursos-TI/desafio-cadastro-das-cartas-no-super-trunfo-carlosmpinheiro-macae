#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.



int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

    // Declaração de variáveis para a carta 1
    char estado1[2];
    char codigo1[4];
    char cidade1[20];
    int populacao1;
    float area1;
    float pib1;
    int pontos_turisticos1;
    float densidade_populacao1;
    float pib_precapita1;
    float super_poder1;

  
    // Declaração de variáveis para a carta 2
    char estado2[2];
    char codigo2[4];
    char cidade2[20];
    int populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;
    float densidade_populacao2;
    float pib_precapita2;
    float super_poder2;


    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    // Cadastro da carta 1
    printf("Cadastro da Carta 1\n");
    printf("Estado: ");
    scanf("%s", estado1);
    printf("Código da cidade (ex: A01): ");
    scanf("%s", codigo1);
    printf("Nome da Cidade: "); 
    scanf("%s", cidade1);
    printf("População: ");
    scanf("%d", &populacao1);
    printf("Área (em km²): ");
    scanf("%f", &area1);
    printf("PIB (em bilhões): ");
    scanf("%f", &pib1);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos1);

    // Cadastro da carta 2
    printf("\nCadastro da Carta 2\n");
    printf("Estado: ");
    scanf("%s", estado2);
    printf("Código da cidade (ex: A01): ");
    scanf("%s", codigo2);
    printf("Nome da Cidade: "); 
    scanf("%s", cidade2);
    printf("População: ");
    scanf("%d", &populacao2);
    printf("Área (em km²): ");
    scanf("%f", &area2);
    printf("PIB (em bilhões): ");
    scanf("%f", &pib2);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos2);

    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    
    /* Cálculos - Carta 1
    calculo par densidade populacional
    calculo para pib per capita
    calculo do super poder */
    densidade_populacao1 = (float) populacao1/area1;
    pib_precapita1 = (float) (pib1 *1000000000) / populacao1;
    super_poder1 = (float)populacao1 + area1 + pib1 + pontos_turisticos1 + pib_precapita1 + (1.0f / densidade_populacao1);


    /* Cálculos - Carta 2
    calculo par densidade populacional
    calculo para pib per capita
    calculo do super poder */
    densidade_populacao2 = (float) populacao2/area2;
    pib_precapita2=(float) (pib2 *1000000000) / populacao2;
    super_poder2 = (float)populacao2 + area2 + pib2 + pontos_turisticos2 + pib_precapita2 + (1.0f / densidade_populacao2);



    // Exibição dos dados da carta 1
    printf("\n--- Carta 1 ---\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões\n", pib1);
    printf("Pontos turísticos: %d\n", pontos_turisticos1);
    printf("Densidade populacional: %.2f \n", densidade_populacao1);
    printf("PIB per capita: %.2f \n", pib_precapita1);
    

    // Exibição dos dados da carta 2
    printf("\n--- Carta 2 ---\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("Pontos turísticos: %d\n", pontos_turisticos2);
    printf("Densidade populacional: %.2f \n", densidade_populacao2);
    printf("PIB per capita: %.2f \n",pib_precapita2);


    
 // Comparações
 printf("\nComparação de Cartas:\n");
 printf("População: Carta 1 venceu (%d)\n", populacao1 > populacao2);
 printf("Área: Carta 1 venceu (%d)\n", area1 > area2);
 printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib2);
 printf("Pontos Turísticos: Carta 1 venceu (%d)\n", pontos_turisticos1 > pontos_turisticos2);
 printf("Densidade Populacional: Carta 1 venceu (%d)\n", densidade_populacao1 < densidade_populacao2); // menor vence
 printf("PIB per Capita: Carta 1 venceu (%d)\n", pib_precapita1 > pib_precapita2);
 printf("Super Poder: Carta 1 venceu (%d)\n", super_poder1 > super_poder2);


    return 0;
}

