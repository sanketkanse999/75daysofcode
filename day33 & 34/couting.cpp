#include<iostream>
using namespace std;

void couting(int n){

  if (n==0){
    return;
  }
     
  cout << n << endl;

   couting(n-1);

}

int main(){

     int n ;
     cout << "Enter the Number" << endl;

     cin >> n ;

     couting(n);
     
     return 0;
}