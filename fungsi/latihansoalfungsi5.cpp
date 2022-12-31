#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
//program jumlah bilangan
int bil1,bil2;
int fungsijumlah(int a, int b);
main(){
    system("cls");
    do{
        printf("Bilangan pertama : "); scanf("%d",&bil1);
        printf("Bilangan kedua   : "); scanf("%d",&bil2);
    }while(bil1<0 || bil2<0 || bil1>bil2);
    printf("Jumlah bilangan %d-%d = %d",bil1,bil2,fungsijumlah(bil1,bil2));
    getch();
}

int fungsijumlah(int a, int b){
    if(a==b){
        return(b);
    }else{
        return(a+fungsijumlah(a+1,b));
    }
}
