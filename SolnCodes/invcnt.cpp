#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;
int main (int argc,char* argv[]) {
  int i,n,x,j;
  ifstream inFile;
  inFile.open(argv[1]);
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
int *a;
a=(int*)malloc(n*sizeof(int));
inFile.close();


inFile.open(argv[1]);

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

  int s,q;
  ofstream file;
  file.open (argv[2]);


  for(i=0;i<n-1;i++)
    { s=a[i];
    for(j=i+1;j<n-1;j++)
    {
        q=a[j];
        if (s>q)
        {
            file <<s<<","<<q<<"\n";
        }

    }
    }
    file.close();

  return 0;
  }
