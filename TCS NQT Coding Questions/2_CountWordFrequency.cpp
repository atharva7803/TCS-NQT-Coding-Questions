/*

Q. You are a manager of an inventory you have been asked to write a code to manag the inventory, where you have been asked to keep and track every individual item. ✓ You're supposed to take an input from the user as a string and the and the item names are separated by a space you have to take the input in a single line separated by a space.

write a function countFrequency(s) that takes a string s as input and returns the frequency of each character in the string as a dictionary.

If the input contains any digits or numbers, return "Invalid input".

Example 1: apple banana orange apple

Output: apple 2 banana 1 orange 1

Example 2: apple 10 banana orange

Output: Invalid Input

*/

#include<bits/stdc++.h>
using namespace std;

string CountWordFrequency(string s){
    map<string,int> mp;
    string word = "";

    for(char c : s){
        if(isdigit(c)){
            return "Invalid Input";
        }
    }

    for(int i = 0; i < s.length(); i++){
        if(s[i] == ' '){
            if(!word.empty()){
                mp[word]++;
                word = "";
            }
        }
        else{
            word += s[i];
        }
    }
    if(!word.empty()){
        mp[word]++;
    }

    string result = "";
    for(auto it : mp){
        result += it.first + " " + to_string(it.second) + "\n";
    }

    return result;
}


int main(){
    string s;

    cout<<"Enter string: ";
    getline(cin, s);

    string result = CountWordFrequency(s);
    cout << result;

    return 0;
}