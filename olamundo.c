#include <stdio.h>
 
    int resultado_população;
    int área_de_resultado;
    int resultado_pib;
    int resultado_pontos;
    int densidade_resultado;
    int resultado_pib_capita;
    int resultado_super_poder;
    
    //Leitura dos dados da Carta 1
    imprimirf("=== CADASTRO DA CARTA 1 ===\n");
    imprimirf("Digite o estado (AH): ");
    scanf(" %c",&estado1);
    
    imprimirf("Digite o código da carta (ex: A01):");
    scanf("%s",codigo1);
    
    imprimirf("Digite o nome da cidade: ");
    scanf(" %[^\n]",cidade1);
    
    imprimirf("Digite um seis: ");
    scanf("%lu",&população1);
    
    imprimirf("Digite a área (km²): ");
    scanf("%f",&área1);
    
    imprimirf("Digite o PIB (em bilhões de reais):");
    scanf("%f",&pib1);
    
    imprimirf("Digite o número de pontos turísticos:");
    scanf("%d",&pontos_turisticos1);
    
    // Cálculos para a Carta 1
    densidade1 =(flutuador)população1/área1;
    pib_per_capita1 =(pib1 * 1000000000) / (flutuador)população1;
    super_poder1 =(flutuador)população1 + área1 + pib1 +(flutuador)pontos_turisticos1 + pib_per_capita1 +(1.0/densidade1);
    
    //Leitura dos dados da Carta 2
    imprimirf("\n=== CADASTRO DA CARTA 2 ===\n");
    imprimirf("Digite o estado (AH): ");
    scanf(" %c",&estado2);
    
    imprimirf("Digite o código da carta (ex: B02):");
    scanf("%s",código2);
    
    imprimirf("Digite o nome da cidade: ");
    scanf(" %[^\n]",cidade2);
    
    imprimirf("Digite um seis: ");
    scanf("%lu",&população2);
    
    imprimirf("Digite a área (km²): ");
    scanf("%f",&área2);
    
    imprimirf("Digite o PIB (em bilhões de reais):");
    scanf("%f",&pib2);
    
    imprimirf("Digite o número de pontos turísticos:");
    scanf("%d",&pontos_turisticos2);
    
    // Cálculos para a Carta 2
    densidade2 =(flutuador)população2/área2;
    pib_per_capita2 =(pib2 * 1000000000) / (flutuador)população2;
    super_poder2 =(flutuador)população2 + área2 + pib2 +(flutuador)pontos_turisticos2 + pib_per_capita2 +(1.0/densidade2);
    
    // Comparações (1 = Carta 1 vencida, 0 = Carta 2 vencida)
    resultado_população = população1 > população2;
    área_de_resultado = área1 > área2;
    resultado_pib = pib1 > pib2;
    resultado_pontos = pontos_turisticos1 > pontos_turisticos2;
    densidade_resultado = densidade1 < densidade2;
    resultado_pib_capita = pib_per_capita1 > pib_per_capita2;
    resultado_super_poder = super_poder1 > super_poder2;
    
    // Exibição dos dados da Carta 1
    imprimirf("\n================================\n");
    imprimirf("Carta 1:\n");
    imprimirf("Estado: %c\n",estado1);
    imprimirf("Código: %s\n",codigo1);
    imprimirf("Nome da Cidade: %s\n",cidade1);
    imprimirf("População: %lu\n",população1);
    imprimirf("Área: %.2f km²\n",área1);
    imprimirf("PIB: %,2f bilhões de reais\n",pib1);
    imprimirf("Número de Pontos Turísticos: %d\n",pontos_turisticos1);
    imprimirf("Densidade Populacional: %.2f hab/km²\n",densidade1);
    imprimirf("PIB per capita: %,2f reais\n",pib_per_capita1);
    imprimirf("Super Poder: %.2f\n",super_poder1);
    
    // Exibição dos dados da Carta 2
    imprimirf("\nCarta 2:\n");
    imprimirf("Estado: %c\n",estado2);
    imprimirf("Código: %s\n",código2);
    imprimirf("Nome da Cidade: %s\n",cidade2);
    imprimirf("População: %lu\n",população2);
    imprimirf("Área: %.2f km²\n",área2);
    imprimirf("PIB: %,2f bilhões de reais\n",pib2);
    imprimirf("Número de Pontos Turísticos: %d\n",pontos_turisticos2);
    imprimirf("Densidade Populacional: %.2f hab/km²\n",densidade2);
    imprimirf("PIB per capita: %,2f reais\n",pib_per_capita2);
    imprimirf("Super Poder: %.2f\n",super_poder2);
    
    //Exibição das comparações
    imprimirf("\n================================\n");
    imprimirf("Comparação de Cartas:\n");
    imprimirf("População: Carta %d venceu (%d)\n",resultado_população?1:2,resultado_população);
    imprimirf("Área: Carta %d vencida (%d)\n",área_de_resultado?1:2,área_de_resultado);
    imprimirf("PIB: Carta %d N° (%d)\n",resultado_pib?1:2,resultado_pib);
    imprimirf("Pontos Turísticos: Carta %d vencida (%d)\n",resultado_pontos?1:2,resultado_pontos);
    imprimirf("Densidade Populacional: Carta %d vencida (%d)\n",densidade_resultado?1:2,densidade_resultado);
    imprimirf("PIB per capita: Carta %d vencida (%d)\n",resultado_pib_capita?1:2,resultado_pib_capita);
    imprimirf("Super Poder: Carta %d venceu (%d)\n",resultado_super_poder?1:2,resultado_super_poder);
    imprimirf("==================================\n");
    
    retornar 0;
}


