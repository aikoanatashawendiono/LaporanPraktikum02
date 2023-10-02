#include <stdio.h>

int main(){

    int A, B;
    A = 400000;
    B = 350000;
    float diskon_a = A * 13 / 100;
    float diskon_b = B * 21 / 100;
    float sepatuA = A - diskon_a;
    float sepatuB = B - diskon_b;

    printf("Harga sepatu A adalah %d\n", A);
    printf("Harga sepatu B adalah %d\n", B);
    printf("Sepatu A mendapat diskon 13%% sehingga harganya menjadi %.0f\n", sepatuA);
    printf("Sepatu B mendapat diskon 21%% sehingga harganya menjadi %.0f\n", sepatuB);
    return 0;
}