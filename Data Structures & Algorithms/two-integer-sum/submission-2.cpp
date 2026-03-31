class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<pair<int,int>> v;
        int n=nums.size(), i=0,j=nums.size()-1;
        for(int k=0;k<n;k++){
            v.push_back({nums[k],k});
        }
        sort(v.begin(), v.end());
        while(i<j){
            if(v[i].first+v[j].first==target) {
                if(v[i].second<v[j].second)return {v[i].second, v[j].second};
                else return {v[j].second, v[i].second};
            }
            else if (v[i].first+v[j].first<target) i++;
            else j--;
        }
        return {-1,-1};
        

        // unordered_map<int, int> unmap;
        // int n=nums.size();
        // for(int i=0;i<n;i++){
        //     auto it = unmap.find(target-nums[i]);
        //     if(it!=unmap.end()){
        //         return {it->second, i};
        //     }
        
        //     unmap.insert({nums[i],i});
        // }
        // return {-1,-1};
    }
};
