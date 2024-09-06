#include<iostream>
#include<string>
#include<vector>

using namespace std;

string countSort(string str){
    // make freq array and initialize, using vector
    // count = 0 total alphabet ->>> 26
    vector<int> freq(26, 0);

    // storing freq of every element char in a string
    for (int i = 0; i < str.length(); i++) {
        int index = str[i] - 'a';
        freq[index]++;
    }

    // create our sorted string
    int j = 0;
    // traverse our freq
    for (int i = 0; i < 26; i++) {
        // freq of i jab tak zero in ho jati tab tak string me ch ko add krna hai
        while (freq[i]--) {
            str[j++] = i + 'a';
        }
    }

    return str;
}

int main(){
    string str;
    cin >> str;
    cout << countSort(str) << endl;
    return 0; // Fixed the missing semicolon
}
