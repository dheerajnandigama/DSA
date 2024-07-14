#include<bits/stdc++.h>
using namespace std;

bool isAnagram(string s1,string s2){
    //creating a freq array
        vector<int> freq(26,0);

    //if lengths are not same , then not anagrams
    if(s1.length() != s2.length()){
        return false;
    }    

    //storing frequency of charecters in s1 and s2
    for(int i=0;i<s1.length();i++){
            freq[s1[i]-'a']++; // for s1 we are inrementing freq of charecter
            freq[s2[i]-'a']--; // for s2 we are decrementing freq of charecter
    }

    //checking if frequency of every charecter is 0
    for(int i=0;i<26;i++){
        if(freq[i]!=0){ // not anangram
            return false;
        }
    }

    return true;

}

int main(){
    string s1,s2;
    cout<<"Enter 1st string:"<<endl;
    cin>> s1;
    cout<<"Enter 2nd string:"<<endl;
    cin>> s2;
    if(isAnagram(s1,s2)){
        cout<< "Anagrams";
    }
    else{
        cout<<"Not Anagrams";
    }
    
    return 0;
}