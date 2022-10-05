#include<stdio.h>
int check(int ,int ,int ,int);
int main(){
    int n1,n2,i,d,h;
    printf("Enter two numbers : ");
    scanf("%d %d",&n1,&n2);
    i=n1>n2?n1:n2;
    h=n1<n2?n1:n2;
    d=i-h;
    printf("hcf of %d and %d is %d",n1,n2,check(n1,n2,h,d));
    return 0;
}
int check(int n1,int n2,int h,int d){
    int i;
    if(n1%h==0&&n2%h==0){
            return(h);
        }
        else{
            if((n1%d==0)&&(n2%d==0)){
                return(d);
            }
            else{
                for(i=2;i<=d;i++){
                    h=d/i;
                    if((n1%h==0)&&(n2%h==0)){
                        break;
                    }
                }
            }
            if((n1%h==0)&&(n2%h==0)){
                return(h);
            }
        } 
}
