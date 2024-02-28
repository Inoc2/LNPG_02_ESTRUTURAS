#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int int_number_ipcs_entered = 0;

float average_ipca = 0;
float hightst_ipca = 0;
char date_from_hightst_ipca[10] = "";
float lowest_ipca = 10000;
char date_from_lowest_ipca[10] = "";

int main() {
    while (1) {
        printf("Quantidade de entradas válidas: %d.\n", int_number_ipcs_entered);
        char user_input[20];
        printf("Insira o mês/ano (ex.: MM/AAAA) e o IPCA (ex. XX.XX). Separe-os com espaço.\nInsira * para cancelar.\nExemplo: 01/2000 05.00\n");
        
        fgets(user_input, 20, stdin);
        user_input[strcspn(user_input, "\n")] = 0;
        char user_input_date[10];
        char user_input_ipca[10];  
        sscanf(user_input, "%s %s", user_input_date, user_input_ipca);
        
        if (user_input_date[0] == '*') {
            break;
        }
        if (strlen(user_input_ipca) != 5) {
            printf("Insira apenas 1 espaço separando mês e ano do IPCA.\n");
            continue;
        }
        if ((strlen(user_input_date) != 7) || (strlen(user_input_ipca) != 5)) {
            printf("Erro. Exemplo de estrutura correta: 01/2000 05.00\n");
            continue;
        }
        
        float user_input_ipca_float;
        sscanf(user_input_ipca, "%f", &user_input_ipca_float);
        int_number_ipcs_entered++;
        
        if (user_input_ipca_float > hightst_ipca) {
            hightst_ipca = user_input_ipca_float;
            strcpy(date_from_hightst_ipca, user_input_date);
        }
        if (user_input_ipca_float < lowest_ipca) {
            lowest_ipca = user_input_ipca_float;
            strcpy(date_from_lowest_ipca, user_input_date);
        }
        
        average_ipca += user_input_ipca_float;
    }
    
    char average_ipca_str[10];
    sprintf(average_ipca_str, "%.2f", average_ipca / int_number_ipcs_entered);
    printf("Menor IPCA = %.2f (%s).\n", lowest_ipca, date_from_lowest_ipca);
    printf("Maior IPCA = %.2f (%s).\n", hightst_ipca, date_from_hightst_ipca);
    printf("Média dos IPCA inseridos = %s.\n", average_ipca_str);

    return 0;
}

