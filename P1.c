#include<stdio.h>
int main() {
    int arr[5] ;
    int i;
    printf("Array elements are:\n");
    for(i = 0; i < 5; i++) {
        scanf("%d\n",&arr[i]);
    }
    printf("Array elements that are negative:\n");
    for(i = 0; i < 5; i++) {
        if(arr[i] < 0) {
            printf("%d\n", arr[i]);
        }
    }



    return 0;
}