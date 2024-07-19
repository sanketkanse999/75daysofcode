#include<iostream>
using namespace std;

bool LinearSearch(int arr[], int size ,int key){

    if(size == 0)
    return false;

    if(arr[0] == key){
        return true;
    }
    else{
    int remaningPart = LinearSearch(arr+1 , size-1, key);
    return remaningPart;
    }
}
int main(){

    int arr[5] = {3,5,7,8,9};
    int size = 5;
    int key = 3;

    bool ans = LinearSearch( arr, size , key);

    if(ans){
        cout << "Element Found " << endl;
    }
    else{
        cout << "Element Not Found " << endl;
    }


}   