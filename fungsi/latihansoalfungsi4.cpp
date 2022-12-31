#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
//program rental mobil
int jenis,hari; char ulang;
void fungsimenu(void);
int hitungharga(int j, int h);
main(){
    system("cls");
    fungsimenu();
    do{
        printf("\n");
        do{
            printf("Jenis Mobil yang dipilih [1,2,3]: "); scanf("%d",&jenis);
        }while(jenis<1 || jenis>3);
        printf("Hari menyewa mobil: "); scanf("%d",&hari);
        printf("Harga yang harus dibayar = Rp.%d",hitungharga(jenis, hari));
        printf("\nHitung lagi [Y/T] ? "); scanf("%s",&ulang);
    }while(ulang=='Y' || ulang=='y');
    getch();
}

void fungsimenu(void){
    printf("Jenis      Harga sewa / hari");
    printf("\nCity Car    Rp.300.000,00");
    printf("\nCMPV        Rp.400.000,00");
    printf("\nSUV         Rp.500.000,00");
}

int hitungharga(int j, int h){
    int harga;
    switch (j)
    {
        case 1 : harga = 300000; break;
        case 2 : harga = 400000; break;
        case 3 : harga = 500000; break;
    }
    return(harga*h);
}
