#include<iostream>
using namespace std;

int main(){
     
     // pattern 1:
      int n;
      cin >>n;
      
      int i =1;

      while (i<=n) {
         
          int j =1 ;
          while (j<=n){

             cout<< "*" << " ";
             j=j+1;
          }
           cout <<endl;

           i=i+1;
      }

      // pattern 2:

      int n1;
      cin >> n1;

      int  i1 = 1;

      while(i1<=n1) {

            int j1=1;
            while (j1<=n1) {
                  cout << i1<< " ";
                  j1 = j1 +1;

            }
            cout <<endl;
            i1= i1+1;
      }
      // pattern 3:

      int n2;
      cin >> n2;

      int i2=1;

      while (i2<=n2) {

            int j2 =1;
            while(j2<=n2) {
                  cout <<j2 << " ";
                  j2 =j2+1;

            }
            cout <<endl;
            i2 =i2+1;
            
      }
      // Pattern 4:

      int n4;
      cin >> n4;

      int i4 =1;

      while (i4<=n4) {

            int j4 =1;
            while (j4<=n4) {
                  cout <<n4-j4+1<<" ";
                  j4 =j4+1;
            }
            cout<< endl;
            i4=i4+1;
      }   
      // pattern 5:

      int n5;
      cin >> n5;

      int i5=1;
      int count=1;

      while(i5<=n5){

            int j5=1;
            while (j5<=n5){
                  cout << count<<" ";
                  count =count+1;
                  j5= j5+1;
            }
            cout<<endl;
            i5=i5+1;
      }
      // pattern 6:

      int n6;
      cin >>n6;

      int i6 =1;
      while(i6<=n6){
            
            int j6=1;
            while(j6<=i6){
                  cout<< "*"<<" ";
                  j6=j6+1;
            }
            cout<< endl;
            i6=i6+1;
      }
      // Pattern 7:

      int n7;
      cin>> n7;

      int i7=1;
      while(i7<=n7){

            int j7=1;
            while(j7<=i7){
                  cout << i7 << " ";
                  j7=j7+1;
            }
            cout<<endl;
            i7=i7+1;
            
      }
     

}