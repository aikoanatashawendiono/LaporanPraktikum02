#include <stdio.h>

int main(){

    float a = 5;
    float t = 12;
    float A = 12;
    float B = 13;
    float C = 5;
    float keliling =  A + B + C;
    float luas = 0.5* (a * t);

    printf("Diketahui : \n");
    printf("Alas = %.0f cm\n", a);
    printf("Tinggi = %.0f cm\n", t);
    printf("\n\n");
    printf("Jawab : \n");
    printf("Sisi A = %.0f cm\n", A);
    printf("Sisi B = %.0f cm\n", B);
    printf("Sisi C = %.0f cm\n", C);
    printf("Keliling = %.0f cm\n", keliling);
    printf("Luas = %.0f cm\n", luas);
    return 0;
}