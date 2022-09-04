1. #include<stdio.h>
int lcm(int , int);
int main(){
    int n1,n2;
    printf("Enter two numbers : ");
    scanf("%d %d",&n1,&n2);
    printf("%d",lcm(n1,n2));
    if(n1==n2)
    printf("The lcm of %d and %d is %d",n1,n2,n1);
    else
    printf("lcm of %d and %d is %d",n1,n2,lcm(n1,n2));  
    return 0;
}
int lcm(int n1,int n2){
    int i;
    if(n1>n2){
        for(i=1;i<=n2;i++){
            if(n1*i%n2==0){
                break;
            }
        } 
        return(n1*i);   
    }
    else{
        for(i=1;i<=n1;i++){
            if(n2*i%n1==0){   
                break;
            }
        }
        return(n2*i);
    }
}              
