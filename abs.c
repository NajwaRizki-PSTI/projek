#include <stdio.h>
#include <stdlib.h>

int main()
{
    //variable
    int a, b, c;
    int MaiorAB;

    //input
    scanf("%d %d %d", &a, &b, &c);

    //proses
    MaiorAB = (a + b + abs (a - b))/ 2;
    MaiorAB = (MaiorAB + c + abs (MaiorAB - c))/2;

    //output
    printf("%d eh o maior\n", MaiorAB);

    return 0;
}