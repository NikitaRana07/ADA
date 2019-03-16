#include <iostream>
#include <fstream>
#include <cstdlib>
#include <sstream>
#include <iomanip>
using namespace std;
int main (int argc,char* argv[]) {
  int* a;
  int i=0,j,n;
  int sum;
  string s,v;

  s=argv[1];

  stringstream nums(s);

  while(getline(nums,v,' '))
    {
        i++;
    }
    n=i;

    a=(int*)malloc(n*sizeof(int));

   stringstream bums(s);
    i=0;
  while(getline(bums,v,' '))
  {
    stringstream val(v);
    val>>a[i];
    i++;
  }


int news;
sum=a[0];
for(i=0;i<n;i++)
{ news=a[i];
  if(news>sum)
     {sum=news;}
  for(j=i+1;j<n;j++)
  {  news+=a[j];

     if(news>sum)
      {sum=news;}
  }
}
cout<<fixed<<setprecision(2)<<sum;
  return 0;
  }
