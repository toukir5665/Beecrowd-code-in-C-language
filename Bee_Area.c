#include <stdio.h>
int main()
{
    double A, B, C, triangle, radious, trapezium, square, rectangle;
    scanf("%lf %lf %lf", &A, &B, &C);

    triangle=0.5*A*C;
    radious=3.14159*C*C;
    trapezium=0.5*(A+B)*C;
    square=B*B;
    rectangle=A*B;

    printf("TRIANGULO: %.3lf\n", triangle);
    printf("CIRCULO: %.3lf\n", radious);
    printf("TRAPEZIO: %.3lf\n", trapezium);
    printf("QUADRADO: %.3lf\n", square);
    printf("RETANGULO: %.3lf\n", rectangle);

    return 0;
}
