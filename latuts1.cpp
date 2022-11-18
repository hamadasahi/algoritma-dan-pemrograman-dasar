#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
main()
{
    int panjang,lebar,luas,keliling;

    system("cls");
    printf("Menghitung panjang dan lebar persegi panjang");
    printf("\n\npanjang persegi panjang : ");
    scanf("%d",&panjang);
    printf("lebar persegi panjang : ");
    scanf("%d",&lebar);

    luas = panjang*lebar;
    keliling = 2*panjang + 2*lebar;

    printf("\nLuas persegi panjang = %d",luas);
    printf("\nKeliling persegi panjang = %d",keliling);

    getch(); 
    return 0;
}
