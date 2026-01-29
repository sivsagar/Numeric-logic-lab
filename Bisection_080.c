/*FInd root of eqn 4x^3 - 6x^2 + 7x - 2.3 = 0
correct upto three decimal places with 10 iterration*/
#include <stdio.h>
#include <math.h>

double f(double x)
{
    return 4*x*x*x - 6*x*x + 7*x - 2.3;
}

int main()
{
    double a = 0.0, b = 1.0, c;
    int i;

    printf("Iteration\t a\t\t b\t\t c\t\t f(c)\n");

    for(i = 1; i <= 10; i++)
    {
        c = (a + b) / 2.0;

        printf("%d\t\t %.6f\t %.6f\t %.6f\t %.6f\n",
               i, a, b, c, f(c));

        if(f(a) * f(c) < 0)
            b = c;
        else
            a = c;
    }

    printf("\nApproximate root 10 iterations = %.3f\n", c);

    return 0;
}

/* OutPut
Iteration        a               b               c               f(c)
1                0.000000        1.000000        0.500000        0.200000
2                0.000000        0.500000        0.250000        -0.862500
3                0.250000        0.500000        0.375000        -0.307812
4                0.375000        0.500000        0.437500        -0.050977
5                0.437500        0.500000        0.468750        0.074878
6                0.437500        0.468750        0.453125        0.012088
7                0.437500        0.453125        0.445313        -0.019404
8                0.445313        0.453125        0.449219        -0.003649
9                0.449219        0.453125        0.451172        0.004222
10               0.449219        0.451172        0.450195        0.000287

Approximate root 10 iterations = 0.450*/
