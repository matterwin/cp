#include <iostream>
using namespace std;
main() {
    int n,k,r = 0; 
    cin>>n>>k;

    int scores[101];
    for (int i=0;i<n;i++) cin>>scores[i];
    
    int threshold = scores[k-1];
    for (int i=0;i<n;i++) 
      if (scores[i]>=threshold && scores[i]>0) r++;
    cout<<r<<endl;
}

