class Solution {
public:
    vector<int> twoSum(vector<int>& v, int t) {
        int n=v.size();
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(v[i]+v[j]==t) 
                return {i,j};
}
   }
        return {};
        
    }
};