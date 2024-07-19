#include<iostream>
using namespace std;

bool isSorted(int arr[], int size){

    // base case
    if(size ==0 || size ==1){
    return true;
    };
    
    if( arr[0]> arr[1]){
        return false;

    }
    else{
        bool remaningPart = isSorted(arr+1, size-1);
        return remaningPart;
    }

 }
int main(){
    
    int arr[6] = {3,4,7,6,7,7};
    int size = 6;

    bool ans = isSorted(arr , size);

    if(ans){
        cout << "Array is Sorted"<< endl;
    } 
    else {
        cout << "Array is Not Sorted" << endl;
    }

    return 0;
    
    }