// #include<iostream>
// #include<vector>
// #include<string>
// using namespace std ;
// string Longestcommonprefix(vector<string> &str){
//     //sorting the array of strings 
//     sort(str,begin(), str.end());
//     // first string 
//     string s1 =str[0];
//     int i = 0;
//     // second string
//     string s2 = str[str.size()-1];
//     int j =0;
//     string ans"";
//     while(i<s1.size() && j<s2.size()){
//         if(s1[i]==s2[i]){
//             ans+=s1[i];
//             i++;j++;
//         }
//         else{
//             break;
//         }
//     }

//     }

// int main(){
//     int n;
//     cout<<"Enter number of String:";
//     cin>>n;
//     cout<<"Enter string";
//     vector<string>str(n);
//     for(int i =0 ; i<n ;i++){
//         cin>>str(i);

// return 0;
//     }
    
// }







#include <iostream>
#include <vector>
#include <string>
#include <algorithm> // for sort function

using namespace std;

string Longestcommonprefix(vector<string> &str) {
    // Sorting the array of strings
    sort(str.begin(), str.end());

    // First string
    string s1 = str[0];
    int i = 0;
    // Second string
    string s2 = str[str.size() - 1];
    int j = 0;
    string ans = ""; // Fixed: changed `string ans""` to `string ans = ""`

    while (i < s1.size() && j < s2.size()) {
        if (s1[i] == s2[j]) {
            ans += s1[i];
            i++;
            j++;
        } else {
            break;
        }
    }
    return ans; // Fixed: need to return the result
}

int main() {
    int n;
    cout << "Enter number of strings: ";
    cin >> n;
    cout << "Enter the strings:\n"; // Fixed: added newline for better readability
    vector<string> str(n);
    for (int i = 0; i < n; i++) {
        cin >> str[i]; // Fixed: changed `str(i)` to `str[i]`
    }

    // Call the function and display the result
    string result = Longestcommonprefix(str);
    cout << "Longest common prefix: " << result << endl;

    return 0; // Fixed: moved return statement outside the loop
}
