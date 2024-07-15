#include<stdio.h>
#include<stdlib.h>

int main() {
    int m,n,p,q,i,j,k,sum =0;
    int first[10][10], second[10][10],multiplication[10][10];
    printf("Enter the number of rows and columns of the first matrix :");
    scanf("%d %d", &m,&n);
    printf("Enter the elements in the first matrix \n");

    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d", &first[i][j]);
        }
    }

    // second matrix elements
    printf("Enter the number of rows and columns  in the second matrix :");
    scanf(" %d %d", &p,&q);

    // checking the condition for multiplication matrix
    if(n != p){
        printf("This Matrix multiplication is not possible !! ");
    }
    else {

        // Taking the elements for the second matrix
        printf("Enter the elements of the second matrix :");
        for(i=0;i<p;i++){
            for(j=0;j<q;j++){
                scanf("%d",&second[i][j]);
            }
        }

        // Multiplication process
        for(i=0;i<m;i++){
            for(j=0;j<q;j++){
                multiplication[i][j]=0;
                for(k=0;k<p;k++){
                    multiplication[i][j]= multiplication[i][j] + (first[i][k]*second[k][j]);
                }
            }
        }

        //printing the elements of the multiplication or product matrix
        printf("Product matrix is : \n");
        for(i=0;i<m;i++){
            for(j=0;j<q;j++){
                printf("%d \t",multiplication[i][j]);
            }
            printf("\n");
        }
    }

    return 0;
}