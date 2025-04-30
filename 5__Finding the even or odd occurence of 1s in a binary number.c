#include<stdio.h>
int main(){
        int xor_res=0;
        int n=32;
        int arr[n];
        printf("give a binary number in 32 bits(0s or 1s):\n");

        
        //logic for takig input array
        for(int i=0;i<n;i++){
            scanf("%d",&arr[i]);
            if(arr[i]!=0&&arr[i]!=1){
                printf("the wrong input,please give only 0 or 1 \n");
                return -1;
            }

            xor_res=xor_res^arr[i];
        }

        //logic for output
        if(xor_res==0){
            printf("the set bits have in even times\n");
        }else{
            printf("the set bits have in odd times\n");
        }









    return 0;
}
