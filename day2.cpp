#include<iostream>
using namespace std;

int main() {
    int a;
   // If  statements.
    cout << "Enter the value of a :";
    cin>>a;

   // if a is positive
   if (a>0){
      cout << "a is positive" << endl;

   }
   // if a is negative
   if (a<0) {
    cout<< "a is negative" << endl;
     }
   
   // Find the greater value among  b and c.

   int b,c;
   cout << "Enter the value of b :";
   cin >>b; 
   cout << "Enter the value of c :";
   cin >> c;
   // cin do not read the Space,Tab and Enter.
 // for that we need to use cin.get

   if(b>c){

    cout << "b is greater number" << endl;

   }
   if(c>b);{

    cout << "c is greater number" << endl;
   }

  // While loop.

  // example no1:
   int d ;
   cout << "Enter the value of d :";
   cin >>d ;

   int i=1 ;
   while (i<=d){
      cout << i << endl;
      i= i + 1 ;
   }
    
   int e;
   cout << " Enter the value of e no :";
   cin >> e;

  // example no2 :
   int j=1;
   int sum =0;

   while(j<=e){

    sum=sum+ j;
    j=j+1;
   }
    cout << "The sum of e no is: "<<sum << endl;
   
}