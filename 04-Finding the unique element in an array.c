#include<stdio.h>
int main(){
    int xor_res=0;
    
    int n;
    scanf("%d",&n);

    //logic for special case
    if(n<1){
        printf("wrong input\n");
        return 1;
    }


    n=n*2+1;



    int array[n];
    // taking the input array

    printf("give every number in twice and one number is one times:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&array[i]);
        xor_res=xor_res^array[i];
    }

    //logic for output

    printf("the unique element is %d\n",xor_res);










    return 0;
}
