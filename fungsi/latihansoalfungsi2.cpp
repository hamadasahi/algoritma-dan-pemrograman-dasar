#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#define phi 3.14
//program menghitung luas 3 bidang geometri
int pilihbg; char ulang;
void persegipanjang(void);
void segitiga(void);
void lingkaran(void);
main()
{
    system("cls");
    printf("1. Persegi panjang\n2. Segi Tiga\n3. Lingkaran\n\n");
    do{
        do{
            printf("Bidang geometri yang akan dihitung [1/2/3]: "); scanf("%d",&pilihbg); 
        }while(pilihbg<1 || pilihbg>3);
        switch(pilihbg){
            case 1 : persegipanjang(); break;
            case 2 : segitiga(); break;
            case 3 : lingkaran(); break;
        }
        printf("\nHitung bidang geometri lain [Y/T] ? "); scanf("%s",&ulang);
        printf("\n");
    }while(ulang=='y' || ulang=='Y');
    getch();
}

void persegipanjang(void){
    int p,l,luas;
    printf("Panjang : "); scanf("%d",&p);
    printf("Lebar   : "); scanf("%d",&l);
    printf("Luas persegi panjang = %d",p*l);
}

void segitiga(void){
    int a,t,luas;
    printf("Alas   : "); scanf("%d",&a);
    printf("Tinggi : "); scanf("%d",&t);
    printf("Luas segi tiga = %d",(a*t)/2);
}

void lingkaran(void){
    int r; float luas;
    printf("Jari-jari: "); scanf("%d",&r);
    printf("Luas segi tiga = %.2f",phi * r*r);
}