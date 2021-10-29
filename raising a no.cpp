// : Write a program of raising a no. n to power p
#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n,p,result;
    cout<<"Enter the value of n: ";
    cin>>n;
    cout<<"Enter the value of p: ";
    cin>>p;
    result = pow(n,p);

    cout<<"\nThe Power of no. ["<<n<<" ^ "<<p<<"] = "<<result<<"\n";
    return 0;
}
