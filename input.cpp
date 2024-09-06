#include<iostream>
#include<string>
using namespace std ;
int main(){
     string str ;
     cin>>str;
     // If we use cin>> then it will print only hello instead of hello world
     cout<<str<<endl;
     // when we use  getline and we give input as Hello world then it reteurn Hello world
     getline(cin,str);
     cout<<str<<endl;

}