#include<stdio.h>

 int main() {
    char Name[20];
    double units,charge;
    printf("Enter the name of the user and the units consumed :");
    scanf("%s %lf",Name,&units);
    charge=100;
    if(200 >= units){
        charge +=units*0.80;
    }
    else if (units > 200 && units <= 300) {
        charge += 200 * 0.80 + (units - 200) * 0.90;
    }
    else {
        charge += 200 * 0.80 + 100 * 0.90 + (units - 300)*1.00;
    }

    if(charge > 400){
        charge += 0.15*charge;
    }

    printf("customer name : %s \n",Name);
    printf("Units consumed : %lf \n", units);
    printf("The total bill for the units consumed is : %lf \n",charge);
    return 0;
}