#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int r=0;
    while(n!=0){
        int rem =n%10;
        r=r*10+rem;
        n=n/10;
    }
    printf("%d",r);
    return 0;
}