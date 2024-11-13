#include<stdio.h>
int isSufficent(int n,int arr[],int enough){
    if(n==0){
        return -1;
    }
    int total=0;
    for(int i=0;i<n;i++){
        total=total+arr[i];
        if(total>=enough){
            return i+1;
        }
    }
    return 0;
}
int main(){
    int r;
    scanf("%d",&r);
    int unit;
    scanf("%d",&unit);
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int enough=r*unit;
    printf("%d",isSufficent(n,arr,enough));

}