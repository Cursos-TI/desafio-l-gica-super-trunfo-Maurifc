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

    short int opcaoMenu;                // guarda a opção escolhida no menu principal
    short int atributoEscolhido1;       // guarda o primeiro atributo que será usado para comparação
    short int atributoEscolhido2;       // guarda o segundo atributo que será usado para comparação
    short int vitoriasCarta1 = 0;       // guarda quantas vezes a carta 1 ganhou durante as comparações
    short int vitoriasCarta2 = 0;       // guarda quantas vezes a carta 2 ganhou durante as comparações
    
    /*
    MENU PRINCIPAL
    */
    printf("Bem vindo ao jogo Super Trunfo!\n");
    printf("Escolha uma opção:\n");
    printf("1 - Jogar\n");
    printf("2 - Regras\n");
    printf("3 - Sair\n");
    scanf("%d", &opcaoMenu);

    // verifica qual opção do menu foi selecionada
    switch (opcaoMenu) {
        case 1:
            printf("\n*** Iniciando o jogo ***\n");
            
            /*
            CARTA 1
            */
            
            // Cadastro da carta 1
            printf("Para começar, insira as informações da carta 1...\n");                
            printf("Digite uma letra de A até H que representa o estado: ");
            scanf(" %c", &estado);                                           // solicita o estado e armazena na variável estado
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
            printf("Atributo 1: ");
            scanf("%d", &atributoEscolhido1);
            printf("Atributo 2: ");
            scanf("%d", &atributoEscolhido2);

            // Verifica se usuário escolheu uma opção válida
            if (atributoEscolhido1 < 1 || atributoEscolhido1 > 7 || atributoEscolhido2 < 1 || atributoEscolhido2 > 7 || atributoEscolhido1 == atributoEscolhido2){
                printf("Opção inválida!\n");
                break;
            }

            printf("\nOs atributos de comparação escolhidos foram:\n");

            // População
            if( (atributoEscolhido1 == 1 || atributoEscolhido2 == 1))       // Verifica se o atributo 'População' foi escolhido para comparação
            {
                printf("- População\n");
                if(populacao > populacao2) {                                // População da carta 1 é maior que da carta 2?
                    vitoriasCarta1++;                                       // ... se for maior, a carta 1 acumula uma vitória
                } else if ( populacao < populacao2 ) {                      
                    vitoriasCarta2++;                                       // ... se for menor, então a cata 2 acumula uma vitória
                }
                // se for o mesmo valor, então nenhuma carta ganhou nesse atributo
            }
            
            // Área
            if( (atributoEscolhido1 == 2 || atributoEscolhido2 == 2))       // Verifica se o atributo 'Área' foi escolhido para comparação
            {
                printf("- Área\n");
                if(area > area2) {                                          // Área da carta 1 é maior que da carta 2?
                    vitoriasCarta1++;                                       // ... se for maior, a carta 1 acumula uma vitória
                } else if ( area < area2 ) {
                    vitoriasCarta2++;                                       // ... se for menor, então a cata 2 acumula uma vitória
                }
            }

            // PIB
            if( (atributoEscolhido1 == 3 || atributoEscolhido2 == 3))       // Verifica se o atributo 'PIB' foi escolhido para comparação
            {
                printf("- PIB\n");
                if(pib > pib2) {                                            // PIB da carta 1 é maior que da carta 2?
                    vitoriasCarta1++;                                       // ... se for maior, a carta 1 acumula uma vitória
                } else if ( pib < pib2 ) {
                    vitoriasCarta2++;                                       // ... se for menor, então a cata 2 acumula uma vitória
                }
            }

            // Pontos Turísticos
            if( (atributoEscolhido1 == 4 || atributoEscolhido2 == 4))       // Verifica se o atributo 'Pontos Turísticos' foi escolhido para comparação
            {
                printf("- Pontos Turísticos\n");
                if(numeroPontosTuristicos > numeroPontosTuristicos2) {      // Número de pontos turísticos da carta 1 é maior que da carta 2?
                    vitoriasCarta1++;                                       // ... se for maior, a carta 1 acumula uma vitória
                } else if ( numeroPontosTuristicos < numeroPontosTuristicos2 ) {
                    vitoriasCarta2++;                                       // ... se for menor, então a cata 2 acumula uma vitória
                }
            }

            // Densidade Populacional
            if( (atributoEscolhido1 == 5 || atributoEscolhido2 == 5))       // Verifica se o atributo 'Densidade Populacional' foi escolhido para comparação
            {
                printf("- Densidade Populacional\n");
                if(densidadePopulacional < densidadePopulacional2) {        // Densidade populacional da carta 1 é menor que da carta 2?
                    vitoriasCarta1++;                                       // ... se for menor, a carta 1 acumula uma vitória
                } else if ( densidadePopulacional > densidadePopulacional2 ) {
                    vitoriasCarta2++;                                       // ... se for maior, então a cata 2 acumula uma vitória
                }
            }

            // PIB per Capita
            if( (atributoEscolhido1 == 6 || atributoEscolhido2 == 6))       // Verifica se o atributo 'PIB per Capita' foi escolhido para comparação
            {
                printf("- PIB per Capita\n");
                if(pibPerCapita > pibPerCapita2) {                          // PIB per Capita da carta 1 é maior que da carta 2?
                    vitoriasCarta1++;                                       // ... se for maior, a carta 1 acumula uma vitória
                } else if ( pibPerCapita < pibPerCapita2 ) {
                    vitoriasCarta2++;                                       // ... se for menor, então a cata 2 acumula uma vitória
                }
            }

            // Super Poder
            if( (atributoEscolhido1 == 7 || atributoEscolhido2 == 7))       // Verifica se o atributo 'Super Poder' foi escolhido para comparação
            {
                printf("- Super Poder\n");              
                if(superPoder > superPoder2) {                              // Super Poder da carta 1 é maior que da carta 2?
                    vitoriasCarta1++;                                       // ... se for maior, a carta 1 acumula uma vitória
                } else if ( superPoder < superPoder2 ) {
                    vitoriasCarta2++;                                       // ... se for menor, então a cata 2 acumula uma vitória
                }
            }
            
            /*
            RESULTADO
            */
            if(vitoriasCarta1 == vitoriasCarta2){                           // Ganha a carta com maior número de vitórias. Se tiverem o mesmo número de vitórias quer dizer que jogo empatou.
                printf("\n*** Resultado: Empate! ***\n");
            } else {
                printf("\n*** Resultado: A carta vencedora é a Carta %d ***\n", vitoriasCarta1 > vitoriasCarta2 ? 1 : 2); // Imprime 1 se a carta com mais vitórias é a carta de número 1, senão irá imprimir 2
            }   
            break;
        case 2:
            printf("\n*** Regras do jogo ***\n");
            printf("Cadastre duas cartas e escolha dois atributos que serão usados para comparação.\n");
            printf("Ganha a carta com maior valor nos atributos escolhido. Menor valor no caso do atributo 'Densidade Populacional'.\n");
            printf("Caso uma das cartas ganhe em um atributo mas perca no outro, então o resultado é empate.\n");
            printf("Preparado?\n");
            break;
        case 3:
            printf("Saindo do jogo...\n");
            break;
        default:
            printf("Opção inválida...\n");
            break;
    }

    return 0;
}
