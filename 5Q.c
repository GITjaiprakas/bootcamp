#include<stdio.h>
int check(int);
int main(){
    int n;
    printf("Enter the range of numbers : ");
    scanf("%d",&n);
    check(n);
    return 0;
}
int check(int n){
    int arr[n],i,j;
    for(i=2;i*i<=n;i++){
        for(j=2*i;j<=n;j+=i){
            arr[j]=6;
        }
    }
    for(j=2;j<=n;j++){
        if(arr[j]!=6){
            printf("%d ",j);
        }
    }
}
