#include<iostream>
using namespace std;

int main() {
     
     // 1) Bitwise operator:

    int a= 4;
    int b= 6;

    cout<< "a&b: "<< (a&b) << endl;
    cout<< "a|b: "<< (a|b) << endl;
    cout<< "~a: "<< ~a << endl;
    cout<< "a^b: "<< (a^b) << endl;


    // 2) Right shift operator:
    
    cout<< (17>>1)<< endl;
    cout<< (17>>2)<< endl;

    // 3) Left shift operator:

    cout<< (19<<1)<< endl;
    cout<< (19<<2)<< endl;

    // 4) Increment operator:

    int i= 7;

    cout << (++i)<<endl;// first inctement then print. 
    cout << (i++)<< endl;// first print then increment.
    // write the i++; rather than i=i+1;
    // here i++ is post increment and ++i is pre increment.

    // 5) Decriment operator:

    cout << (--i)<<endl; //first decrement then print.
    cout << (i--)<< endl;// first print the decrement.

    // Write the i--; rather than i=i-1;
    // here i-- is post decrement and --i is pre decrement.
}
