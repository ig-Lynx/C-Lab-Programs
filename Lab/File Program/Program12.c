#include<stdio.h>
#include<stdlib.h>

int main () {

    FILE *fptr1 , *fptr2;
    char filename[100],c;

    printf("Enter the filename to open for reading \n");
    scanf("%s",filename);

    //. Open one file for reading
    fptr1 = fopen(filename,"r");  // Mode - r , w,a
    if(fptr1 == NULL)
    {
        printf("cannot open the file %s \n ",filename);
        exit(0);
    }
    printf("Enter the file to open for writing \n");
    scanf("%s",filename);

    // open another fiel writing
    fptr2 = fopen(filename,"w");
    if(fptr2 == NULL )
    {
        printf("cannot open file %s \n",filename);
        exit(0);
    }

    // read content of the file

    c=fgetc(fptr1);
    while ( c != EOF) {

        fputc(c,fptr2);

        c=fgetc(fptr1);
    }
    printf("\n Contents copied  to %s \n", filename);

    fclose(fptr1);
    fclose(fptr2);

    return 0;
    }
