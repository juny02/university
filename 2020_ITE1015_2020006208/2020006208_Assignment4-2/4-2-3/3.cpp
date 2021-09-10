#include <iostream>
#include<iomanip>
using namespace std;
void magicSquare(int** mat, int n)
{
	int a=1;
	int r=0, c=n/2;
	mat[r][c]=a++;
	while (a<n*n||a==n*n){
	if (a%n==1)
		r++;
	else 
	{r--;
	c++;
	if (c==n)
	{
		c=0;
	}
	if (r==-1)
	{
		r=n-1;
	}
	}
	mat[r][c]=a++;}
}
	

int main ()
{
	int N;
	cin>>N;
	if (N%2==0 || N<3)
		return 0;
	int ** mat=new int*[N];
	for (int i=0; i<N; i++)
		mat[i]=new int[N];
	magicSquare(mat, N);
	for (int i=0; i<N; i++)
	{
		for(int o=0; o<N; o++){
			cout.setf(ios::left);
			cout<<setw(3)<<mat[i][o]<<" ";}
		cout<<endl;
	}
	for (int i =0; i< N; i++)
		delete[] mat[i];
	delete[] mat;
	return 0;
}




