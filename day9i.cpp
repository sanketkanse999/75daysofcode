#include<iostream>
using namespace std;
 
 // Arrays using the functions. 

void printArray(int arr[], int size) {

    cout << endl << " printing the array " << endl;

    for (int i=0; i<size ;i++) {
        cout << arr[i] << " ";
    }

}

int main() {
   // 1) for the integer :

    int first[24];

    int n=24;
    printArray(first, 24);
    int sizefirst= sizeof(first)/sizeof(int);

    cout << endl << "Size of the first array is : "<< sizefirst << endl;

    int second[5]={0};

    n = 5;
    printArray(second ,5);

    int third [8]= {1};

    n = 8;
    printArray(third ,8);

  // 2) for the character :

    char firstone[5] = { 'a' , 'b' , 'c' , 'd' , 'e'};

    cout<< endl << "Printing the array " << endl;
    for (int i=0 ; i<5 ; i++) {
        cout << firstone[i] << " ";
    }

}