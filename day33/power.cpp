#include<iostream>
using namespace std;

int power(int n){
    if(n==0)
    return 1;

   int smallpower = power(n-1);
   int largepower = 2* smallpower;

   return largepower;
}

int main(){

    int n;

    cout << "Enter the Number"<< endl;
    cin >> n;

    int ans = power(n);

    cout << ans << endl;
}