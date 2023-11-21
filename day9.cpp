#include<iostream>
using namespace std;


int main() {

    //declare
    int number[15];

    //accessing an array
    cout << "value at 14 index " << number[14] << endl;

    // initialising an array
    int second[3]= {5 , 6, 11};


    //accessing an element
    cout << "value of 2 index " << second[2] << endl;

    int third[15] = {2,7} ;

    int n= 15;
    
    cout << " printing the arrray " << endl;
    //print the array

    for ( int i=0;i<n; i++) {
        cout << third[i] << " ";
    }
    

    //initialising the all locations with 0
    int fourth [10] ={0};

    n = 10;
    cout << "print the array "<< endl;
    //print the array
    for (int i=0; i<n ; i++) {
        cout << fourth[i] << " ";
    }


    //initialising all location with 1 ( not possible with below line )

    int fifth[10] = { 1};

    n=10;
    cout << "printing the array " << endl;
    // print the array
    for (int i= 0;i<n ;i++) {
        cout << fifth[i] << " ";
    }

    return 0;
}
