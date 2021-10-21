/*  Problem Link : https://leetcode.com/problems/count-primes/ */

/* Below is the solution for the above problem */

class Solution {
public:
    int countPrimes(int n) 
    {
        if(n == 0 || n == 1 || n == 2)return 0;
        vector<int> arr(n+1);
        for(int i = 0; i <= n; i++)
        {
            arr[i] =1;
        }
        arr[0] = arr[1] = 0;
        for(int i = 2; i <= n; i++)
        {
            if(arr[i] == 1)
            {
                for(int j = 2; i*j <= n; j++)
                {
                    arr[i*j] = 0;
                }
            }
        }
        int res = 0;
        for(int i = 2; i < n; i++)
        {
            if(arr[i])res++;
        }
        return res;
    }
};
