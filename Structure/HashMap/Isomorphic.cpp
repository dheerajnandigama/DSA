#include<bits/stdc++.h>
using namespace std;

bool isIsomorphic(string s1,string s2){
    //creating a freq arrays
        vector<int> v1(128,-1);
        vector<int> v2(128,-1);

    //if lengths are not same , then not isomorphic
    if(s1.length() != s2.length()){
        return false;
    }    

    
    for(int i=0;i<s1.length();i++){
        if(v1[s1[i]] != v2[s2[i]]){
            return false;
        }
        v1[s1[i]] = v2[s2[i]] = i;
    }
    return true;

}

int main(){
    string s1,s2;
    cout<<"Enter 1st string:"<<endl;
    cin>> s1;
    cout<<"Enter 2nd string:"<<endl;
    cin>> s2;
    if(isIsomorphic(s1,s2)){
        cout<< "Isomorphic";
    }
    else{
        cout<<"Not Isomorphic";
    }
    
    return 0;
}