#include <stdio.h>

int main(){
    int n = 7, k = 3;
    int a[7] = {2, 3, 1, 5, 8, 9, 4};
    for(int i = k; i < n - 1; i++){
        a[i] = a[i + 1];
    }
    --n;
    printf("Mang sau khi xoa : ");
    for(int i = 0; i < n; i++){
        printf("%d ", a[i]);
    }
    return 0;
}
