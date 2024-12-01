#include <stdio.h>
int main() {
    int arr[100];
    int n, i, xoaphantu;
    printf("Moi ban nhap vao so phan tu cua mang toi da la 100: ");
    scanf("%d", &n);
    printf("Hay nhap vao cac phan tu cua mang:\n");
    for (i = 0; i < n; i++) {
        printf("Phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("Ban hay nhap vi tri ma ban muon xoa %d): ", n - 1);
    scanf("%d", &xoaphantu);
    if (xoaphantu < 0 || xoaphantu >= n) {
        printf("Vi tri ban nhap khong hop le!\n");
        return 1;
    }
    for (i = xoaphantu; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    n--;
    printf("Mang phan tu sau khi xoa:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
