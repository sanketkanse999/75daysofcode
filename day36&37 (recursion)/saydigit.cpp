#include<iostream>
using namespace std;

saydigit(int n, string arr[]){
   // base case
      if(n==0)
        return 0 ;

    // processing 
    int digit = n%10;
    n = n/10;

    // recursive call
    saydigit(n , arr);

    cout << arr[digit] << endl;
}

int main() {
    
    string arr[10] = { "zero","one","two",
                      "three","four","five",
                      "six","seven","eight","nine"};
    int n ;
    cout << " Enter the number: " << endl;
    cin >> n;
    saydigit(n , arr);
 }