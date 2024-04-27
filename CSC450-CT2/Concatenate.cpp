#include<iostream>
#include<string>
using namespace std;

int main() {
string firstString;
string secondString;
string concatenateString;

for(int i=0; i<3; i++) {
cout<<"Enter first string here: ";
cin>>firstString;
cout<<"Enter second string here: ";
cin>>secondString;
concatenateString = firstString + secondString;
cout<<"Result of combined string: "<<concatenateString<<endl;
}

return 0;
}
