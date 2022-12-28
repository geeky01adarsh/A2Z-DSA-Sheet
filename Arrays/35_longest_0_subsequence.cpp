int maxLen(vector<int> &arr, int n)
{
    unordered_map<int, int> mp;
    int ans = 0, currSum = 0;
    for (int i = 0; i < n; i++)
    {
        currSum += arr[i];
        if (!mp.count(currSum))
            mp[currSum] = i;
        if (currSum == 0)
            ans = i + 1;
        else if (mp.count(currSum) && mp[currSum] != i)
        {
            ans = max(ans, i - mp[currSum]);
        }
    }
    return ans;
}