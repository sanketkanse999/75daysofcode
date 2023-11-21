#include<iostream>
using namespace std;


    
    // swich statement
    
    /*int num ;
    cout << "Enter the value of the number: " << endl;
    cin >>num;

    cout << endl;
    switch( num){

        case 1: cout << " First" << endl;
               break;

        case 2: cout << " Second" << endl;
               break;

        default: cout << " It is a default case" << endl;
    }

    cout << endl;
    
    

    // Simple calculator using the switch statement.
        int a,b;
    
    cout << "Enter the value of a:" <<endl;
    cin>> a;

    cout << "Enter the value of b:" << endl;
    cin >>b;

    char op;
    cout << " Enter the operation you want to perform:" << endl;
    cin >> op;

    switch (op){

        case '+': cout << (a+b) << endl;
                 break;
        case '-': cout << (a-b) << endl;
                 break;
        case '*': cout << (a*b) << endl;
                 break;
        case '/': cout << (a/b) << endl;
                 break;

        default: cout << "Please enter the valid operation " << endl;
    }

    // Functions

    int power( int a, int b) {

        int ans =1;

        for (int i=1; i<=b; i++) {

            ans =ans *a;

        }
        return ans;
    }
    
int main(){

    int a,b;
    cout << "Enter the value of a and b: " << endl;
    cin >>a>>b;
    
    int answer= power(a ,b);
    cout << "answer is " << answer << endl;

    int c,d;
    cout << "  the value of c and d: " << endl;
    cin >> c>>d;

     answer = power(c,d);
    cout << "answer is "<< answer << endl;
}    */
   
   // Function use for to find even or odd
bool isEven(int a){

    if (a%2==0) {
        return 1;
    }
        return 0;

}

int main (){

    int num;
    cout << "Enter the number "<< endl;
    cin >> num;

    if (isEven(num)) {
        cout << " Number is Even " << endl;

    }
    
    else {
        cout << "Number is odd "<< endl;
    }
    
}






