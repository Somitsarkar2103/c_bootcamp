#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for (int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int esum=0,osum=0,ecount=0,ocount=0;
    for(int i=0;i<n;i++){
        if(a[i]%2==0){
            ecount++;
            esum+=a[i];
        }
        else{
             ecount++;
            esum+=a[i];
        }
    }
    printf("Even count=%d,Even sum=%d...\n",ecount,esum);
    printf("Odd count=%d,Odd sum=%d...\nExiting....",ocount,osum);
return 0;
}