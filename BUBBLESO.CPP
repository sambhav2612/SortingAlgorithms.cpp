#include<iostream.h>
#include<conio.h>
void bubbleSort(int ar[],int n)
{
  for(int i=0;i<n;i++)
    for(int j=0;j<n-i-1;j++)
      if(ar[j]>ar[j+1])
      {
	int temp=ar[j];
	ar[j]=ar[j+1];
	ar[j+1]=temp;
      }
}
void main()
{
	clrscr();
	int arr[10],n,k,i,item;
	cout<<"Enter size of array (max. 10 elements) : ";
	cin>>n;
	cout<<"Enter elements in array : "<<endl;
	for(i=0;i<n;i++)
	{
	  cin>>arr[i];
	}
	bubbleSort(arr,n);
	cout<<"Sorted array : "<<endl;
	for(i=0;i<n;i++)
	{
	  cout<<arr[i]<<endl;
	}
	getch();
}