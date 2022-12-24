// brute force- just swap the arr values whenever any duplicate element is found.
// maintain a pointer to store the previous value
int remove_duplicate(int arr[], int n)
{
    int ans = 0, idx = 0, pre = arr[0];
    for (int i = 0; i < n; i++)
    {
        ans++;
        int temp = arr[i];
        swap(arr[i], arr[idx++]);
        while (i < n && temp == arr[i + 1])
            i++;
    }
    return ans;
}

// optimized:- traverse the array noting the count of the repeated elements and 
// whenver unique elemnts occur store it in store it at i-count
int removeDuplicates(vector<int> &arr)
{
    int n = arr.size();
    int count = 0;
    for (int i = 1; i < n; i++)
    {
        if (arr[i - 1] == arr[i])
            count++;
        else
            arr[i - count] = arr[i];
    }
    return n - count;
}