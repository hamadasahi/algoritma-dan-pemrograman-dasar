#include <stdio.h>
#include <conio.h>

main()
{
 int pg,b,bayar;

 clrscr();
 printf("Menghitung Harga Beli Pisang Goreng dan Bakwan");
 printf("\n=================================================");
 printf("\nMasukkan jumlah pisang goreng : ");
 scanf("%d",&pg);
 printf("Masukkan jumlah bakwan : ");
 scanf("%d",&b);

 bayar=(pg*1000)+(b*1500);

 printf("Uang yang harus dibayar adalah : %d",bayar);

 getch();
 return 0;
}