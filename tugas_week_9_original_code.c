//Modifikasilah kode program dibawah ini!
#include <stdio.h>
 
main()
{
  int i,j,n;
  char pilih, menu;  
  system ("cls");
  pilih='Y';
  while (pilih =='Y')
  {
    system ("cls");
    printf("MENU PILIHAN \n");
    printf("1. Makanan \n");
    printf("2. Minuman \n");
    printf("3. Sayur \n");
    printf("4. Exit \n");
    printf("Pilihan :");scanf("%d",&i);
 
    switch (i)
    {
    case 1 :
        menu='Y';
        while (menu=='Y')
        {
            /* code */
            system ("cls");
            printf("1. Bakso  \n");
            printf("2. Soto \n");
            printf("3. Sate \n");
            printf("4. Selesai \n");
            printf("-------------------\n");
            printf("Pilihan :");scanf("%d",&j);
            if (j < 4 )
            {
                /* code */
                printf("jumlah porsi :");scanf("%d",&n);
            }
            if (j >= 4) menu='T';
        }
 
        break;
 
    case 4:
        pilih='T';
 
 
    default:
        break;
    }
 
  }
  system ("pause");
}
