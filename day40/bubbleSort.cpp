#include<iostream>
using namespace std;
int sortArray ( int arr[], int n){

    // base case
    if(n == 0 || n==1){
         return 0 ;
    }
    // recursive relation
    for(int i=0 ; i<n ; i++){

      if(arr[i] > arr[i+1]){

       swap( arr[i] , arr[i+1]);
      }
    }
     // recursion call
    sortArray( arr , n-1);

}
int main(){

    int arr[5] = {3,2,5,7,6};

    sortArray( arr , 5 );
    
    for( int i =0; i< 5; i++)
    {
        cout << arr[i] <<" ";
    }
}