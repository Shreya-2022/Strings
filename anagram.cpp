#include<iostream>
#include<string>
#include<vector>
using namespace std;

// Define the function to check if two strings are anagrams
bool isAnagram(const string& s1, const string& s2) {
    vector<int> freq(26, 0); // Frequency array

    // If lengths are different, they cannot be anagrams
    if(s1.length() != s2.length()) {
        return false;
    }

    // Store frequency of characters in s1 and decrease for s2
    for(int i = 0; i < s1.length(); i++) {
        freq[s1[i] - 'a']++; // Increase frequency for s1
        freq[s2[i] - 'a']--; // Decrease frequency for s2
    }

    // Check if frequency of every character is 0
    for(int i = 0; i < 26; i++) {
        if(freq[i] != 0) {
            return false;
        }
    }
    return true;
}

int main() {
    string s1, s2;
    cin >> s1 >> s2;

    if(isAnagram(s1, s2)) {
        cout << "Strings are anagrams" << endl;
    }
    else {
        cout << "Strings are not anagrams" << endl;
    }

    return 0;
}

