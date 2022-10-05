#include<stdio.h>
int check(int,int);
int main(){
    int n1,n2;
    printf("Enter the range of prime numbers : ");
    scanf("%d %d",&n1,&n2);
    check(n1,n2);
    return 0;
}
int check(int n1,int n2){
    int i,j;
    for(i=n1;i<=n2;i++){
        for(j=i/2;j>1;j--){
            if(i%j==0){
                break;
            }
        }
        if(j==1){
            printf("%d ",i);
        }
    }
}
