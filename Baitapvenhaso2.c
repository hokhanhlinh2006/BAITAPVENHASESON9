#include <stdio.h>
int main(){
    int arr[100];
    int n, i, giatricu , giatrimoi;
    printf("Moi ban nhap so phan tu cho mang toi da la 100 phan tu: ");
    scanf("%d", &n);
    if (n <= 0 || n > 100) {
        printf("Ban nhap khong hop le!\n");
        return 1;
    }
    printf("Moi ban nhap cac phan tu cua mang:\n");
    for (i = 0; i < n; i++){
        printf("Xuat hien phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("Vi tri ma ban muon sua la (0 den %d): ", n - 1);
    scanf("%d", &giatricu);
    if (giatricu < 0 || giatricu >= n) {
        printf("Vi tri ban nhap khong hop le!\n");
        return 1;
    }
    printf("Ban hay nhap vao gia tri moi: ");
    scanf("%d", &giatrimoi);
    arr[giatricu] = giatrimoi;
    printf("Mang sau khi duoc sua lai la:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
