#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(int argc, char *argv[]){

    if(argc != 3)
    {
        printf("Wrong input\n");
        printf("Correct systax: fde<filename><newfilename>\n");
        return 1;
    }
    FILE *f1, *f2;
    char c;

    f1 = fopen(argv[1], "r");
    f2 = fopen(argv[2], "w");

    if(f1 == NULL)
    {
        printf("File is not exist\n");
    }

    c = fgetc(f1);
    while(c != EOF)
    {
        fputc(c, f2);
        c = fgetc(f1);
        
    }
    fclose(f1);
    fclose(f2);

    return 0;
}