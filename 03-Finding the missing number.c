#include<stdio.h>
int main(){
    int xor_res=0;
    
    int n;
    scanf("%d",&n);
    if(n<1){
        printf("wrong input\n");
        return 1;
    }

    for(int i=1;i<=n;i++){
        xor_res=xor_res^i;
    }

    int array[n-1];
    for(int i=0;i<n-1;i++){
        scanf("%d",&array[i]);
        xor_res=xor_res^array[i];
    }

    printf("the missing number is %d\n",xor_res);










    return 0;
}
