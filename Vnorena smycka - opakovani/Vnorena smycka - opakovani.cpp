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
    //Vytvoøení tzv.naklonìné roviny
    for (int i = 1;i <= 10; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%3d ", j);
        }
        printf("\n");
    }
    printf("\n");

    //Opaèná naklonìná rovina
    for (int i = 10; i >= 0; i--) {
        for (int j = i; j > 0; j--) {
            printf("%3d ", j);
        }
        printf("\n");
    }

    //Diamant
    for (int i = 1; i <= 9; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%3d ", j);
        }
        printf("\n");

    }
    for (int i = 8; i >= 0; i--) {
        for (int j = 1; j <= i; j++) {
            printf("%3d ", j);
        }
        printf("\n");
    }
}