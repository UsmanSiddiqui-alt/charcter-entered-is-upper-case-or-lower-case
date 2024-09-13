#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"Enter the alphabet: ";
    cin>>ch;
    if(ch>='A' && ch<='Z'){cout<<"\nThe entered alphabet is upper case.\n\n\n";}
    else{cout<<"\nThe entered alphabet is lower case.\n\n\n";}
    return 0;
}
