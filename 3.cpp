#include<iostream>
using namespace std;

int main()
{
	int num[10];
	for(int i=0;i<10;i++)
	{
		cout<<"num["<<i<<"]"<<endl;
		cin>>num[i];
	}
	int start=0;
	int end=sizeof(num)/sizeof(num[0])-1;
	while(start<end)
	{int temp=num[start];
	num[start]=num[end];
	num[end]=temp;
	start++;
	end--;	
	}
	for(int j;j<10;j++)
	{
		cout<<num[j];
	}
	
	system("pause");
	return 0;
}
