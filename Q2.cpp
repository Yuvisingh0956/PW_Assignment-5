//Q2 - Given a natural number, find the number of 0’s in the binary representation of that number.

#include<iostream>
using namespace std;

int main(){
    int n,b;
    cout<<"Enter the number: ";
    cin>>n;
    b=n;
    int power=1,parity,ans=0;
    while (n>0){
        parity=n%2;
        ans+=parity*power;
        power*=10;
        n/=2;
    }
    cout<<"The binary number of "<<b<<" is: "<<ans<<endl;

    int count=0;
    while(ans>0){
        if(ans%10==0){
            count+=1;
        }
        ans/=10;
    }
    cout<<"The number of zero in binary format of "<<b<<" is: "<<count;
    return 0;
}