//Tugas Pemrograman Dasar Week 6

//Nama Kelompok:
//-	Erika Bagus Dwi Anggara  (5231811020)
//-	Lathif Ramadhan (5231811022)

//1.	Modifikasi 2 program menggunakan If….. Else

//a.	Kode Atas 
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
 
int main()
{
  float nilai;
  char nama[100];
  char* ket =  // Menginisialisasi dengan "tidak lulus" sebagai nilai default
 
  system("cls");
 
  printf("Nama: ");
  scanf("%s", nama);
 
  printf("Nilai: ");
  scanf("%f", &nilai);
 
if (nilai >= 90) {
        ket = "Selamat anda lulus dengan nilai A \n";
    } else if (nilai >= 80) {
        ket = "Selamat anda lulus dengan nilai B \n";
    } else if (nilai >= 70) {
        ket = "Selamat anda lulus dengan nilai C \n";
    } else {
        ket = "Anda tidak lulus dan mendapat nilai D \n";
    }
 
  printf("hasilnya : %s", ket);
 
  system("pause");
 
 
}
  


//b.	Kode bawah
 
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
main ()
{
float anak, gaji, persentunjangan, persenbeasiswa, tunjangan, beasiswa;
    persentunjangan = 0.2;
    persenbeasiswa = 0.1;
    tunjangan = 0;
    beasiswa = 0;
    system ("cls");
    printf ("Gaji kotor : ");
    scanf("%f7",&gaji);
    printf ("jumlah anak : ");
    scanf("%f7",&anak);
    if (anak > 2)
    {
        persentunjangan = 0.35;
        persenbeasiswa = 0.07;
    }
    else (anak <= 2);
    {
    persentunjangan = 0.20;
    persenbeasiswa = 0.05;
    }
    tunjangan = gaji * persentunjangan;
    beasiswa = gaji * persenbeasiswa;
    gaji = gaji + tunjangan + beasiswa;
    printf ("\nTunjangan diterima : Rp. %6.2f \n",tunjangan);
    printf ("Beasiswa diterima : Rp. %6.2f \n\n",beasiswa);
    printf ("Gaji diterima : Rp. %10.2f \n\n",gaji);
    return 0;
}
 
 


//2.	Buatlah program untuk menentukan bilangan genap atau ganjil dari data inputan !
 
 
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
main ()
{
int angka;
char *ket;
 
printf("masukkan angka :");
scanf("%d", &angka);
if (angka % 2 == 0){
printf("%d adalah genap\n", angka);
} else {
printf("%d adalah ganjil\n", angka);
}
system ("pause");
}

