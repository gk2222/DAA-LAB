#include<bits/stdc++.h>
using namespace std;
struct Item
{
 int value,weight;
 //create constructor
 Item(int value,int weigth)
 {
 this->value=value;
 this->weight=weigth;
 }
};
bool cmp(struct Item a,struct Item b)
{
 double r1=(double) a.value/(double)a.weight;
 double r2=(double) b.value/(double)b.weight;
 return r1>r2;
}
//Greedy funtion to solve problem
double fractionalKnapsack(int W,struct Item arr[],int N)
{
 //Now first we sort the arry on the basis on their ratio
 sort(arr,arr+N,cmp);
 double finalvalue=0.0; //Result(value in knapsack)
 //looping through all Items
 for(int i=0;i<N;i++)
 {
 //if adding item won't overflow, add if completely
 if(arr[i].weight<=W)
 {
 W-=arr[i].weight;
 finalvalue+=arr[i].value;
 }
 //if we can't add current Item , add fraction part of it
 else{
 finalvalue+=arr[i].value*((double)W/(double)arr[i].weight);
 break;
 }
 }
 return finalvalue;
}
int main()
{
 int W=50; // weight of knapsack
 Item arr[]={{60,10},{100,20},{120,30}};
 int N=sizeof(arr)/sizeof(arr[0]);
 //call to funtion
 cout<<"Maximum value we can obtain= "<<fractionalKnapsack(W,arr,N);
 return 0;
} 