#include<stdio.h>
int main(){
    int r;
    scanf("%d",&r);
    int c;
    scanf("%d",&c);
    int park[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&park[i][j]);
        }
    }
    int max=0;
    int index=-1;
    for(int i=0;i<r;i++){
        int count=0;
        for(int j=0;j<c;j++){
            if(park[i][j]==1){
            count++;
        }
    }
    if(count>max){
        max=count;
        index=i;
    }
}
printf("%d",index+1);
}