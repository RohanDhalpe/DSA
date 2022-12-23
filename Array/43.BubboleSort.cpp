#include <bits/stdc++.h> 
void bubbleSort(vector<int>& arr, int n)
{   
  for(int i=0;i<n-1;i++) //
  {
      for(int j=0;j<n-1-i;j++) //j always go till prevoius position of i
      {   if(arr[j]>arr[j+1])  // as last position goes on sorting
          {
              swap(arr[j],arr[j+1]);
          }
      }
   }
}
