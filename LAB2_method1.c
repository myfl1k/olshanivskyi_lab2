#include <stdio.h>
#include <math.h>

int main()
{
    int n, counter = 0;   
    double S = 0, P = 3;
    counter += 2;

    double x = (1.0 / 3.0);
    counter += 2;

    double pi = acos(-1.0);
    counter += 2;

    double pi_sq = pi * pi;
    counter += 2;

    printf("Enter number of iteration: ");
    scanf("%d", &n);

    counter += 1; // int i = 1
    for (int i = 1; i <= n; i++)
    {
        counter += 1; //i <= n
        counter += 1; // int j = 1
        for (int j = 1; j <= i; j++)
        {
            counter += 1; //j <= i

            S += (2 * j - 1);
            counter += 4;

            counter +2; // j++ та перехід на наступну ітерацію
        }
        counter += 1; // j > i

        P *= 1 + ((8 * x * x) / ((x * x) - (pi_sq * S)));
        counter += 9;

        S = 0;
        counter += 1;

        counter += 2; // i++ та перехід на наступну ітерацію
    }
    counter += 1; // i > n

    printf("at n = %d, P = %.7f\n", n, P);
    printf("number of operations %d\n\n", counter);
    return 0;

}