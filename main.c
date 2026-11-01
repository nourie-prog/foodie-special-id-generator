#include <stdio.h>

int main() {
    char nama[50], makanan[50];
    char id[100];
    int angka, hasil;

    printf("Masukkan nama:");
    scanf("%49s", nama);

    printf("Masukkan makanan favorit:");
    scanf("%49s", makanan);

    printf("Masukkan angka favorit:");
    scanf("%d", &angka);

    hasil = angka * 2 + 10;

    sprintf(id, "%s%s%d", nama, makanan, hasil);

    printf("\n--------------------------------\n");
    printf("ID   : %s\n", id);
    printf("Name : %s\n", nama);
    printf("Favorite Food : %s\n", makanan);
    printf("--------------------------------\n");

    return 0;
}
