#include <stdio.h> 
#include <conio.h>
#include <stdlib.h>
//deklarasi fungsi
float hitungsegitiga(int alas, int tinggi);
int hitungpersegipanjang(int panjang, int lebar);
float hitunglingkaran(int jari2);
//deklarasi variable
int pilih, alas, tinggi, panjang, lebar, jari2;
//fungsi main
main()
{   system("cls");
    printf("1. Segitiga\n2. Persegi panjang\n3. Lingkaran");
    printf("\nBidang yang akan dihitung : "); scanf("%d",&pilih);
    if(pilih==1){
        printf("Panjang alas : "); scanf("%d",&alas);
        printf("Tinggi       : "); scanf("%d",&tinggi);
        printf("Luas segitiga = %.2f",hitungsegitiga(alas, tinggi));
    }else if(pilih==2){
        printf("Panjang : "); scanf("%d",&panjang);
        printf("Lebar   : "); scanf("%d",&lebar);
        printf("Luas persegi panjang = %d",hitungpersegipanjang(panjang, lebar));
    }else if(pilih==3){
        printf("Jari-jari : "); scanf("%d",&jari2);
        printf("Luas Lingkaran = %.2f",hitunglingkaran(jari2));
    }else{
        printf("Masukan input yang sesuai.");
    }
    getch();
    return 0;
}
//fungsi buatan
float hitungsegitiga(int a, int t){
    return(0.5*a*t);
}

int hitungpersegipanjang(int p, int l){
    return(p*l);
}

float hitunglingkaran(int j){
    return(3.14*j);
}
