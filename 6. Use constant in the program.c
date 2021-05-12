#include <stdio.h>

int main() {

    const int members=4;

    int chocolates=8;

    printf("This program is written by Mohd Afrid\n");

    printf("Chocolates distributed per person : %d\n", chocolates/members);

    chocolates=12;

    printf("Chocolates distributed per person : %d\n", chocolates/members);

    chocolates=16;

    printf("Chocolates distributed per person : %d\n", chocolates/members);

    return 0;

}
