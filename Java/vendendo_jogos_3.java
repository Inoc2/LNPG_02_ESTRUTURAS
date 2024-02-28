import java.util.Scanner;

public class vendendo_jogos_3 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.println("Insira o número de jogos vendidos pela Catarina:");
        int quantify_games_catarina_sold = scanner.nextInt();

        float price_game = 19.90f;
        float catarinas_base_payment = ((price_game / 2) * quantify_games_catarina_sold);

        int quantify_bonus_catarinas = (int) Math.floor(quantify_games_catarina_sold / 15);
        float catarinas_bonus_payment = ((price_game * 15) * 0.08f) * quantify_bonus_catarinas;

        System.out.printf("Valor arrecadado = %.2f%nBonus = %.2f%nPagamento Catarina = %.2f%n",
            price_game * quantify_games_catarina_sold,
            catarinas_bonus_payment,
            catarinas_base_payment + catarinas_bonus_payment);

        scanner.close();
    }
}
