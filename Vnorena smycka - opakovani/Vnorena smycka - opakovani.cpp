#include <stdio.h>
int main()
{
    //Opakování vypisování malé násobilky
    int a = 1;
    int b = 1;
    printf("Mala nasobika:\n");
    while (a <= 10) {
        printf("%3d: ", a);
        for (b = 1; b <= 10; b++) {
            printf("%3d ", b * a);
        }
        printf("\n");
        int b = 1;
        a++;
    }
    int i, j;
    for (i = 1;i <= 50; i++) {
        for (j = 1; j <= i; j++) {
            printf("%3d ", j);
        }
        printf("\n");
    }
}