int print2largest(int arr[], int n)
{
    // code here
    int maxi = INT_MIN, smaxi = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > maxi)
        {
            smaxi = maxi;
            maxi = arr[i];
        }
        else if (arr[i] > smaxi && arr[i] != maxi)
            smaxi = max(smaxi, arr[i]);
    }
    return smaxi == INT_MIN ? -1 : smaxi;
}