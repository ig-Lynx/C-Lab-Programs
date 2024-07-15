#include <stdio.h>

// Function prototype
int linearSearch(int arr[],int size , int key);

int main() {
    // Example array and target value
    int arr[50] ;
    int n,i;
    int key ;
    printf("Enter the number of elements : \n");
    scanf("%d",&n);


    printf("Enter the vlaue of arr : \n");
    for(i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to be searched :\n ");
    scanf("%d",&key);

    // Perform linear search
    int result = linearSearch(arr,n,key);

    // Output result
    if (result != -1) {
        printf("Element found at location %d\n", result+1);
    } else {
        printf("Element not found in the array\n");
    }

    return 0;
}

// Function to perform linear search
int linearSearch(int arr[],int size , int key) {

    for (int i = 0; i < size; i++) {
        if (arr[i] == key) {
            return i;  // Return the index of the found element
        }
    }
    return -1;  // Return -1 if the element is not found
}

