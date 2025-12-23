    // int noOfSwaps(vector<pair<int,int>>& arr){
    //     sort(arr.begin(),arr.end());
    //     vector<bool> vis(arr.size(),false);
    //     int swaps=0;
    //     for(int i=0;i<arr.size();i++){
    //         if(vis[i] || arr[i].second==i) continue;

    //         int cycleSize=0;
    //         int j=i;
    //         while(!vis[j]){
    //             vis[j]=true;
    //             j=arr[j].second;
    //             cycleSize++;
    //         }   
    //         swaps+=cycleSize-1;
    //     }
    //     return swaps;
    // }

    int noOfSwaps(vector<int>& arr){
        vector<int> sorted=arr;
        sort(sorted.begin(),sorted.end());

        unordered_map<int,int> mp;
        for(int i=0;i<sorted.size();i++){
            mp[sorted[i]]=i;
        }

        int swaps=0;
        for(int i=0;i<arr.size();i++){
            while(mp[arr[i]] != i){
                swap(arr[i],arr[mp[arr[i]]]);
                swaps++;
            }

        }
        return swaps;
    }
