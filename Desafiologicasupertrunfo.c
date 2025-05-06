#include <stdio.h>

int main(){

    char estado;
    char codigodacarta[10];
    char nomedacidade[30];
    unsigned long int populacao;
    float areaemkm;
    float PIB;
    int pontosturisticos;

    char Estado;
    char Codigodacarta[10];
    char Nomedacidade[30];
    unsigned long int Populacao;
    float Areaemkm;
    float pIB;
    int Pontosturisticos;

    printf("Digite uma letra entre A a H para identificar o Estado:\n");
    scanf(" %c", &estado);

    printf("Digite o código da carta:\n");
    scanf(" %[^\n]", codigodacarta);

    printf("Digite o nome da cidade:\n");
    scanf(" %[^\n]", nomedacidade);

    printf("Digite a população:\n");
    scanf(" %lu", &populacao);

    printf("digite a área em KM²:\n");
    scanf(" %f", &areaemkm);

    printf("digite o PIB:\n");
    scanf(" %f", &PIB);

    printf("digite o número de pontos turísticos:\n");
    scanf(" %d", &pontosturisticos);

    // cadatro da segunda carta

    printf("\n");
    printf("Atenção!\nAgora vamos criar a segunda carta:\n");
    printf("\n");

    printf("Digite uma letra entre A a H para identificar o Estado:\n");
    scanf(" %c", &Estado);

    printf("Digite o código da carta:\n");
    scanf(" %[^\n]", Codigodacarta);

    printf("Digite o nome da cidade:\n");
    scanf(" %[^\n]", Nomedacidade);

    printf("Digite a população:\n");
    scanf(" %lu", &Populacao);

    printf("digite a área em KM²:\n");
    scanf(" %f", &Areaemkm);

    printf("digite o PIB:\n");
    scanf(" %f", &pIB);

    printf("digite o número de pontos turísticos:\n");
    scanf(" %d", &Pontosturisticos);

    float pibpercapita = PIB / populacao;
    float densidade = populacao / areaemkm;

    float Pibpercapita = pIB / Populacao;
    float Densidade = Populacao / Areaemkm;

    float superpoder = populacao + areaemkm + PIB + pontosturisticos + pibpercapita;
    float Superpoder = Populacao + Areaemkm + pIB + Pontosturisticos + Pibpercapita;

    printf("\nDADOS DA CARTA 1:\n");

    printf("Estado: %c\n", estado);
    printf("Código da carta: %s\n", codigodacarta);
    printf("Nome da cidade: %s\n", nomedacidade);
    printf("População: %lu\n", populacao);
    printf("Área: %.2f KM²\n", areaemkm);
    printf("PIB: %.2f bilhões de reais\n", PIB);
    printf("Números de pontos turísticos: %d\n", pontosturisticos);
    printf("Densidade populacional: %.2fhab/km²\n", densidade);
    printf("PIB per capita : %.2f reais\n", pibpercapita);
    printf("Super poder:%.2f", superpoder);
    printf("\n");

    printf("\nDADOS DA CARTA 2:\n");

    printf("Estado: %c\n", Estado);
    printf("Código da carta: %s\n", Codigodacarta);
    printf("Nome da cidade: %s\n", Nomedacidade);
    printf("População: %lu\n", Populacao);
    printf("Área: %.2f KM²\n", Areaemkm);
    printf("PIB: %.2f bilhões de reais\n", pIB);
    printf("Números de pontos turísticos: %d\n", Pontosturisticos);
    printf("Densidade populacional: %.2f hab/km²\n", Densidade);
    printf("PIB per capita : %.2f reais\n", Pibpercapita);
    printf("Super poder:%.2f", Superpoder);
    printf("\n");
    //variáveis da primeira carta.
    int opcao1, opcao2;
    int populacaoatributo1, populacaoatributo2,areakmatributo1,areakmatributo2,pibatributo1,pibatributo2;
    int pontosturisticosatributo1,pontosturisticosatributo2,densidadeatributo1, densidadeatributo2;
    int superpoderatributo1,superpoderatributo2;
    //variáveis da segunda carta.
    int populacao2atributo1, populacao2atributo2,areakm2atributo1,areakm2atributo2,pib2atributo1,pib2atributo2;
    int pontosturisticos2atributo1,pontosturisticos2atributo2,densidade2atributo1, densidade2atributo2;
    int superpoder2atributo1,superpoder2atributo2;

    int pontos1 = 0, pontos2 = 0;

    printf("\nBem-vindo ao jogo!\n");
    printf("Ecolha o primeiro atributo a ser comparado:\n");
    printf(" 1 . A populaçao será comparada\n");
    printf(" 2 . A área em km² será comparada\n");
    printf(" 3 . O PIB será comparado\n");
    printf(" 4 . O número de pontos turísticos serão comparados\n");
    printf(" 5 . A densidade demográfica será comparada\n");
    printf(" 6 . O super poder será comparado\n");
    printf("Opção:");
    scanf("%d", &opcao1);

    switch (opcao1)
    {
    case 1:
        populacaoatributo1 = populacao;populacaoatributo2 = Populacao;
        break;
    case 2:
        areakmatributo1 = areaemkm;areakmatributo2 = Areaemkm;
        break;
    case 3:
        pibatributo1 = PIB;pibatributo2 = pIB;
        break;
    case 4:
        pontosturisticosatributo1 = pontosturisticos; pontosturisticosatributo2= Pontosturisticos;
        break;
    case 5:
        densidadeatributo1 = densidade;densidadeatributo2 = Densidade;
        break;
    case 6:
        superpoderatributo1 = superpoder;superpoderatributo2 = Superpoder;
        break;
    default:
        printf("Opção inválida!\n");
        break;
    }
    printf("\nAgora escolha o segundo atributo a ser comparado (diferente do primeiro):\n");
    do {
        printf("Opção: ");
        scanf("%d", &opcao2);
        if (opcao1 == opcao2) {
            printf("\nVocê deve escolher um atributo diferente!\n");
        }
    } while (opcao1 == opcao2);

    switch (opcao2)
    {
    case 1:
        populacao2atributo1 = populacao;populacao2atributo2 = Populacao;
        break;
    case 2:
        areakm2atributo1 = areaemkm;areakm2atributo2 = Areaemkm;
        break;
    case 3:
        pib2atributo1 = PIB;pib2atributo2 = pIB;
        break;
    case 4:
        pontosturisticos2atributo1 = pontosturisticos; pontosturisticos2atributo2= Pontosturisticos;
        break;
    case 5:
        densidade2atributo1 = densidade;densidade2atributo2 = Densidade;
        break;
    case 6:
        superpoder2atributo1 = superpoder;superpoder2atributo2 = Superpoder;
        break;
    default:
        printf("Opção inválida!\n");
        break;
    }
    //Comparação carta 1.
    printf("\nComparação da opção 1 :\n");
    if (opcao1 == 1){
        if(populacaoatributo1 > populacaoatributo2){
            printf(" %s é a cidade Vencedora com : %lu habitantes!\n",nomedacidade,populacao);
                pontos1++;
        } else if (populacaoatributo1 < populacaoatributo2){
            printf(" %s é a cidade Vencedora com : %lu habitantes!\n",Nomedacidade,Populacao);
            pontos2++;
        } else {
            printf(" Houve um empate!\n");
        }
    }    
    if (opcao1 == 2){
        if (areakmatributo1 > areakmatributo2){
            printf(" %s é a cidade Vencedora com uma área de : %.2f KM²!\n",nomedacidade,areaemkm);
            pontos1++;
        } else if (areakmatributo1 < areakmatributo2){
            printf(" %s é a cidade Vencedora com uma área de : %.2f KM²!\n",Nomedacidade,Areaemkm);
            pontos2++;
        } else {
            printf(" Houve um empate!\n");
        }
    }
    if (opcao1 == 3){
        if (pibatributo1 > pibatributo2){
            printf(" %s é a cidade Vencedora com o PIB de: %.2f bilhões de reais!\n",nomedacidade,PIB);
            pontos1++;
        } else if (pibatributo1 < pibatributo2){
            printf(" %s é a cidade Vencedora com o PIB de: %.2f bilhões de reais!\n",Nomedacidade,pIB);
            pontos2++;
        } else {
            printf(" Houve um empate!\n");
        }   
    }
    if (opcao1 == 4){
        if (pontosturisticosatributo1 > pontosturisticosatributo2){
            printf(" %s é a cidade Vencedora com: %d pontos turísticos!\n",nomedacidade,pontosturisticos);
            pontos1++;
        } else if (pontosturisticosatributo1 < pontosturisticosatributo2){
            printf(" %s é a cidade Vencedora com: %d pontos turísticos!\n",Nomedacidade,Pontosturisticos);
            pontos2++;
        }  else {
            printf(" Houve um empate!\n");
        }
    }
    if (opcao1 == 5){
        if (densidadeatributo1 < densidadeatributo2){
            printf(" %s é a cidade Vencedora com uma densidade de: %.2f hab/km²!\n",nomedacidade,densidade);
            pontos1++;
        } else if (densidadeatributo1 > densidadeatributo2){
            printf(" %s é a cidade Vencedora com uma densidade de: %.2f hab/km²!\n",Nomedacidade,Densidade);
            pontos2++;
        } else {
            printf(" Houve um empate!\n");
        } 
    }
    if (opcao1 == 6){
        if (superpoderatributo1 > superpoderatributo2){
            printf(" %s é a cidade Vencedora com o Superpoder de %.2f !\n",nomedacidade,superpoder);
            pontos1++;
        } else if (superpoderatributo1 < superpoderatributo2){
            printf(" %s é a cidade Vencedora com o Superpoder de %.2f !\n",Nomedacidade,Superpoder);
            pontos2++;
        } else {
            printf(" Houve um empate!\n");
        }  
    }
    //Comparação da carta 2.
    printf("\nComparação da opção 2 :\n");
    if (opcao2 == 1){
        if(populacao2atributo1 > populacao2atributo2){
            printf(" %s é a cidade Vencedora com : %lu habitantes!\n",nomedacidade,populacao);
                pontos1++;
        } else if (populacao2atributo1 < populacao2atributo2){
            printf(" %s é a cidade Vencedora com : %lu habitantes!\n",Nomedacidade,Populacao);
            pontos2++;
        } else {
            printf(" Houve um empate!\n");
        }
    }    
    if (opcao2 == 2){
        if (areakm2atributo1 > areakm2atributo2){
            printf(" %s é a cidade Vencedora com uma área de : %.2f KM²!\n",nomedacidade,areaemkm);
            pontos1++;
        } else if (areakm2atributo1 < areakm2atributo2 ){
            printf(" %s é a cidade Vencedora com uma área de : %.2f KM²!\n",Nomedacidade,Areaemkm);
            pontos2++;
        } else {
            printf(" Houve um empate!\n");
        }
    }
    if (opcao2 == 3){
        if (pib2atributo1 > pib2atributo2){
            printf(" %s é a cidade Vencedora com o PIB de: %.2f bilhões de reais!\n",nomedacidade,PIB);
            pontos1++;
        } else if (pib2atributo1 < pib2atributo2){
            printf(" %s é a cidade Vencedora com o PIB de: %.2f bilhões de reais!\n",Nomedacidade,pIB);
            pontos2++;
        } else {
            printf(" Houve um empate!\n");
        }   
    }
    if (opcao2 == 4){
        if (pontosturisticos2atributo1 > pontosturisticos2atributo2){
            printf(" %s é a cidade Vencedora com: %d pontos turísticos!\n",nomedacidade,pontosturisticos);
            pontos1++;
        } else if (pontosturisticos2atributo1 < pontosturisticos2atributo2){
            printf(" %s é a cidade Vencedora com: %d pontos turísticos!\n",Nomedacidade,Pontosturisticos);
            pontos2++;
        }  else {
            printf(" Houve um empate!\n");
        }
    }
    if (opcao2 == 5){
        if (densidade2atributo1 < densidade2atributo2){
            printf(" %s é a cidade Vencedora com uma densidade de: %.2f hab/km²!\n",nomedacidade,densidade);
            pontos1++;
        } else if (densidade2atributo1 > densidade2atributo2){
            printf(" %s é a cidade Vencedora com uma densidade de: %.2f hab/km²!\n",Nomedacidade,Densidade);
            pontos2++;
        } else {
            printf(" Houve um empate!\n");
        } 
    }
    if (opcao2 == 6){
        if (superpoder2atributo1 > superpoder2atributo2){
            printf(" %s é a cidade Vencedora com o Superpoder de %.2f !\n",nomedacidade,superpoder);
            pontos1++;
        } else if (superpoder2atributo1 < superpoder2atributo2){
            printf(" %s é a cidade Vencedora com o Superpoder de %.2f !\n",Nomedacidade,Superpoder);
            pontos2++;
        } else {
            printf(" Houve um empate!\n");
        }  
    }
    //Agora vamos ver quem foi a carta vencedora ou se teve um empate nas duas comparacões.
    printf("\nAgora temos o resultado das duas comparações que tivemos ,e o resultado é:\n");
    if (pontos1 > pontos2){
        printf("%s é a cidade vencedora!\n",nomedacidade);
    } else if(pontos1 < pontos2){
        printf("%s é a cidade vencedora!\n",Nomedacidade);
    }else {
        printf(" Houve um empate!\n");
    }

    return 0;
}
