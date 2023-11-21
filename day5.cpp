#include <iostream>
#include <math.h>

using namespace std;

// converion of binary number to decimal number.

    int main() {
    
    int n;
    cout << "convert the no into the decimal."<< endl;
    cin >> n;
    int i=0 ,ans =0;
    while (n!=0) {

        int digit = n%10;

        if ( digit==1) {

            ans = ans+pow ( 2, i);
        }

        n = n/10;
        i++;
    }
    cout << " The answer is " << ans << endl;
}