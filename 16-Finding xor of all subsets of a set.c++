#include<iostream>
using namespace std;
#define max 100000
int set[max];

int main(){
    int n;
    //logic for taking input
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>set[i];
    }
    if(n==0){
        cout<<0<<endl;
    }else if(n>1){
        cout<<0<<endl;
    }else{
        cout<<set[0]<<endl;
    }


    return 0;


}
