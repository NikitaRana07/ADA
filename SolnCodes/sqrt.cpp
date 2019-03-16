#include <iostream>
#include <fstream>
#include <cstdlib>
#include <iomanip>
#include <sstream>
#include <cmath>
using namespace std;
float n;
float mod(float x)
{
  if (x >= 0)
        return x;
    else
        return x*-1;
}
float squareroot(float a, float b)
{ float l,d;

  l=a/2;
  d=l*l-n;

  if(mod(d)<=b)
  {
    return l;}
  else if(d>b)
  {
    return squareroot(l,b);}
  else
  {
    return squareroot(a+l,b);
  }

}


int main (int argc,char* argv[]) {
  float a;
  float b=0,ans=0;
  string s,q;
  s=argv[1];
  q=argv[2];

  stringstream bums(s);
  bums>>a;

  stringstream val(q);
  val>>b;

n=a;
ans=squareroot(a,b);
ans=trunc(ans*100)/100;
cout<<ans;
  return 0;
  }
