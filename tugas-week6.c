// Tugas Memodifikasi Kode Program Mata Kuliah Pemrograman Dasar Week 9

#include <stdio.h>
 
int main() {
    int i, j, n;
    int totalMakanan = 0, totalMinuman = 0, totalSayur = 0;
    int totalHarga = 0;
    char pilih = 'Y', menu;
    char makanan[5][20] = {"", "", "", "", ""};
    char minuman[5][20] = {"", "", "", "", ""};
    char sayur[5][20] = {"", "", "", "", ""};
 
    while (pilih == 'Y') {
        printf("\n========================\n");
        printf("SELAMAT DATANG DI KANTIN\n");
        printf("========================\n\n");
        printf("MENU PILIHAN: \n");
        printf("1. Makanan \n");
        printf("2. Minuman \n");
        printf("3. Sayur \n");
        printf("4. Exit \n");
        printf("\nPilihan Anda: ");
        scanf("%d", &i);
 
        switch (i) {
            case 1:
                menu = 'Y';
                while (menu == 'Y') {
                    printf("\nMENU MAKANAN: \n");
                    printf("1. Bakso (Rp 15000)  \n");
                    printf("2. Soto (Rp 12000)\n");
                    printf("3. Sate (Rp 20000)\n");
                    printf("4. Ayam Geprek (Rp 18000)\n");
                    printf("5. Selesai \n");
                    printf("\nPilihan Anda: ");
                    scanf("%d", &j);
                    if (j < 5) {
                        printf("Jumlah porsi: ");
                        scanf("%d", &n);
                        totalMakanan += n;
                        if (j == 1) {
                            totalHarga += 15000 * n;
                            strcpy(makanan[j-1], "Bakso");
                        }
                        else if (j == 2) {
                            totalHarga += 12000 * n;
                            strcpy(makanan[j-1], "Soto");
                        }
                        else if (j == 3) {
                            totalHarga += 20000 * n;
                            strcpy(makanan[j-1], "Sate");
                        }
                        else if (j == 4) {
                            totalHarga += 18000 * n;
                            strcpy(makanan[j-1], "Ayam Geprek");
                        }
                    }
                    if (j >= 5) {
                        menu = 'N';
                        printf("\nTerima kasih atas pesanan makanannya!\n");
                    }
                }
                break;
            case 2:
                menu = 'Y';
                while (menu == 'Y') {
                    printf("\nMENU MINUMAN: \n");
                    printf("1. Teh (Rp 5000)  \n");
                    printf("2. Kopi (Rp 7000)\n");
                    printf("3. Jus (Rp 8000)\n");
                    printf("4. Selesai \n");
                    printf("\nPilihan Anda: ");
                    scanf("%d", &j);
                    if (j < 4) {
                        printf("Jumlah gelas: ");
                        scanf("%d", &n);
                        totalMinuman += n;
                        if (j == 1) {
                            totalHarga += 5000 * n;
                            strcpy(minuman[j-1], "Teh");
                        }
                        else if (j == 2) {
                            totalHarga += 7000 * n;
                            strcpy(minuman[j-1], "Kopi");
                        }
                        else if (j == 3) {
                            totalHarga += 8000 * n;
                            strcpy(minuman[j-1], "Jus");
                        }
                    }
                    if (j >= 4) {
                        menu = 'N';
                        printf("\nTerima kasih atas pesanan minumannya!\n");
                    }
                }
                break;
            case 3:
                menu = 'Y';
                while (menu == 'Y') {
                    printf("\nMENU SAYUR: \n");
                    printf("1. Bayam (Rp 10000)  \n");
                    printf("2. Lodeh (Rp 12000)\n");
                    printf("3. Sup (Rp 15000)\n");
                    printf("4. Selesai \n");
                    printf("\nPilihan Anda: ");
                    scanf("%d", &j);
                    if (j < 4) {
                        printf("Jumlah porsi: ");
                        scanf("%d", &n);
                        totalSayur += n;
                        if (j == 1) {
                            totalHarga += 10000 * n;
                            strcpy(sayur[j-1], "Bayam");
                        }
                        else if (j == 2) {
                            totalHarga += 12000 * n;
                            strcpy(sayur[j-1], "Lodeh");
                        }
                        else if (j == 3) {
                            totalHarga += 15000 * n;
                            strcpy(sayur[j-1], "Sup");
                        }
                    }
                    if (j >= 4) {
                        menu = 'N';
                        printf("\nTerima kasih atas pesanan sayurnya!\n");
                    }
                }
                break;
            case 4:
                pilih = 'N';
                printf("\n========================\n");
                printf("NOTA PESANAN ANDA:\n");
                printf("Makanan yang dipesan: \n");
                for (i = 0; i < 5; i++) {
                    if (strcmp(makanan[i], "") != 0) {
                        printf("- %s\n", makanan[i]);
                    }
                }
                printf("Total porsi makanan: %d\n", totalMakanan);
                printf("Minuman yang dipesan: \n");
                for (i = 0; i < 5; i++) {
                    if (strcmp(minuman[i], "") != 0) {
                        printf("- %s\n", minuman[i]);
                    }
                }
                printf("Total gelas minuman: %d\n", totalMinuman);
                printf("Sayur yang dipesan: \n");
                for (i = 0; i < 5; i++) {
                    if (strcmp(sayur[i], "") != 0) {
                        printf("- %s\n", sayur[i]);
                    }
                }
                printf("Total porsi sayur: %d\n", totalSayur);
                printf("Total harga: Rp %d\n", totalHarga);
                printf("========================\n");
                printf("Terima kasih telah berkunjung ke kantin kami. Sampai jumpa lagi!\n");
                break;
            default:
                printf("\nPilihan tidak valid. Silakan coba lagi.\n");
                break;
        }
    }
 
    return 0;
}
