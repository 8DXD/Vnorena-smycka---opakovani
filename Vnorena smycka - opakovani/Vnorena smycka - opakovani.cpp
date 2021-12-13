#include <stdio.h> <stdlib.h>
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
            printf("%2d ", j);
        }
        printf("\n");

    }
    for (int i = 8; i >= 0; i--) {
        for (int j = 1; j <= i; j++) {
            printf("%2d ", j);
        }
        printf("\n");
    }
    int pole[4];
    pole[0] = 23;
    pole[1] = 6;
    pole[2] = 1268;
    pole[3] = 98;
    for (int i = 0; i < 4; i++) {
        printf("%3d: %3d\n ", i, pole[i]);
    }

    int cisla[7] = { 15, 7, 3 ,8 ,24 ,10, 48 };
    for (int i = 0; i < 7; i++) {
        printf("%3d: %3d\n ", i, cisla[i]);
    }
}