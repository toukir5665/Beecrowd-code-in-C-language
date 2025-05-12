#include <stdio.h>

int main() {
    int alCount = 0;
    int gasCount = 0;
    int disCount = 0;
    int n;

    for (;;) {
        scanf("%d", &n);

        if (n == 1) {
            alCount++;
        } else if (n == 2) {
            gasCount++;
        } else if (n == 3) {
            disCount++;
        } else if (n == 4) {
            break;
        }
    }

    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n", alCount);
    printf("Gasolina: %d\n", gasCount);
    printf("Diesel: %d\n", disCount);

    return 0;
}

