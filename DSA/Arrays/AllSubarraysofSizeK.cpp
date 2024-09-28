#include<bits/stdc++.h>
using namespace std;

int main() {
  #ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("../Template/input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("../Template/output.txt", "w", stdout);
  #endif
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);


  int arr[] = {7,1,2,5,8,4,9,3,6};
  int n = sizeof(arr)/ sizeof(arr[0]);
  int k=3;
  for(int i=0;i<=n-k;i++){
    cout<<"{";
    for(int j=i;j<i+k;j++){
       cout<<arr[j]<<",";
    }
    cout<<"}";
  }
}
 