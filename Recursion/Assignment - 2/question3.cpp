class Solution {
public:
    vector <int> dp;
    int steps(int num)
    {
        if(dp[num]!=-1) return dp[num];
        if(num==0) return 0; 
        if(num%2==0) return dp[num] = 1 + steps(num/2);
        else return dp[num] =  1 + steps(num-1); 
    }
    
    int numberOfSteps(int num) {
        dp.clear(); 
        dp.resize(1000005,-1); 
        return steps(num); 
        
    }
};
