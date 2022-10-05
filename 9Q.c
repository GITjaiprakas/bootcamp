#include<stdio.h>
int square(int);
int main(){
int n,var;
printf("Enter any number : ");
scanf("%d",&n);
var=square(n);
printf("%d",var);
}
int square(int n){
return(n*n);
}
