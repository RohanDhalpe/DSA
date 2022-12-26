vector<long long> printFirstNegativeInteger(long long int arr[],
                                             long long int N, long long int K) {
                                                 
        int i=0;
        int j=0;
        deque<long long>ans;
        vector<long long>res;
        while(j<N){
            if(arr[j]<0){
                ans.push_back(arr[j]);
            }
            if(j-i+1<K){
                j++;
            }
            else if(j-i+1==K)
            {
                if(ans.size()==0){
                    res.push_back(0);
                }else{
                    res.push_back(ans.front());
                    if(arr[i]<0) { ans.pop_front();}
                    
                }
               i++;
               j++;    
            }
        }   
       return res;
           
