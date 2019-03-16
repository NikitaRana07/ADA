#include <iostream>
#include <fstream>
#include <cstdlib>
#include <sstream>
using namespace std;
int main (int argc,char* argv[]) {
  int* a;
  int i=0,x=0,max,min,n;
  string s,q,v;

  s=argv[1];
  q=argv[2];

  stringstream choice(q);
  choice >> x;
  //cout<<"Choice "<<x<<endl;

  stringstream nums(s);

  while(getline(nums,v,' '))
    {
        i++;
    }
    n=i;
    //cout<<"Number of elements "<<n<<endl;
    a=(int*)malloc(n*sizeof(int));

   stringstream bums(s);
    i=0;
  while(getline(bums,v,' '))
  {
    stringstream val(v);
    val>>a[i];
    i++;
  }
/*
  for(i=0; i<8; i++)
  {
      cout<<a[i]<<" ";
  }
cout<<"After this"<<endl;*/
if(x==1)
{   max=a[0];
  	for(i=0; i<n; i++)
  	{
  		if(max<a[i])
  		{
  			max=a[i];
  		}
  	}
  	cout<<max;
}
else
{    min=a[0];
  for(i=0; i<n; i++)
  {
    if(min>a[i])
    {
      min=a[i];
    }
  }
  cout<<min;
}

  return 0;
  }
