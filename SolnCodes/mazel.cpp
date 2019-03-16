#include <iostream>
#include <fstream>
#include <cstdlib>
#include <sstream>
using namespace std;
int main (int argc,char* argv[]) {
  int* a;
  int i=0,n,j,t,l,flag=1,f=0;
  string s,v;

  s=argv[1];

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
  for(i=0; i<n; i++)
  {
      cout<<a[i]<<" ";
  }
cout<<"After this"<<endl;*/

//sorting array
    for(i=0;i<n;i++)
    {
    for(j=0;j<n-1-i;j++)
    {
        if (a[j]>a[j+1])
        {
        t=a[j];
        a[j]=a[j+1];
        a[j+1]=t;
        }

    }
    }

    for(i=0;i<n;i++)
    {
        if(a[i]==l)
        continue;

        else
        {
            l=a[i];
            for(j=i+1;j<n;j++)
            {
                if(l==a[j])
                {
                    flag++;
                }
            }
            if(flag>=n/2)
            {f++;
              cout<<l<<" ";}
        }
    flag=1;
    }
    if(f==0)
    {cout<<"NONE";}

  return 0;
  }
