#include<stdio.h>
#include<stdbool.h>

int main(){
    int n;
    //logic for taking input
    scanf("%d",&n); 
    bool num1[n];
    bool num2[n];
    bool res_and[n];

    for(int i=0;i<n;i++){
        scanf("%d",(int*)&num1[i]);
    }

    for(int j=0;j<n;j++){
        scanf("%d",(int*)&num2[j]);
    }

    //logic for core idea
    for(int k=0;k<n;k++){
        if(num1[k]&&num2[k]){
            res_and[k]=true;
        }else{
            res_and[k]=false;
        }
    }
    //logic for output
    for(int l=0;l<n;l++){
        printf("%d ",res_and[l]);
    }







    return 0;
}



