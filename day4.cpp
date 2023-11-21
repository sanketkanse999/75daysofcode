#include<iostream>
using namespace std;

int main(){
    
    // condition 1:
    int n;
    cout <<"enter the value of n "<<endl;
    cin>>n;

    cout << "printing count from 1 to n " << endl;

    for ( int i=1 ; i<=n; i++){
    //for ( intialisatin; condition; updation) not always mandetory.
        cout << i << endl;

    }
    // Or condition 2 (using break statement):

    int n1;
    cout << "enter the value of n1 "<< endl;
    cin>>n1;

    cout << "printing count from 1 to n1 "<< endl;

    int i1=1;
    for ( ; ;){
        if (i1<=n1){
             cout << i1 << endl;
        }
        else{
            break;
        }
        i1++;
    }
    // we can add multiple variable in the for loop.

    int i2;
    cout << "enter the value of n2 "<< endl;
    cin>> i2;

    cout << "printing count to n2 "<< endl;

    for( int a=1 ,b=3, c=5; a<=8||b==10||c>15; a++,b++,c++){

        cout<< a<< " "<< b << " "<< c<< endl;
    }


    // sum of n3 numbers using for loop.

    int n3;
    cout << "enter the value of the n3 "<< endl;
    cin >>n3;

    int sum=0;

    for( int i3=1;i3<=n3;i3++){
        
        sum+=i3;

    }
    cout <<" The sum of n3 no is : "<< sum <<endl;

    // fibonacci series using for loop:

    int n4;
    cout << "enter the value of the n4 "<< endl;
    cin>> n4;
    
    int a=0, b=1;
    cout << a<< " "<< b<< " ";
    for(int i4=1;i4<=n4;i4++){

        int nextnumber=a+b;
        
        cout << nextnumber<< " ";

        a=b;
        b=nextnumber;
    }

}