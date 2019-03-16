#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>
using namespace std;

void merge(int arr[], int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 =  r - m;

    
    int L[n1], R[n2];

    
    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1+ j];

   
    i = 0; 
    j = 0; 
    k = l; 
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    
    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }

    
    while (j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}


void mergeSort(int arr[], int l, int r)
{
    if (l < r)
    {
        
        int m = l+(r-l)/2;

        
        mergeSort(arr, l, m);
        mergeSort(arr, m+1, r);

        merge(arr, l, m, r);
    }
}

int main () {
  int i,n,x;


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
  mergeSort(a,0,n-1);

  cout<<"\nSorted numbers(using merge sort):"<<endl;
      for(i=0;i<n;i++)
  {
    cout<<a[i]<<" ";
  }



  return 0;
  }
