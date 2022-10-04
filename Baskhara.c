#include <stdio.h>
#include <math.h>

int main() {

    float x1, x2, a, b, c, delta;

    printf("Digite o valor de A: \n");
    scanf("%f", &a);
    printf("Digite o valor de B: \n");
    scanf("%f", &b);
    printf("Digite o valor de C: \n");
    scanf("%f", &c);

    delta = ((b*b)+(-4*a*c));

    if(delta >= 0){

        x1 = (-b + sqrt(delta)) / (2*a);
        x2 = (-b - sqrt(delta)) / (2*a);

        printf("O resultado da baskhara e: %.3f, %.3f", x1, x2);
    } else {


        printf("A equacao nao tem raizes reais!");
    }

    return 0;
}
