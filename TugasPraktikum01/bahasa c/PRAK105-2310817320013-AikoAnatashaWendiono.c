#include <stdio.h>

int main(){

    int a, b, x, y, z, s, r;

    a = 9;
    b = 5;
    x = 8;
    y = 8;
    
    z = a % b;
    s = x % y;

    r = z + s;

    printf("Variabel a bernilai %d\n", a);
    printf("Variabel b bernilai %d\n", b);
    printf("Variabel x bernilai %d\n", x);
    printf("Variabel y bernilai %d\n", y);
    printf("Total sisa bagi dari a dibagi b dan x dibagi y adalah %d\n", r);
    return 0;
}