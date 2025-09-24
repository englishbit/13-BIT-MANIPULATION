#include<stdio.h>
int main(){
    int n,rem;
    short m=32;
    int arr[33]; 
    //logic for taking input
    scanf("%d",&n);


    //logic for filling the array with 0
    for(int i=0;i<33;i++){
        arr[i]=0;
    }
    //logic for special case
    if(n<0){
        return 0;
    }
    
    //logic for converting integer to binary
    if(n==0){
        printf("0");
        return 0;
    }
    
    while(n>0){
        rem=n%2;
        arr[m--]=rem;
        n=n/2;
 

    }
    //logic for printing the binary number
    short strt=m+1;
    for(int j=strt;j<33;j++){
        printf("%d",arr[j]);
    }

    return 0;
}

