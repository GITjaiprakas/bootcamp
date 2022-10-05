#include<stdio.h>
int fact(int);
int main(){
int i,sum=0;
for(i=1;i<=5;i++){
sum=sum+fact(i)/i;
}
printf("%d ",sum);
}
int fact(int i){
int facts=1;
for(i;i>=1;i--){
facts=facts*i;
}
return(facts);
}
