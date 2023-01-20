//sort 0,1 in given array
#include<iostream>
using namespace std;
void sort01(int arr[],int size)
{
	int i=0;
	int j=size-1;
	int step=0;
	while(i<j)
	{
		cout<<step;
		while(arr[i]==0&&i<j)
		{
			i++;
		}
		while(arr[j]==1&&i<j)
		{
			j--;
		}
		if(i<j)
	{
			swap(arr[i],arr[j]);
			
				i++;
		j--;
	}
	
	}
}
void printarray(int arr[],int size)
{
	for(int i=0;i<size;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}
main()
{
	int arr[6]={0,1,0,1,1,0};
	sort01(arr,6);
	printarray(arr,6);
}

