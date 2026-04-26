#include<iostream>
using namespace std;
int count(string s1, string word){
    int count = 0;
    int pos=0;
    while((pos = s1.find(word, pos)) != string::npos){
        count++;
        pos += word.length();
    }
    cout<<"The word '"<<word<<"' appears "<<count<<" times in the string."<<endl;
    return count;
}
int main(){
    string s1;
    string word;
    cout<<"Enter a string: ";
    getline(cin, s1);
    cout<<"Enter a word to search: ";
    cin>>word;
    count(s1, word);
    return 0;
}