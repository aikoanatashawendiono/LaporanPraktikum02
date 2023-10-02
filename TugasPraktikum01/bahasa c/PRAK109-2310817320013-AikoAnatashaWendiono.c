#include <stdio.h>
#include <math.h>

int main(){
    
    int z, h, total;

    z = 958730;
    h = 5;
    total = z / h;

    printf("Jumlah pasukan yang dibawa Yu Zhong = %d\n", z);
    printf("Jumlah pahlawan = %d\n", h);
    printf("Jumlah pasukan yang harus dikalahkan setiap pahlawan adalah %d pasukan", total);
    return 0;
}