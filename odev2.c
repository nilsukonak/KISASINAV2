#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>

// Binary Search (�kili Arama) fonksiyonu
int binarySearch(int arr[], int low, int high, int key) {
    while (low <= high) {
        int mid = low + (high - low) / 2; // Dizinin orta eleman�n�n indisini bulma

        if (arr[mid] == key) // Anahtar de�eri bulundu
            return mid;
        else if (arr[mid] < key) // Anahtar de�eri, ortadaki elemandan b�y�k, sa� tarafa bak�l�r
            low = mid + 1;
        else // Anahtar de�eri, ortadaki elemandan k���k, sol tarafa bak�l�r
            high = mid - 1;
    }

    return -1; // Anahtar de�eri bulunamad�
}

int main() {
    int dizi[] = {4, 8, 3, 84, 47, 76, 9, 24, 68};
    int n = sizeof(dizi) / sizeof(dizi[0]);
    int anahtar = 9; // Aranacak anahtar de�eri

    int sonuc = binarySearch(dizi, 0, n - 1, anahtar);

    if (sonuc == -1)
        printf("Anahtar degeri bulunamadi.\n");
    else
        printf("Anahtar degeri, dizinin %d. indisinde bulundu.\n", sonuc);

    return 0;
}
