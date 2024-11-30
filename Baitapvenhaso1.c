#include <stdio.h>
#define GIOIHAN 100
int main(){
    int arr[GIOIHAN];
    int currentLength = 0;
    int n, i, addIndex, value;
    printf("Ban hay nhap vao so phan tu ban dau: ");
    scanf("%d", &n);
    if (n > GIOIHAN) {
        printf("So phan tu vuot qua gioi han mang!\n");
        return 1;
    }
    for (i = 0; i < n; i++){
        printf("Ban hay nhap phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    currentLength = n;
    printf("Ban nhap vi tri muon themm (tu 0 den %d): ", currentLength);
    scanf("%d", &addIndex);
    if (addIndex < 0 || addIndex > currentLength){
        printf("Vi tri phan tu khong phu hop!\n");
        return 1;
    }
    printf("Ban hay nhap gia tri phan tu can them: ");
    scanf("%d", &value);
    if (addIndex >= currentLength){
        arr[addIndex] = value;
        currentLength = addIndex + 1;
    } else{
        for (i = currentLength; i > addIndex; i--){
            arr[i] = arr[i - 1];
        }
        arr[addIndex] = value;
        currentLength++;
    }
    printf("Mang thay doi sau khi them phan tu do la:\n");
    for (i = 0; i < currentLength; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}
