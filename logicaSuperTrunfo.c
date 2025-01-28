    #include <stdio.h>

    int main() {
        /*
        VARIÁVEIS
        */
        // variáveis para a carta 1
        char estado;                  // espaço em memória para armazenar  um caractere que representa o estado
        char nomeCidade[51];          // espaço em memória para armazenar o nome da cidade com suporte a 50 caracteres
        char codigoCarta[4];          // espaço em memória para armazenar o código da carta com suporte a 3 caracteres
        unsigned long int populacao;  // espaço em memória para armazenar a população da cidade com suporte a um número muito maior
        float area;                   // espaço em memória para armazenar a área da cidade com suporte a número decimal
        float pib;                    // espaço em memória para armazenar o pib da cidade com suporte a número decimal
        int numeroPontosTuristicos;   // espaço em memória para armazenar a quantidade de pontos turísticos da cidade
        float densidadePopulacional;  // espaço em memória para armazenar a densidade populacional da cidade com suporte a número decimal
        float pibPerCapita;           // espaço em memória para armazenar o pib per capta com suporte a número decimal
        float superPoder;             // espaço para armazenar a soma de todas as propriedade

        // variáveis para a carta 2
        char estado2;
        char nomeCidade2[51];
        char codigoCarta2[4];
        unsigned long int populacao2;
        float area2;
        float pib2;
        int numeroPontosTuristicos2;
        float densidadePopulacional2;
        float pibPerCapita2;
        float superPoder2;

        // variável para menu de atributos
        int atributoEscolhido;
        
        /*
        CARTA 1
        */
        
        // Cadastro da carta 1
        printf("Para começar, insira as informações da carta 1...\n");
        
        printf("Digite uma letra de A até H que representa o estado: ");
        scanf("%c", &estado);                                           // solicita o estado e armazena na variável estado
        printf("Digite o código da carta: ");
        scanf("%s", &codigoCarta);                                      // solicita o código da carta e armaena na variável codigoCarta
        printf("Digite o nome da cidade: ");
        scanf("%s", &nomeCidade);                                       // solicita o nome da cidade e armazena na variável nomeCidade
        printf("Digite a população da cidade: ");
        scanf("%lu", &populacao);                                        // solicita a população da cidade e armazena na variável populacao
        printf("Digite a área de cidade em Km²: ");
        scanf("%f", &area);                                             // solicita a área da cidade e armazena na variável area
        printf("Digite o PIB: ");
        scanf("%f", &pib);                                              // solicita o PIB da cidade e armazena na variável PIB
        printf("Digite o número de pontos turísticos: ");
        scanf("%d", &numeroPontosTuristicos);                           // solicita o PIB da cidade e armazena na variável PIB
        
        // calculo da densidade populacional
        densidadePopulacional = populacao / area;

        // calculo do pib per capita
        pibPerCapita = pib / populacao;

        // calculo do super poder
        superPoder = populacao + area + pib + pibPerCapita + (densidadePopulacional * -1) + numeroPontosTuristicos;


        // Imprime as informações da carta inserida anteriormente
        printf("\nImprimindo as informações da carta 1...");
        printf("\nEstado: %c", estado);
        printf("\nCódigo da carta: %s", codigoCarta);
        printf("\nNome da Cidade: %s", nomeCidade);
        printf("\nPopulação: %d", populacao);
        printf("\nÁrea: %.2f Km²", area);                                               // %.2f imprime a área com dois dígitos decimais
        printf("\nPIB: R$%.2f", pib);                                                   // %.2f imprime o valor do PIB com dois dígitos decimais
        printf("\nNúmero de pontos turísticos: %d", numeroPontosTuristicos);
        printf("\nDensidade Populacional: %.2f pessoas/km²", densidadePopulacional);    // %.2f imprime a densidade populacional com dois dígitos decimais
        printf("\nPIB per Capita: R$%.2f", pibPerCapita);                               // %.2f imprime o valor do PIB per capitra com dois dígitos decimais
        printf("\nSuper Poder: %.2f\n", superPoder);                                    // %.2f imprime o valor do superpoder com dois dígitos decimais

        /*
        CARTA 2
        */

        // Cadastro da carta 2
        printf("\nAgora, insira as informações da carta 2...\n");
        
        printf("Digite uma letra de A até H que representa o estado: ");
        scanf(" %c", &estado2);
        printf("Digite o código da carta: ");
        scanf("%s", &codigoCarta2);
        printf("Digite o nome da cidade: ");
        scanf("%s", &nomeCidade2);
        printf("Digite a população da cidade: ");
        scanf("%lu", &populacao2);
        printf("Digite a área de cidade em Km²: ");
        scanf("%f", &area2);
        printf("Digite o PIB: ");
        scanf("%f", &pib2);
        printf("Digite o número de pontos turísticos: ");
        scanf("%d", &numeroPontosTuristicos2);
        
        // calculo da densidade populacional
        densidadePopulacional2 = populacao2 / area2;

        // calculo do pib per capita
        pibPerCapita2 = pib2 / populacao2;

        // calculo do super poder
        superPoder2 = populacao2 + area2 + pib2 + pibPerCapita2 + (densidadePopulacional2 * -1) + numeroPontosTuristicos2;

        // Imprime as informações da carta inserida anteriormente
        printf("\nImprimindo as informações da carta 2...");
        printf("\nEstado: %c", estado2);
        printf("\nCódigo da carta: %s", codigoCarta2);
        printf("\nNome da Cidade: %s", nomeCidade2);
        printf("\nPopulação: %lu", populacao2);
        printf("\nÁrea: %.2f Km²", area2);
        printf("\nPIB: R$%.2f", pib2);
        printf("\nNúmero de pontos turísticos: %d", numeroPontosTuristicos2);
        printf("\nDensidade Populacional: %.2f pessoas/km²", densidadePopulacional2);
        printf("\nPIB per Capita: R$%.2f", pibPerCapita2);
        printf("\nSuper Poder: %.2f\n", superPoder2);
        
        /*
        COMPARAÇÃO DAS CARTAS
        */

        // Imprime menu com as opções de atributos para comparação
        printf("\nAgora, escolha quais atributos serão usados para comparação:\n");
        printf("1 - População\n");
        printf("2 - Área\n");
        printf("3 - PIB\n");
        printf("4 - Pontos Turísticos\n");
        printf("5 - Densidade Populacional\n");
        printf("6 - PIB per Capita\n");
        printf("7 - Super-poder\n");
        scanf("%d", &atributoEscolhido);

        printf("\nComparando as cartas...\n");
        switch (atributoEscolhido)                                              // verifica qual atributo foi escolhido pelo jogador
        {
        case 1:                                                                 // População selecionado
            printf("O atributo de comparação escolhido é 'População'\n");
            if(populacao > populacao2){
                printf("A carta 1 (%c%s) venceu!\n", estado, codigoCarta);
            } else if (populacao < populacao2) {
                printf("A carta 2 (%c%s) venceu!\n", estado, codigoCarta2);
            } else {                                                            // se não é maior e nem menor, então é igual (empate)
                printf("Empate!\n");
            }   
            break;
        case 2:                                                                 // Área selecionado    
            printf("O atributo de comparação escolhido é 'Área'\n");
            if(area > area2){
                printf("A carta 1 (%c%s) venceu!\n", estado, codigoCarta);
            } else if (area < area2) {
                printf("A carta 2 (%c%s) venceu!\n", estado, codigoCarta2);
            } else {                                                            // se não é maior e nem menor, então é igual (empate)
                printf("Empate!\n");
            }   
            break;
        case 3:                                                                 // PIB selecionado
            printf("O atributo de comparação escolhido é 'PIB'\n");
            if(pib > pib2){
                printf("A carta 1 (%c%s) venceu!\n", estado, codigoCarta);
            } else if (pib < pib2) {
                printf("A carta 2 (%c%s) venceu!\n", estado, codigoCarta2);
            } else {                                                            // se não é maior e nem menor, então é igual (empate)
                printf("Empate!\n");
            }   
            break;
        case 4:                                                                 // Número de Pontos Turísticos selecionado
            printf("O atributo de comparação escolhido é 'Número de Pontos Turísticos'\n");
            if(numeroPontosTuristicos > numeroPontosTuristicos2){
                printf("A carta 1 (%c%s) venceu!\n", estado, codigoCarta);
            } else if (numeroPontosTuristicos < numeroPontosTuristicos2) {
                printf("A carta 2 (%c%s) venceu!\n", estado, codigoCarta2);
            } else {                                                            // se não é maior e nem menor, então é igual (empate)
                printf("Empate!\n");
            }   
            break;
        case 5:                                                                 // Densidade Populacional selecionado
            printf("O atributo de comparação escolhido é 'Densidade Populacional'\n");
            if(densidadePopulacional < densidadePopulacional2){                         // vence quem tem a menor densidade populacional
                printf("A carta 1 (%c%s) venceu!\n", estado, codigoCarta);
            } else if (densidadePopulacional > densidadePopulacional2) {
                printf("A carta 2 (%c%s) venceu!\n", estado, codigoCarta2);
            } else {                                                                    // se não é maior e nem menor, então é igual (empate)
                printf("Empate!\n");
            }   
            break;
        case 6:                                                                 // PIB per Capita selecionado
            printf("O atributo de comparação escolhido é 'PIB per Capita'\n");
            if(pibPerCapita > pibPerCapita2){
                printf("A carta 1 (%c%s) venceu!\n", estado, codigoCarta);
            } else if (pibPerCapita < pibPerCapita2) {
                printf("A carta 2 (%c%s) venceu!\n", estado, codigoCarta2);
            } else {                                                                // se não é maior e nem menor, então é igual (empate)
                printf("Empate!\n");
            }
            break;
        case 7:                                                                 // Super poder selecionado
            printf("O atributo de comparação escolhido é 'Super Poder'\n");
            if(superPoder > superPoder2){
                printf("A carta 1 (%c%s) venceu!\n", estado, codigoCarta);
            } else if (superPoder < superPoder2) {
                printf("A carta 2 (%c%s) venceu!\n", estado, codigoCarta2);
            } else {                                                    // se não é maior e nem menor, então é igual (empate)
                printf("Empate!\n");
            }
            break;
        default:
            break;
        }
        
        return 0;
    }