#include<stdio.h>
int  main(){
    int a,b,c;
    printf("Enter values of three integers: ");
    scanf("%d%d%d",&a,&b,&c);
    if(a>=b&&a>=c)printf("%d is the greatest",a);
    else if(b>=a&&b>=c)printf("%d is the greatest",b);
    else printf("%d is the greatest",c);
    return 0;
}