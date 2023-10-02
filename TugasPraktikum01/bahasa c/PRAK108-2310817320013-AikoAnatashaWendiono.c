#include <stdio.h>

int main(){

    float t, d, k, phi, r;
    t = 14;
    d = 5;
    k = t / d;
    phi = 3.14;
    r = k / (2 * phi);

    printf("Diketahui : \n");
    printf("Pak Dengklek mengelilingi taman = %.0f putaran\n", d);
    printf("Jarak tempuh Pak Dengklek = %0.f Kilometer\n\n\n", t);
    printf("Jawaban : \n");
    printf("Jari-jari taman yang dikelilingi Pak Dengklek adalah %.2f Kilometer \n", r);
    return 0;
}