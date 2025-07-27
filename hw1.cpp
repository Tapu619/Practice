#include <iostream>
using namespace std;

int main(){

char ch;

cout<<"Enter ch: " << endl;
cin>>ch; 

if ((ch>=97) && (ch<=122)){ //this take i/p as upper case (ASCII Table) a=97, z=122

cout << "This is lower case" << endl;

}

else if ((ch>=65) && (ch<=90)){ //this take i/p lower case A=65, Z=90 

cout << "This is upper case " << endl;

}

else if ((ch>=48) && (ch<=57)){ //this take i/p digits 0=48,9=57

cout << "This is numeric " << endl;

}

return 0;


}