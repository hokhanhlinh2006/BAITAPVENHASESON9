#include <stdio.h>
#define Phantulonnhat 100
int main(){
    int arr[Phantulonnhat];
    int n = 0;
    int Chon, i, Giatri, Chiso;
    while (1){
        printf("\nMENU\n");
        printf("1. Moi ban nhap phan tu\n");
        printf("2. Hien thi trong mang\n");
        printf("3. Them phan tu\n");
        printf("4. Sua phan tu\n");
        printf("5. Xoa phan tu\n");
        printf("6. Thoat\n");
        printf("Lua chon cua ban la: ");
        scanf("%d", &Chon);
        switch (Chon) {
            case 1:
                printf("Ban hay nhap so phan tu ban dau: ");
                scanf("%d", &n);
                for (i = 0; i < n; i++) {
                    printf("Nhap vao phan tu thu %d: ", i + 1);
                    scanf("%d", &arr[i]);
                }
                break;
            case 2:
                if (n == 0) {
                    printf("Mangg rong gia tri.\n");
                } else {
                    printf("Mang hien tai la: ");
                    for (i = 0; i < n; i++) {
                        printf("%d ", arr[i]);
                    }
                    printf("\n");
                }
                break;
            case 3:
                if (n < Phantulonnhat) {
                    printf("Moi ban nhap gia tri can them: ");
                    scanf("%d", &Giatri);
                    printf("Nhap vi tri ban muon them (0 den %d): ", n);
                    scanf("%d", &Chiso);
                    for (i = n; i > Chiso; i--) {
                        arr[i] = arr[i - 1];
                    }
                    arr[Chiso] = Giatri;
                    n++;
                } else {
                    printf("Khong the them.\n");
                }
                break;
            case 4:
                printf("Ban muon sua (0 den %d): ", n - 1);
                scanf("%d", &Chiso);
                if (Chiso >= 0 && Chiso < n) {
                    printf("Nhap vao gia tri moi: ");
                    scanf("%d", &Giatri);
                    arr[Chiso] = Giatri;
                } else {
                    printf("Vi tri ban nhap khogn hop le.\n");
                }
                break;
            case 5:
                printf("Nhap vi tri ban muon xoa (0 den %d): ", n - 1);
                scanf("%d", &Chiso);
                if (Chiso >= 0 && Chiso < n) {
                    for (i = Chiso; i < n - 1; i++) {
                        arr[i] = arr[i + 1];
                    }
                    n--;
                } else {
                    printf("Vi tri khong hop le.\n");
                }
                break;
            case 6:
                printf("Thoat chuong trinh.\n");
                return 0;
            default:
                printf("Vui long thu lai.\n");
        }
    }
    return 0;
}
