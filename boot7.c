#include<stdio.h>
int main(){
    int marks;
    printf("Enter marks: ");
    scanf("%d",&marks);
    if(marks>=90&&marks<=100)printf("S");
    else if(marks>=80&&marks<=89)printf("A");
    else if(marks>=70&&marks<=79)printf("B");
    else if(marks>=40&&marks<=69)printf("C");
    else if(marks>=0&&marks<=39)printf("FAIL");
    else printf("Invalid!");

return 0;
}