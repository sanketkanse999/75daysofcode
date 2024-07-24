#include<iostream>
using namespace std;
void merge( int *arr, int s , int e){
     
    int mid =(s+e)/2;

    int len1 = mid - s + 1;
    int len2 = e - mid;

    int *first = new int [len1];
    int *second = new int [len2];

    //copy value
    int mainarrayIndex= s;
    for(int i=0; i<len1; i++){
        first[i] = arr[mainarrayIndex++];
    }

    mainarrayIndex= mid +1;
    for(int i=0; i<len2; i++){
        second[i] = arr[mainarrayIndex++];
    }
    
    // merge 2 sorted Array
    int index1= 0;
    int index2= 0;
    mainarrayIndex = s;

    while( index1 < len1 && index2 < len2){
        if( first[index1] < second[index2]){
            arr[mainarrayIndex++] = first[index1++];
        }
        else{
            arr[mainarrayIndex++] = second[index2++];
        }
    }
    while( index1 < len1){
        arr[mainarrayIndex++] = first[index1++];
    }
    while( index2 < len2){
        arr[mainarrayIndex++] = second[index2++];
    }
}
void mergeSort( int *arr, int s , int e){
   
    //base case
    if( s>=e){
        return;
    }
    int mid = (s+e)/2;

    // sort the left side
    mergeSort( arr, s , mid);

    // sort the right side
    mergeSort( arr , mid+1 , e);

    //merge
    merge( arr, s , e);
}
int main(){

    int arr[5] = { 3,5,2,11,6};
    int n = 5;
    mergeSort( arr , 0 , n-1);
    
    for( int i=0 ; i<n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}