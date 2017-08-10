#include <iostream>
#include <algorithm>
using namespace std;

int main(){
  freopen("/home/asif/Code/in","r",stdin);
  int a,b,c,d,de,ne,x;
  cin>>a>>b>>c>>d;
  de=(b*d)/__gcd(b,d);
  ne=((de/b)*a)+((de/d)*c);
  while(__gcd(ne,de)!=1){
    x=ne;
    ne=ne/__gcd(x,de);
    de=de/__gcd(x,de);
  }
  cout<<ne<<"/"<<de<<"\n";
  return 0;
}
