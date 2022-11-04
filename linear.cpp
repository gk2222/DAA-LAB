#include<iostream>
using namespace std;
int Linear_Search(int Arr[],int n, int key)
{
 for(int i =0 ; i < n; i++)
 {
 if(Arr[i] == key)
 return i;
 }
 return -1;
}
int main()
{
 cout<<"Program for the implementation of the linear Search."<<endl;
 cout<<"Name : Onkar Jagtap \nRoll No : 20141261 \nBatch : I3 \n"<<endl;
 int n,ele;
 cout<<"Enter the number of the elements present in the array : ";
 cin>>n;
 int A[n];
 cout<<"Enter the elements of an array : ";
 for(int i = 0; i < n; i++)
 {
 cin>>A[i];
 }
 cout<<"Enter the key element that you want to find : ";
 cin>>ele;
 int index = Linear_Search(A,n,ele);
 if(index == -1)
 cout<<"The key element is not present in the array."<<endl;
 else
 cout<<"The key element found at the position = "<<index+1<<endl;
 return 0;
} 
