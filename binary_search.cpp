#include<iostream>
using namespace std;
int Binary_Search(int Arr[], int n, int key)
{
 int low = 0;
 int high = n-1;
 while(low <= high)
 {
 int mid = low + (high - low)/2;
 if(Arr[mid] == key)
 return mid;
 else if(Arr[mid] > key) // Left side of the array
 high = mid - 1;
 else // Right side of the array
 low = mid + 1;
 }
 return -1; // If the element is not found
}
int main()
{
 cout<<"Program for the implementation of the Binary Search."<<endl;
 cout<<"Name : Jagatap Onkar \nRoll No : 20141261 \nBatch : I3 \n"<<endl;
 int n,ele;
 cout<<"Enter the number of the elements present in the array : ";
 cin>>n;
 int A[n];
 cout<<"Enter the elements of an array in sorted order : ";
 for(int i = 0; i < n; i++)
 {
 cin>>A[i];
 }
 cout<<"Enter the key element that you want to find : ";
 cin>>ele;
 int index = Binary_Search(A,n,ele);
 if(index == -1)
 cout<<"The key element is not present in the array."<<endl;
 else
 cout<<"The key element found at the position = "<<index+1<<endl;
 return 0;
}