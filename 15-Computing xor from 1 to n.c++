#include<iostream>
using namespace std;
int Xor(int n){
    //logic for main idea and output

if(n%4==0)return n;
if(n%4==1)return 1;
if(n%4==2)return n+1;
return 0;


}
int main(){
//logic for taking input
int n;
cin>>n;
//logic for output
cout<<Xor(n)<<endl;

    return 0;

}
