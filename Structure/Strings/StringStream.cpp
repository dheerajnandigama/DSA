// str(): Gets and sets the string object’s content in the stream
// clear(): Clears the stream
// <<: Adds a new string to the StringStream object
// >>: Reads the content from the StringStream object

#include<bits/stdc++.h>
using namespace std;

int main(){
    string s = "Welcome to panda";
    stringstream ss(s);
    vector<string> words;
    string temp;
    while(ss>>temp){
        words.push_back(temp);
    }

    for(auto e:words){
        cout<<e<<endl;
    }

    return 0;
}