#include <stdio.h>

int main(){

    int p, l, t, k, h, biaya;
    p = 4;
    l = 5;
    t = 7;
    k = p + l + t;
    h = 85000;
    biaya = k * h;

    printf("Diketahui : \n");
    printf("Panjang sisi segitiga berturut-turut adalah %d, ", p);
    printf("%d, ", l);
    printf("%d\n", t);
    printf("Keliling Tanah Pak Dengklek adalah %d\n", k);
    printf("Harga tanah Per Meter adalah %d\n", h);
    printf("Jawaban :\n");
    printf("Biaya yang diperlukan Pak Dengklek adalah : Rp %d", biaya);
}