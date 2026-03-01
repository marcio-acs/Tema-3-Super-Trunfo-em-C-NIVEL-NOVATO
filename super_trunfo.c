#include <stdio.h>


int main(){
    // declaração das variavéis de ambas as cartas
    char estado1, estado2;
    char codigo1[2], codigo2[2];
    char nome_cidade1[15], nome_cidade2[15];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int numero_pontos_turisticos1, numero_pontos_turisticos2;
    float densidade_populacional1, densidade_populacional2;
    float pib_per_capita1,  pib_per_capita2;
    float super_poder1, super_poder2;
    int resultado;

    // armazenamento dos dados da carta 1
    printf("Vamos começar o cadastro da primeira carta.\n");

    printf("Digite a letra do Estado: ");
    scanf("%c", &estado1);

    printf("Digite o código da carta: ");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade: ");
    scanf("%s", nome_cidade1);

    printf("Digite a quantidade da população: ");
    scanf("%d", &populacao1);

    printf("Digite a área: ");
    scanf("%f", &area1);

    printf("Digite o valor do PIB: ");
    scanf("%f", &pib1);

    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &numero_pontos_turisticos1);

    densidade_populacional1 = (float) populacao1 / area1;
    // multiplicando por 1 bilhão já que na tarefa o valor é passa do em float assim 699.28 no exemplo 
    pib_per_capita1 = (float) pib1 / populacao1 * 1000000000;
    super_poder1 = (float) populacao1 + area1 + pib1 + (1.0 / densidade_populacional1) + numero_pontos_turisticos1 + pib_per_capita1;

    // Impresão dos dados da carta 1
    printf("Carta: %d\n", 1);
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da cidade: %s\n", nome_cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhôes de reais\n", pib1);
    printf("Número de pontos turísticos: %d\n", numero_pontos_turisticos1);
    printf("Densidade populacional: %.2f\n", densidade_populacional1);
    printf("PIB per capita: %.2f reais\n", pib_per_capita1);
    printf("Super poder: %.2f\n", super_poder1);

    // Armazenamento dos dados da carta 2
    printf("vamos cadastrar a segunda carta agora.\n");

    printf("Digite a letra do Estado: ");
    // adicionado um espaço " " antes de especificador de formato para evitar erros e pular 
    // para a proxima instrução (o enter anterior fica em buffer e atrapalha - Isso é uma 
    // peculiaridade da linguagem C)
    scanf(" %c", &estado2);

    printf("Digite o código da carta: ");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade: ");
    scanf("%s", nome_cidade2);

    printf("Digite a quantidade da população: ");
    scanf("%d", &populacao2);

    printf("Digite a área: ");
    scanf("%f", &area2);

    printf("Digite o valor do PIB: ");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &numero_pontos_turisticos2);

    densidade_populacional2 = (float) populacao2 / area2;
    // multiplicando por 1 bilhão já que na tarefa o valor é passa do em float assim 699.28 no exemplo 
    pib_per_capita2 = (float) pib2 / populacao2 * 1000000000;
    super_poder2 = (float) populacao2 + area2 + pib2 + (1.0 / densidade_populacional2) + numero_pontos_turisticos2 + pib_per_capita2;

    // Impressão dos dados da carta 2
    printf("Carta: %d\n", 2);
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da cidade: %s\n", nome_cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhôes de reais\n", pib2);
    printf("Número de pontos turísticos: %d\n", numero_pontos_turisticos2);
    printf("Densidade populacional: %.2f h/km² \n", densidade_populacional2);
    printf("PIB per capita: %.2f reais\n", pib_per_capita2);
    printf("Super poder: %.2f\n", super_poder2);

    printf("Cadastro das duas cartas finalizado.");

    // comparação dos atributos das cartas
    printf("Batalha das cartas\n");
    resultado = populacao1 > populacao2;
    printf("População: (%d)\n", resultado);
    resultado = area1 > area2;
    printf("Área: (%d)\n", resultado);
    resultado = pib1 > pib2;
    printf("PIB: (%d)\n", resultado);
    resultado = numero_pontos_turisticos1 > numero_pontos_turisticos2;
    printf("Número de pontos turísticos: (%d)\n", resultado);
    resultado = densidade_populacional1 < densidade_populacional2;
    printf("Densidade populacional: (%d)\n", resultado);
    resultado = pib_per_capita1 > pib_per_capita2;
    printf("PIB per capita: (%d)\n", resultado);
    resultado = super_poder1 > super_poder2;
    printf("Super poder: (%d\n", resultado);

    return 0;
}
