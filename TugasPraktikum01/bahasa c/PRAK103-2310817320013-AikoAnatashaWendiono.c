#include <stdio.h>

int main(){

    int a, b, x, y;

    a = 9;
    b = 6;
    x = 10;
    y = 7;
    
    float hasilab = a + b;
    float hasilx = hasilab * x;
    float hasily = hasilx / y;

    printf("Variabel a bernilai %d\n", a);
    printf("Variabel b bernilai %d\n", b);
    printf("Variabel x bernilai %d\n", x);
    printf("Variabel y bernilai %d\n", y);
    printf("Hasil dari a ditambah b dikali x dan dibagi y adalah %.2f \n", hasily);
    return 0;
}