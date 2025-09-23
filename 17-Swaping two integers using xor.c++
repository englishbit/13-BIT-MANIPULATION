#include<iostream>
using namespace std;
int main(){
//logic for taking input
int a;
int b;
cin>>a>>b;
a=a^b;
b=a^b;
a=a^b;
cout<<a<<endl<<b<<endl;


    return 0;

}
