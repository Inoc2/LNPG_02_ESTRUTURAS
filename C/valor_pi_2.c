#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int quantify_for_loops_approximation_pi;
    printf("Insira um número inteiro para repetir o processo de aproximação de pi:\n");
    scanf("%d", &quantify_for_loops_approximation_pi);

    float approximation_for_pi = 0.0;
    int denominator_for_approximation_pi = 1;

    for (int i = 1; i <= quantify_for_loops_approximation_pi; i++) {
        if (i % 2 == 0) {
            approximation_for_pi -= 1.0 / pow(denominator_for_approximation_pi, 3);
        } else {
            approximation_for_pi += 1.0 / pow(denominator_for_approximation_pi, 3);
        }

        denominator_for_approximation_pi += 2;
    }

    printf("Para %d repetição(ões), tem a aproximação de pi equivalente à %.5f\n", quantify_for_loops_approximation_pi, cbrt(32 * approximation_for_pi));

    return 0;
}
