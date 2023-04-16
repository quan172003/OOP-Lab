#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main(int argc, char* argv[]){

if(argc != 4)
{
    printf("Wrong number of argument\n");
    printf("CORRECT SYNTAX:sde <a><b><c>\n ");
    return 1;
}

 
double a, b, c, denta, solution1, solution2;

a = atol(argv[1]);
b = atol(argv[2]);
c = atol(argv[3]);

if(a == 0)
{
    printf("enter again the value of a, with a if different with 0\n");
    printf("CORRECT SYNTAX:sde <a><b><c>\n ");
    return 1;
}

denta = b*b - 4*a*c;
if(denta < 0)
{
    printf("there is no solution\n");
}
else if(denta == 0)
{
    solution1 = b / (2*a);
    printf("There is a solution.\nThat is: S = %f\n", solution1);
}
else
{
    double x = sqrt(denta);
    
    solution1 = (b + x)/(2*a);
    solution2 = (b - x)/(2*a);
    printf("There is 2 solutions.\nS1 = %f\nS2 = %f\n ", solution1, solution2);
}
return 0;
}