#include <stdio.h>
#include <stdlib.h>

int main()
{
    int wiek,dni;
    printf("Program przelicza Twoj wiek w latach na ilosc dni\nIle masz lat?\n");
    scanf("%d",&wiek);
    dni=wiek*365;
    printf("Czyli masz %d dni",dni);

    return 0;
}
