#include<iostream>
using namespace std;
void sort (int* arr, int n)
{
	while(1)
	{
		int swap=0;
		for (int i=0; i<n-1; i++)
		{
			if (arr[i]>arr[i+1])
			{
				int k=arr[i];
				arr[i]=arr[i+1];
				arr[i+1]=k;
				swap+=1;
			}
		}
		if (swap==0)
			break;
	}
}

int main ()
{
	int N;
	cin>>N;
	if(N==0||N<0)
		return 0;
	int* arr= new int[N];
	for (int i=0; i<N; i++)
		cin>>arr[i];
	sort(arr, N);
	for (int i=0; i<N; i++)
		cout<<arr[i]<<" ";
	cout<<endl;
	return 0;
}

