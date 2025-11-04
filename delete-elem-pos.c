#include <stdio.h>
int main() {
    printf("NAME : Raju K B\nUSN:1SV24CS110\n");
    int arr[5]={1,2,3,4,5};
    int n,i;
    n=5;
    int pos = 2;
    for (i = pos; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    n--;
    for(i=0;i<n;i++)
        printf("arr[%d]=%d\n",i,arr[i]);
    return 0;
}
