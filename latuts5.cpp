#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
main()
{
    int masuk,keluar,lama;

    system("cls");
    printf("Menghitung lama bekerja pegawai");
    printf("\n\nJam masuk : ");
    scanf("%d",&masuk);
    printf("Jam keluar : ");
    scanf("%d",&keluar);

    if(masuk>=1 && masuk<=12 && keluar>=1 && keluar<=12)
    {

    }else{
        printf("Tolong masukkan angka yang sesuai.")
    }

    printf("\nLama bekerja = %d",lama);
    
    getch();
    return 0;
}