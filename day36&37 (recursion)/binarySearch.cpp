#include<iostream>
using namespace std;
int print(int arr[] , int s ,int e){

    for(int i=s ; i<=e; i++){
        cout << arr[i]<< endl;
    }cout<< endl;
}
bool BinarySearch(int arr[], int s, int e, int key){
print(arr , s , e);
// base case
    if(s>e)
        return false;

    int mid = s + (e-s)/2;
    if(arr[mid]== key){
        return true;
    }
    if(arr[mid]< key)
       return BinarySearch(arr, mid+1, e, key);
    
    else{
       return BinarySearch(arr, s , mid-1, key);
    }
}
int main(){

    int arr[8]={ 2,4,6,8,9,11,26,78};
    int size = 8;
    int key = 26;

    bool ans = BinarySearch(arr, 0, 7, key);

    if(ans== true){
        cout<< "Element is Found " << endl;
    }
    else {
        cout << " Element is Not found "<< endl;
    }
    return 0;
}