#include <iostream>
#include <cstdio>
using namespace std;

int main(){
  freopen("/home/asif/Code/in","r",stdin);
  int t;
  double n,r,p,x=0;
  scanf("%d",&t);
  for(int i=1;i<=t;i++){
    scanf("%lf %lf %lf",&n,&r,&p);
    while(1){
      if(n>=p) break;
      else{
        n=n+(n*r)/100;
        x++;
      }
    }
    printf("Case %d: %d\n",i,int(x));
    x=0;
  }
  return 0;
}
