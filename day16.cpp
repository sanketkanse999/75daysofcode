#include<iostream>
using namespace std;

int binarysearch(int arr[], int size ,int key){

    int start= 0;
    int end =size -1;

    int mid = start + (end - start)/2;

    while (start <= end) {

        if (arr[mid] == key) {
            return mid;
        }

        if( key> arr[mid]){

            start =mid +1;
        }
        else {
            end= mid - 1;
        }

        mid =start + (end - start)/2;

    }
    return -1;
}

int main() {

    int even[6] = { 3 ,5,6,7,8,9};
    int odd[5] = { 4,7,33,67,88};
    
    int oddIndex = binarysearch(odd,5,33);
    cout << " Index of 33 " << oddIndex << endl;

    int evenIndex = binarysearch(even ,6,9);
    cout <<" Index of 9 " << evenIndex <<endl;

    return 0;
}