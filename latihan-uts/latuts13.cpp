#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
main()
{
    int beli,bayar;

    system("cls");

    printf("Masukkan jumlah beli beras (kg) : "); scanf("%d",&beli);
    
    if(beli > 23){
        printf("Bonus 1 liter ice cream chocolate");
    }else{
        printf("Maaf anda tidak dapat bonus");
    }

    bayar=beli*4500;

    printf("\nTotal yang harus dibayar = %d",bayar);

    getch();
    return 0;
}