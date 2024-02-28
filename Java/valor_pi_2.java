import java.util.Scanner;

public class valor_pi_2 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.println("Insira um número inteiro para repetir o processo de aproximação de pi:");
        int quantify_for_loops_approximation_pi = scanner.nextInt();

        float approximation_for_pi = 0.0f;
        int denominator_for_approximation_pi = 1;

        for (int i = 1; i <= quantify_for_loops_approximation_pi; i++) {
            if (i % 2 == 0) {
                approximation_for_pi -= 1.0 / Math.pow(denominator_for_approximation_pi, 3);
            } else {
                approximation_for_pi += 1.0 / Math.pow(denominator_for_approximation_pi, 3);
            }

            denominator_for_approximation_pi += 2;
        }

        System.out.printf("Para %d repetição(ões), tem a aproximação de pi equivalente à %.5f%n",
                quantify_for_loops_approximation_pi, Math.cbrt(32 * approximation_for_pi));

        scanner.close();

    }
}
