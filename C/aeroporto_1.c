#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int number_passengers;
    printf("Insira a quantidade de passageiros:\n");
    scanf("%d", &number_passengers);
    
    int bool_passenger_have_rg;
    printf("Insira '1' caso tenha RG. Caso contrário, insira 'não':\n");
    scanf("%d", &bool_passenger_have_rg);
    
    if (bool_passenger_have_rg != 1) {
        printf("a saída é nessa direção\n");
        exit(EXIT_FAILURE);
    }

    char passenger_date_of_birth_on_rg[11];
    printf("Insira a sua data de nascimento no RG, neste formato: XX/XX/XXXX\n");
    scanf("%10s", passenger_date_of_birth_on_rg);
    
    int bool_user_have_passage;
    printf("Insira '1' caso tenha passagem. Caso contrário, insira 'não'.\n");
    scanf("%d", &bool_user_have_passage);

    if (bool_user_have_passage != 1) {
        printf("a recepção é nessa direção\n");
        exit(EXIT_FAILURE);
    }

    char passenger_date_of_birth_on_passage[11];
    printf("Insira a data de nascimento na passagem, neste formato: XX/XX/XXXX\n");
    scanf("%10s", passenger_date_of_birth_on_passage);

    if (strcmp(passenger_date_of_birth_on_passage, passenger_date_of_birth_on_rg) != 0) {
        printf("190\n");
        exit(EXIT_FAILURE);
    }
    
    char passenger_chair_on_passage[4];
    printf("Insira a poltrona na passagem, neste formato: X00 (X para Letra, 0 para Número).\n");
    scanf("%3s", passenger_chair_on_passage);

    printf("O seu assento é %s. Tenha um ótimo dia.\n", passenger_chair_on_passage);

    return 0;
}
