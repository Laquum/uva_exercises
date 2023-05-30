vector<int> rotateLeft(int d, vector<int> arr) {
    int i;
    while(d--)
    {
        int tail = arr[0];
        for(i = 1; i < arr.size(); i++)
            arr[i - 1] = arr[i];
        arr[i - 1] = tail;
    }
    return arr;
}
