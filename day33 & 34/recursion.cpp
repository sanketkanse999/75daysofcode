#include<iostream>
using namespace std;

int factorial(int n){

    if(n==0)
        return 1;
    

    int simple = factorial(n-1);
    int complex = n*simple;

    return complex;
}

int main(){

    int n;
    cout << "Enter the Number"<< endl;

    cin>> n;
    
    int ans = factorial(n);
    cout << ans << endl;

    return 0;
}