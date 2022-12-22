class Solution 
{
    public:
    
    bool isPossible(int arr[],int N,int mid,int M){
         int student=1;
         int pagesum=0;
         
        for(int i=0;i<N;i++){
            pagesum=pagesum+arr[i];
            
            if(pagesum>mid){
                student++;
                pagesum=arr[i];
            }
        }
      return student<=M;    
    }
    
    //Function to find minimum number of pages.
    int findPages(int arr[], int N, int M) 
    {  int low=*max_element(arr,arr+N);
       int sum=accumulate(arr,arr+N,0);
       int high=sum;
       int ans=0;
       
      if(N<M){
          return -1;
      }
       while(low<=high)
       {    int mid=(low+high)/2;
           if(isPossible(arr,N,mid,M)==true){
               ans=mid;
               high=mid-1;
           }else{
               low=mid+1;
           }
       }
      return ans;
       
    }
};
