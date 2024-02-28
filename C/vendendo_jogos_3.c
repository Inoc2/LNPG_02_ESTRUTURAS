#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int quantify_games_catarina_sold;
    printf("Insira o número de jogos vendidos pela Catarina:\n");
    scanf("%d", &quantify_games_catarina_sold);

    float price_game = 19.90;
    float catarinas_base_payment = ((price_game/2) * quantify_games_catarina_sold);
    
    int quantify_bonus_catarinas = floor(quantify_games_catarina_sold / 15);
    float catarinas_bonus_payment = ((price_game * 15) * 0.08) * quantify_bonus_catarinas;

    printf("Valor arrecadado = %2.f\nBonus = %2.f\nPagamento Catarina = %2.f",\
    price_game * quantify_games_catarina_sold,\
    catarinas_bonus_payment,\
    catarinas_base_payment + catarinas_bonus_payment);

    return 0;
}
