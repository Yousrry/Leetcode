class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int mul=1 ;
       std::vector <int> ans(nums.size()); 
        for(int i=0; i<nums.size(); i++) {
            ans[i] = mul ;
            mul *= nums[i] ;
            
        }
        mul =1;
        for(int i=nums.size()-1; i>=0; i--) {
            ans[i] *= mul ;
            mul *= nums[i] ;
                        
        }
        return ans ;
    }
        /*    
        for(int i=0; i<nums.size(); i++) {
            if (nums[i]==0)
                continue;
            else
                ans[i] = ans[i]/nums[i] ;
        }
        return ans ;
    }
    */
};
/* 
         for(int i=0; i<nums.size(); i++) {
           for (int j=0; j<nums.size();j++) {
                if (j==i) 
                    continue ;
                else
                    mul *= nums[j] ;
            }
            ans[i]= mul ;
            mul =1 ;
        }
        return ans ;
        
    }*/
