#include <stdio.h>

int main(){
     int a, b, c;
    a = 4;
    b = 8;
    c = 3; 
    float adalah = a * b;
    float adalah_2 = adalah / c;

    printf("Variabel x bernilai %d \n", a);
    printf("Variabel x bernilai %d \n", b);
    printf("Variabel x bernilai %d \n", c);
    printf("Hasil dari a dikali b dibagi c adalah %.6f \n", adalah_2);
    return 0;

}