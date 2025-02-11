#include <stdio.h>

int main(){
    int populacao, pontos_turisticos, cidade;
    float PIB, area;
    char estado;
    
    
    // for (iniciazação; condição; incremento);
    // int num_estado = 0; declara e inicializa a variavel
    // num_estado < 8; condição de encerramento, o for continua enquanto a variavel for menor que 8
    // num_estado++ equivale a num_estado = num_estado + 1
    for (int num_estado = 0; num_estado < 8; num_estado++){
        estado = 'A' + num_estado;
        
        for (int num_cidade = 1; num_cidade <= 4; num_cidade++){
            cidade = num_cidade;

            printf("\n=====Dados para a carta: [%c0%i]=====\n", estado, cidade);

            printf("População: ");
            scanf("%i", &populacao);

            printf("Área: KM² ");
            scanf("%f", &area);
            
            printf("PIB: ");
            scanf("%f", &PIB);

            printf("Pontos Turísticos: ");
            scanf("%i", &pontos_turisticos);

            printf("<><><><><><><><><><><><><><><><><>\n");


            printf(">>>>Dados cadastrados com sucesso !! Carta: [%c0%i]<<<<\n", estado, cidade);
            printf(">População: %i\n", populacao);
            printf(">Área: KM² %f\n", area);
            printf(">PIB: %f\n", PIB);
            printf(">Pontos Turísticos: %i\n", pontos_turisticos);


        }

    }


}