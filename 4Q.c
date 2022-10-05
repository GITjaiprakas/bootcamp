#include<stdio.h>
int prime(int);
int main(){
    int n,var;
    printf("Enter any number : ");
    scanf("%d",&n);
    n=n+1;
    var=prime(n);
    printf("%d",var);
    return 0;
}
int prime(int n){
    int i=2;
    while(i){
        for(i=2;i<=n/2;i++){
            if(n%i==0){
                break;
            }
        }
        if(n%i){
            return(n);
        }
        else{
            n=n+1;   
        }
    }
}
