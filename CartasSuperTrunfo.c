#include <stdio.h>

int main(){
    unsigned long int populacao1, populacao2;
    float area1, area2;
    int pontos_turisticos1, pontos_turisticos2;
    float densidade1, densidade2, PIB_percap1, PIB_percap2, super_poder1, super_poder2;
    char estado1[20], nome_cidade1[20], codigo_carta1[20], estado2[20], nome_cidade2[20], codigo_carta2[20];
    double PIB1, PIB2;


    // Dados da primeira carta
    printf("\nCadastro da Carta 1\n");
    printf("Estado: ");
    scanf(" %s", &estado1);
    printf("Nome da cidade: ");
    scanf(" %s", &nome_cidade1);
    printf("Codigo da carta: ");
    scanf(" %s", &codigo_carta1);
    printf("População: ");
    scanf("%lu", &populacao1);
    printf("Área (KM²): ");
    scanf("%f", &area1);
    printf("PIB (bi): ");
    scanf("%lf", &PIB1);
    printf("Pontos Turisticos: ");
    scanf("%i", &pontos_turisticos1);
    PIB1 = PIB1 * 1e9;  // transforma o valor de PIB em bilhão
    densidade1 = populacao1 / area1;
    PIB_percap1 = PIB1 / populacao1;
    super_poder1 = populacao1 + area1 + PIB1 + pontos_turisticos1 + PIB_percap1 + (1 / densidade1);

    printf("-----Dados da CARTA1 cadastrados com sucesso!! Os dados foram:-----\n");
    printf(">Estado: %s\n", estado1);
    printf("Cidade: %s\n", nome_cidade1);
    printf("Codigo da carta: %s\n", codigo_carta1);
    printf(">População: %li\n", populacao1);
    printf(">Área (KM²): %f\n", area1);
    printf(">PIB (bi): %.2lf\n", PIB1);
    printf(">Pontos Turisticos: %i\n", pontos_turisticos1);
    printf(">Densidade Populacional: %f\n", densidade1);
    printf(">PIB per Capita: %f\n", PIB_percap1);
    printf(">SUPER PODER %.2f\n", super_poder1);
    printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");


    // Dados da segunda carta
    printf("\nCadastro da Carta 2:\n");
    printf("Estado: ");
    scanf(" %s", &estado2);
    printf("Nome da cidade: ");
    scanf(" %s", &nome_cidade2);
    printf("Codigo da carta: ");
    scanf(" %s", &codigo_carta2);
    printf("Populacão: ");
    scanf("%lu", &populacao2);
    printf("Area (km2): ");
    scanf("%f", &area2);
    printf("PIB (bi): ");
    scanf("%lf", &PIB2);
    printf("Numero de Pontos Turisticos: ");
    scanf("%i", &pontos_turisticos2);
    PIB2 = PIB2 * 1e9;  // transforma o valor de PIB em bilhão
    densidade2 = populacao2 / area2;
    PIB_percap2 = PIB2 / populacao2;
    super_poder2 = populacao2 + area2 + PIB2 + pontos_turisticos2 + PIB_percap2 + (1 / densidade2);

    printf("-----Dados da CARTA2 cadastrados com sucesso!! Os dados foram:-----\n");
    printf(">Estado: %s\n", estado2);
    printf("Cidade: %s\n", nome_cidade2);
    printf("Codigo da carta: %s\n", codigo_carta2);
    printf(">População: %li\n", populacao2);
    printf(">Área (KM²): %f\n", area2);
    printf(">PIB (bi): %.2lf\n", PIB2);
    printf(">Pontos Turisticos: %i\n", pontos_turisticos2);
    printf(">Densidade Populacional: %f\n", densidade2);
    printf(">PIB per Capita: %f\n", PIB_percap2);
    printf(">SUPER PODER %.2f\n", super_poder2);
    printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");

    // Comparação das cartas

    int opcao1, opcao2, opcao3;


    printf("\n<><><><><><><>Comparação de cartas<><><><><><><>\n");
    printf("Carta 1: - %s (%s)\n", nome_cidade1, estado1);
    printf("Carta 2: - %s (%s)\n", nome_cidade2, estado2);
    printf("\n<><><><><><><><><><><><><><><><><><><><><><><><>\n");

    printf("##### Escolha qual o Primeiro atributo você deseja comparar #####\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turisticos\n");
    printf("5. Densidade Populacional\n");
    printf("6. PIB per Capita\n");
    printf("7. SUPER PODER\n");
    printf("8. Sair do programa\n");
    printf(">Digite a opção: ");
    scanf("%i", &opcao1);

    int resultado1 = 0, resultado2 = 0;

    switch (opcao1)
    {
    case 1:
        printf("\n<!>Atributo: População <!>\n");
        populacao1 > populacao2 ? resultado1++ : resultado2++;
        break;
    case 2:
        printf("\n<!>Atributo: Área <!>\n");
        area1 > area2 ? resultado1++ : resultado2++;
        break;
    case 3:
        printf("\n<!>Atributo: PIB <!>\n");
        PIB1 > PIB2 ? resultado1++ : resultado2++;
        break;
    case 4:
        printf("\n<!>Atributo: Pontos Turísticos <!>\n");
        pontos_turisticos1 > pontos_turisticos2 ? resultado1++ : resultado2++;
        break;
    case 5:
        printf("\n<!>Atributo: Densidade Populacional <!>\n");
        densidade1 > densidade2 ? resultado1++ : resultado2++;
        break;
    case 6:
        printf("\n<!>Atributo: PIB per Capita <!>\n");
        PIB_percap1 > PIB_percap2 ? resultado1++ : resultado2++;
        break;
    case 7:
        printf("\n<!>Atributo: SUPER PODER <!>\n");
        super_poder1 > super_poder2 ? resultado1++ : resultado2++;
        break;
    case 8:
        printf("## Saindo do programa ##");
        break;
    default:
        printf("OPÇÂO INVÁLIDA");
        break;
    }


    printf("##### Escolha qual o Segundo atributo você deseja comparar #####\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turisticos\n");
    printf("5. Densidade Populacional\n");
    printf("6. PIB per Capita\n");
    printf("7. SUPER PODER\n");
    printf("8. Sair do programa\n");
    printf(">Digite a opção: ");
    scanf("%i", &opcao2);

    if (opcao1 == opcao2)
    {
        printf("Opção repetida !");
    } else{
        switch (opcao2)
    {
    case 1:
        printf("\n<!>Atributo: População <!>\n");
        populacao1 > populacao2 ? resultado1++ : resultado2++;
        break;
    case 2:
        printf("\n<!>Atributo: Área <!>\n");
        area1 > area2 ? resultado1++ : resultado2++;
        break;
    case 3:
        printf("\n<!>Atributo: PIB <!>\n");
        PIB1 > PIB2 ? resultado1++ : resultado2++;
        break;
    case 4:
        printf("\n<!>Atributo: Pontos Turísticos <!>\n");
        pontos_turisticos1 > pontos_turisticos2 ? resultado1++ : resultado2++;
        break;
    case 5:
        printf("\n<!>Atributo: Densidade Populacional <!>\n");
        densidade1 > densidade2 ? resultado1++ : resultado2++;
        break;
    case 6:
        printf("\n<!>Atributo: PIB per Capita <!>\n");
        PIB_percap1 > PIB_percap2 ? resultado1++ : resultado2++;
        break;
    case 7:
        printf("\n<!>Atributo: SUPER PODER <!>\n");
        super_poder1 > super_poder2 ? resultado1++ : resultado2++;
        break;
    case 8:
        printf("## Saindo do programa ##");
        break;
    default:
        printf("OPÇÂO INVÁLIDA");
        break;
    }
    }

    printf("##### Escolha qual o Terceiro atributo você deseja comparar #####\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turisticos\n");
    printf("5. Densidade Populacional\n");
    printf("6. PIB per Capita\n");
    printf("7. SUPER PODER\n");
    printf("8. Sair do programa\n");
    printf(">Digite a opção: ");
    scanf("%i", &opcao3);
    
    if (opcao3 == opcao1 || opcao3 == opcao2)
    {
        printf("Opção repetida !");
    } else{
        switch (opcao3)
    {
    case 1:
        printf("\n<!>Atributo: População <!>\n");
        populacao1 > populacao2 ? resultado1++ : resultado2++;
        break;
    case 2:
        printf("\n<!>Atributo: Área <!>\n");
        area1 > area2 ? resultado1++ : resultado2++;
        break;
    case 3:
        printf("\n<!>Atributo: PIB <!>\n");
        PIB1 > PIB2 ? resultado1++ : resultado2++;
        break;
    case 4:
        printf("\n<!>Atributo: Pontos Turísticos <!>\n");
        pontos_turisticos1 > pontos_turisticos2 ? resultado1++ : resultado2++;
        break;
    case 5:
        printf("\n<!>Atributo: Densidade Populacional <!>\n");
        densidade1 > densidade2 ? resultado2++ : resultado1++;
        break;
    case 6:
        printf("\n<!>Atributo: PIB per Capita <!>\n");
        PIB_percap1 > PIB_percap2 ? resultado1++ : resultado2++;
        break;
    case 7:
        printf("\n<!>Atributo: SUPER PODER <!>\n");
        super_poder1 > super_poder2 ? resultado1++ : resultado2++;
        break;
    case 8:
        printf("## Saindo do programa ##");
        break;
    default:
        printf("OPÇÂO INVÁLIDA");
        break;
    }
    }

    if (resultado1 > resultado2){
        printf("A carta 1 venceu!!");
    } else if (resultado1 < resultado2)
    {
        printf("A carta 2 venceu!!");
    } else{
        printf("HOUVE UM EMPATE !!");
    }
    
}