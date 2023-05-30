int hackerlandRadioTransmitters(vector<int> x, int k) {
    sort(x.begin(), x.end());
    int cnt = 0;
    int i = 0;
    
    while(i < x.size())
    {
        int pos = x[i] + k;
        while(i < x.size() && x[i] <= pos)
            i++;
        
        i -= 1;
        cnt++;
        
        pos = x[i] + k;
        while(i < x.size() && x[i] <= pos)
            i++;
    }
    return cnt;
}

