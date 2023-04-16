#include<stdio.h>

int main(int argc, char *argv[]){

    if(argc != 3){
        printf("wrong systax\n");
        printf("Correct systax: <filename1><filename2>\n");
        return 1;
    }

    FILE *f1, *f2, *f3;
    char c, a[] = "bai3.txt";

    f1 = fopen(argv[1], "r");
    f2 = fopen(argv[2], "r");
    f3 = fopen(a, "w" );

    if(f1 == NULL)
    {
        printf("file1 is not exist\n");
        return 1;
    }
        if(f2 == NULL)
    {
        printf("file2 is not exist\n");
        return 1;
    }

    c = fgetc(f1);
    while(c != EOF)
    {
        fputc(c, f3);
        c = fgetc(f1);
    }
        c = fgetc(f2);
    while(c != EOF)
    {
        fputc(c, f3);
        c = fgetc(f2);
    }

    fclose(f1);
    fclose(f2);
    fclose(f3);
}