#include<iostream>
int main()
{
     int arr[5]={23,65,3,21,8};
     int tmp;
     for(int i=0;i<5;i++)
     {
         for(int j=i+1;j<5;j++)
         {
             if(arr[j]<arr[i])
             {
                  tmp=arr[i];
                  arr[i]=arr[j];
                  arr[j]=tmp;
              }
         }
    }
    
    for(int i=0;i<5;i++)
    {
       cout<<arr[i]<<" ";
     }
     return 0;
  }   
         
