#include<stdio.h>
#include<stdlib.h>

int main() {
    int a[50],i,n,low,key,mid,high;
    printf(" Enter the count of total number of elements to an array :");
    scanf("%d",&n);
    printf(" Enter the sorted list :");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter the elements to be searched :");
    scanf("%d",&key);
    low = 0;
    high = n-1;
    while(low<=high){
        mid = (low+high)/2;
        if(key == a[mid]){
            printf("Key found at %d location",mid+1);
            exit(0);
        }
        if(key>a[mid]){
            low = mid+1;
        }else {
            high = mid - 1;
        }
    }
    printf("Element not found  ");

    return 0;
}
