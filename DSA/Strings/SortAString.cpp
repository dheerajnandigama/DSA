#include<bits/stdc++.h>
using namespace std;

string countSort(string s){
    vector<int> freq(26,0);

    //storing frequency of every charecter
    for(int i=0;i<s.length();i++){
        int index = s[i] - 'a';
        freq[index]++;
    }

    //create a sorted string
    int j=0;
    for(int i=0;i<26;i++){
        while(freq[i]--){
            s[j++] = i + 'a';
        }
    }
    return s;
}

int main(){
    string s;
    cin>> s;
    cout<<countSort(s)<<endl;
    return 0;
}