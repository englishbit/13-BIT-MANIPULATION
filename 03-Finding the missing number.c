#include<stdio.h>
int main(){
    int xor_res=0;
    
    int n;
    //logic for taking input
    scanf("%d",&n);
    //logic for special case
    if(n<1){
        printf("wrong input\n");
        return 1;
    }

    //logic for xoring
    for(int i=1;i<=n;i++){
        xor_res=xor_res^i;
    }

    //logic for core idea
    int array[n-1];
    for(int i=0;i<n-1;i++){
        scanf("%d",&array[i]);
        xor_res=xor_res^array[i];
    }
    //logic for output
    printf("the missing number is %d\n",xor_res);










    return 0;
}





