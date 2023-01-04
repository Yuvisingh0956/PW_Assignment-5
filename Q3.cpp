//Q3 - Given two binary numbers, return the greatest of these numbers in decimal format.

#include <iostream>
using namespace std;

int main(){
    int n,m,a,b,c,d,power=1,ans1=0,ans2=0;
    cout<<"Enter the first number: ";
    cin>>n;
    cout<<"Enter the second number: ";
    cin>>m;
    
    a=n; //storing original input
    b=m; //storing original input
    while(n>0){
        c=n%10;
        ans1+=c*power;
        power*=2;
        n/=10;
    }
    cout<<"The binary input "<<a<<" in decimal format is: "<<ans1<<endl;
    power=1;
    while(m>0){
        d=m%10;
        ans2+=d*power;
        power*=2;
        m/=10;
    }
    cout<<"The binary input "<<b<<" in decimal format is: "<<ans2<<endl;

    if (ans1>ans2){
        cout<<"The bigger number is: "<<ans1;
    }
    else if(ans1<ans2){
        cout<<"The bigger number is: "<<ans2;
    }
    else{
        cout<<"The input are same"<<endl;
    }
    return 0;
}