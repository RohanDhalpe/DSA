
    
    //Function to return length of longest subsequence of consecutive integers.
    int findLongestConseqSubseq(int arr[], int n)
    {
       sort(arr,arr+n);
       int lastSmallest=INT_MIN;
       int count=1;
       int largest=-1;
       
       for(int i=0;i<n;i++)
       {  
           if(arr[i]-1==lastSmallest)
           {
               count=count+1;
               lastSmallest=arr[i];
           }else if(arr[i]!=lastSmallest){
               count=1;
               lastSmallest=arr[i];
           }
         largest=max(largest,count);
       }
       return largest;
    }


