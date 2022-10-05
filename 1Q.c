#include<stdio.h>
int lcm(int n1,int n2);
int main(){
    int n1,n2;
    printf("Enter any two numbers");
    scanf("%d %d",&n1,&n2);
    printf("%d",lcm(n1,n2));
    return 0;
}
int lcm(int n1,int n2){
    int i=1;
    while(i){
        if(n1*i%n2==0){
            return n1*i;
        }
        i++;
    }
}
