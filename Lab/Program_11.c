
#include<stdio.h>
#include<math.h>

int main(){
    float a[10],mean,std,*ptr,sum=0,sumstd=0;
    int n,i;
    printf("Enter the nummber of elements \n");
    scanf("%d",&n);
    printf("Enter the array elements \n");
    for(i=0;i<n;i++){
        scanf("%f",&a[i]);
    }
    ptr=a;
    for(i=0;i<n;i++){
        sum = sum + *ptr;
        ptr++;
    }
    mean = sum /n;


    // reinisiatilizing the ptr to address of a
    ptr=a;
    for(i=0;i<n;i++)
    {
        sumstd = sumstd + pow((*ptr- mean),2);
        ptr++;
    }

    std = sqrt(sumstd/n);
    printf("Sum = %.3f \t ", sum);
    printf("Mean = %.3f \t", mean);
    printf("Standard Deviation = %.3f \t \n", std);

    return 0;
}

