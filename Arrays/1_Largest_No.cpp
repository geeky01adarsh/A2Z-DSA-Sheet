int largest(vector<int> &arr, int n)
{
    int maxi = INT_MIN;
    for (int i = 0; i < n; i++)
        maxi = max(arr[i], maxi);
    return maxi;
}