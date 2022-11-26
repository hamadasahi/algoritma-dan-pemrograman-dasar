#include <stdio.h>
#include <conio.h>
main()
{
 int jmhs,i,brs=6,nujian,jnilai=0,max=-999; float rata2;
 char nim[10], nama[30];
 clrscr();

 printf("Jumlah Mahasiswa : "); scanf("%d",&jmhs);
 printf("Daftar Nilai Ujian\n");
 printf("Mata Kuliah : Pemrograman Dasar\n\n");
 printf("N0   NIM      NAMA MAHASISWA      NILAI\n");
 printf("---------------------------------------\n");
 for(i=1;i<=jmhs;i++)
 {
  brs++;
  gotoxy(1,brs); printf("%d",i);
  gotoxy(6,brs); scanf("%s",&nim);
  gotoxy(15,brs); scanf("%s",&nama);
  gotoxy(35,brs); scanf("%d",&nujian);

  jnilai += nujian;
  if(nujian>max)
  {
   max=nujian;
  }
 }
 rata2 = (float)jnilai / jmhs;
 printf("---------------------------------------\n");
 printf("\nJumlah Nilai = %d\n",jnilai);
 printf("Nilai Rata-rata = %.2f\n",rata2);
 printf("Nilai terbesar = %d",max);

 getch();
 return 0;
}