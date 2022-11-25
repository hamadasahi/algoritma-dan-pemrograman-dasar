#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
main()
{
    int angka;

    system("cls");
    printf("Masukkan sebuah angka : ");
    scanf("%d",&angka);

    if(angka%2==1){
        printf("Angka adalah GANJIL");
    }
    if(angka%2==0){
        printf("Angka adalah GENAP");
    }

    getch();
    return 0;
}