#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i = 4;
    double d = 4.0;
    char s[] = "HackerRank ";

    
    // Declare second integer, double, and String variables.
    int num;
    double num1;
    char string[1000];
    
    // Read and save an integer, double, and String to your variables.
    scanf("%d%lf", &num,&num1);
    getchar();
    scanf("%[^\n]s",string);
    
    // Print the sum of both integer variables on a new line.
    printf("%d\n",(i+num));
    
    // Print the sum of the double variables on a new line.
    printf("%.1lf \n",(d+num1));
    
    // Concatenate and print the String variables on a new line
    // The 's' variable above should be printed first.
    printf("%s%s",s,string); 
    return 0;
