#include<stdio.h>
#include<stdlib.h>

int main(){

        int n;
        scanf("%d",&n);
        int target;
        scanf("%d",&target);

        //logic for special case;

        if(target<0){
            printf("wrong input\n");
            return 1;
        }


        //logic for special case
        if(n<1){
            printf("wrong input\n");
            return 1;
        }

        //logic for taking the input
        int arr[n];
        for(int m=0;m<n;m++){
            scanf("%d",&arr[m]);
        }

        //logic for finding the Xor of all pairs
        

        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                
                int Xor=arr[i]^arr[j];
                printf("the xor of %d and %d is %d\n",arr[i],arr[j],Xor);

                    
                
            }
        }

    











    return 0;
}