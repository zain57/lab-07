#include<iostream>
#include<iomanip>
using namespace std;
void print_array(int arr[][20],int a)
{
	int c;
	int d;
	cout<<"\n\n"<<setw(4)<<"";
	for(c=0;c<a;c++)
	{
		cout<<setw(3)<<"("<<c+1<<")";
		cout<<"\n\n";
	}
	for(c=0;c<a;c++)
	{
		cout<<setw(3)<<"("<<c+1<<")";
		for(d=0;d<a;d++)
		{
			cout<<setw(4)<<arr[c][d];
			
		}
		cout<<"\n\n";
	}
}
int main()
{
	int a,b,k;
	cout<<"enter number of vertexs";
	cin>>k;
	int arr[20][20];
	cout<<"\n";
	for(a=0;a<k;a++)
	{
		for(b=a;b<k;b++)
		{
			if(a!=b)
			{
				cout<<"enter if the vertex "<<a+1<<"is ";
				cin>>arr[a][b];
				 arr[b][a]=arr[a][b];
				 
			}
			else 
			arr[a][b]=0;
		}
	}
	print_array(arr,k)}

}
