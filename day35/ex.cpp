#include<iostream>
using namespace std;

void reached(int source , int destination){

  cout<< " source "<< source << " destination "<< destination <<endl;

 if(source == destination){
     return;
  }

  source++;

  reached( source, destination);
}
int main(){

    int destination = 10;
    int source = 1;

    reached(source , destination);

    cout<< "reached at destination"<< endl;
}