#include<iostream>
#include<string>
#include<vector>
using namespace std;
bool isIsomorphic(string s1,string s2){
    //initiliase freq arr with -1;
    vector<int>v1(128,-1);
    vector<int>v2(128,-1);

   // if size of string are not equal
    if(s1.size()!=s2.size()){
        return false;

    }
    for(int i=0;i<s1.size();i++){
        //checking if val of char at index i match i both vectors
        if(v1[s1[i]]  != v2[s2[i]]){
            return false;

        }
        //string string i vectors po in vec
        v1[s1[i]] = v2[s1[i]];
        
    }
    return true;

}
int main(){
    string s1,s2;
    cin>>s1>>s2;
    if(isIsomorphic(s1,s2)){
        cout<<"They are isomorphic"<<endl;

    }
    else{
        cout<<"They are not isomorphic"<<endl;

    }
}