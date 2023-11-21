#include<iostream>
#include<math.h>
using namespace std;

int main(){
     
    //converion of Decimal number to Binary number.
    int n;
    cout << "convert into the binary no"<< endl;
    cin>>n;

    int ans=0;
    int i=0;
    while( n!=0){

        int bit = n&1;

        ans = (bit* pow(10, i)) + ans;

        n=n>>1;
        i++;
    }

    cout << " Answer is "<< ans << endl;


}