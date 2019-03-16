#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main () {
  int i,n,x,j,t=0;

  ifstream inFile;

inFile.open("randnum.txt");

if (!inFile) {
    cout << "Unable to open file";
    exit(1);
}

i=0;
while (inFile >> x)
{
    i++;
}
n=i;
int a[n];
inFile.close();



inFile.open("randnum.txt");

if (!inFile) {
    cout << "Unable to open file";
    exit(1);
}

i=0;
while (inFile >> x)
{
    a[i]=x;
    i++;
}

inFile.close();

 cout<<"Random inserted numbers:"<<endl;
 for(i=0;i<n;i++)
  {
    cout<<a[i]<<" ";
  }

  cout<<"\n";
  //Insertion sort

  for(i=0;i<n-1;i++)
    {
    for(j=i;j>=0;j--)
    {
        if (a[j]>a[j+1])
        {
        t=a[j];
        a[j]=a[j+1];
        a[j+1]=t;
        }

    }
    }
   cout<<"\nSorted numbers(using Insertion sort): "<<endl;
      for(i=0;i<n;i++)
  {
    cout<<a[i]<<" ";
  }


  return 0;
  }
