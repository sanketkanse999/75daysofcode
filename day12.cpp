#include<iostream>
using namespace std;

void printArray( int arr[] , int n ) {

    for (int i =0 ;i< n ; i++) {

        cout << arr[i] << " ";
    }cout << endl;

}

void swapAlternate( int arr[] , int size ) {

    for ( int i =0; i< size ; i+=2) {

        if ( i+1 < size ) {
            swap( arr[i] , arr[i+1]);
        }
    }
}

int main() {

    int even[8] = { 5,4,7,3,8,4,2,6};
    int odd[6] = {5,2,7,4,7,4};

    swapAlternate(even , 8);
    printArray( even , 8);

    cout <<endl;
    
    swapAlternate(odd , 6);
    printArray( odd , 6);


    return 0;

}