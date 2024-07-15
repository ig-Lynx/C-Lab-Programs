#include<stdio.h>

int main() {
    int i,j,n,temp,a[20];
    printf("Enter the number of elements : \n");
    scanf("%d", &n);

    printf("Enter the elements : \n");
    for(i=0;i<n;i++){
        scanf("%d", &a[i]);
    }

    // bubble sort logic
    for(i=0;i<n;i++){
        for(j=0;j<(n-i)-1;j++){
            if(a[j] > a[j+1]){
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }

    printf("The sorted array is  : \n");
    for(i=0;i<n;i++){
        printf("%d \t ", a[i]);
    }
    return 0;
}