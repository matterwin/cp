#include <iostream>
using namespace std;
// main(int n){
  cin>>n;
  int i,d,c,r=0;
  while(n--){
    c=0;
    i=0;
    while(i<3){
      cin>>d;
      c+=d;
      i++;
      if(c==2){r++;break;}
    }
    while(i++<3){cin>>d;}
  }
  cout<<r<<endl;
}
