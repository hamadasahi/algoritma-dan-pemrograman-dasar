#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
main()
{
    int jmasuk, jkeluar, lama, bayar, waktu;

    system("cls");

    printf("Jam masuk : "); scanf("%d",&jmasuk);
    printf("Jam keluar : "); scanf("%d",&jkeluar);

    if(jkeluar >= jmasuk){
        lama = jkeluar - jmasuk;
    }else{
        lama = (12-jmasuk) + jkeluar;
    }

    if(lama <= 2){
        bayar = lama * 2000;
    }else{
        waktu = lama - 2;
        bayar = (2*2000) + waktu*500;
    }

    printf("Biaya parkir = %d",bayar);

}