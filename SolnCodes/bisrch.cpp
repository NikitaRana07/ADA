#include <iostream>
#include <fstream>
#include<sstream>
#include <cstdlib>
using namespace std;

int comp=1;

int binarySearch(int arr[], int l, int r, int x) 
{ 
   if (r >= l) 
   { 
        int mid = l + (r - l)/2; 
  
        if (arr[mid] == x)  return mid; 
  
        if (arr[mid] > x)
		{	comp++;
		 	return binarySearch(arr, l, mid-1, x);
		} 
  
        
		comp++;        
		return binarySearch(arr, mid+1, r, x); 
   } 
  
	return -1; 
} 

int main (int argc,char* argv[]) {
	int i=0,k,n,j=0,t;
	string line;

	ifstream inFile;
	inFile.open(argv[1]);

	if (!inFile) {
	    cout << "Unable to open file";
	    exit(1);
	}

while(getline(inFile,line))
{
    stringstream   linestream(line);
    string         value;
    if(j==0){
    while(getline(linestream,value,','))
    {	      
	i++;
	//cout<<i<<" "<<j<<endl;   
	 
    }
    }
    j++;
//cout<<i<<" here "<<j<<endl; 
	
}
	n=i;
	k=j;
	int *a,*b;
	a=(int*)malloc(n*sizeof(int));
	b=(int*)malloc(k*sizeof(int));

	inFile.close();

	inFile.open(argv[1]);

	if (!inFile) 
	{
	    	cout << "Unable to open file";
	    	exit(1);
	}

	i=0,j=0;
	b[0]=0;
	while(getline(inFile,line))
	{
    		stringstream   linestream(line);
    		string         value;
		if(j==0){
    		while(getline(linestream,value,','))
    		{	stringstream val(value);
			val>>a[i];        		
			i++;
    		}
		}
		if(j!=0)
		{linestream>>b[j];}    
		j++;
	
	}
	
	inFile.close();

//Sorting of aaray. 
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

//Binary Search

	int num;
	
	int result;
  
	ofstream file;
	file.open (argv[2]);

	for(i=1;i<k;i++)
	{
		num=b[i];
		comp=1;
		result=binarySearch(a, 0, n-1, num);
		if(result == -1)
			{file<<num<<" not found"<<"\n";} 
		else       
		 	{file<<num<<" found at position "<<result+1<<" after "<<comp<<" comparisons\n";}
  	}
	
	

    file.close();

  return 0;
  }
