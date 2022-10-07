#include<stdio.h>
void pascal(int);
int main(){
    int rows;
    printf("Enter the number of rows : ");
    scanf("%d",&rows);
    pascal(rows);
    return 0;
}
void pascal(int rows){
    int space,n,r,ncr;
    for(n=0;n<rows;n++){
        for(space=1;space<rows-n;space++){
            printf(" ");
        }
        for(r=0;r<=n;r++){
            if(r==0){
                ncr=1;
                printf("%d ",ncr);
            }
            else{
                ncr=ncr*(n-r+1)/r;
                printf("%d ",ncr);
            }
        }
        printf("\n");
    }
}
