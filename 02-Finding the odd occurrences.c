#include<stdio.h>
int main(){

    int n;
    scanf("%d",&n);


    if(n%2==0){
        
        printf("wrong input\n");
        return 1;
    }
    int arr[n];
    

    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    int xor=0;
    for(int j=0;j<n;j++){
        xor=xor^arr[j];
    }
    
    printf("the odd occurrences is %d\n",xor);






    return 0;
}
