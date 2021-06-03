/* Adriel A. Okolo 
Lab program 1 3/10/2021
a  C++  program  that  counts  the  number  of  times  an  item  is  found  in  an  Integer  Array. Here are the steps using character array */

//library files
#include <iostream>
using namespace std;

int main () {

//variable declaration
int number[10];
int U,i,S,j;
  
cout <<"Please enter 10 numbers  "<<endl;

for(i=0;i<10;i++){
cin >> number[i];
}

cout << "Please enter number you would like to search for "<<endl;
cin>>U;

for (i=0;i<10;i++){

if (number[i]==U){
S=S+1;
}
}
if(S==0){
  cout << "That item is not listed"<<endl;
}
else 
cout << "The number "<<U<<" "<<"was found "<<S<<" "<<"times"<<endl;

}
