class Solution {
public:
    int jump(vector<int>& nums) {
        int n = nums.size();
        if (n == 1) return 0; 

        int jumps = 0;     
        int farthestIndex = 0;   
        int currentJumpMax = 0; 
        int i = 0;          

        while (currentJumpMax < n - 1) { 
            while (i <= currentJumpMax) { 
                farthestIndex = max(farthestIndex, i + nums[i]);
                ++i;
            }
            ++jumps;
            currentJumpMax = farthestIndex;

            if (currentJumpMax >= n - 1) break;
        }

        return jumps;
    }
};
