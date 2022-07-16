vector<vector<int>> getRanges(string &s){
    /*  This function accepts a binary string and compresses them into continuous ranges of same element.
        and stores the indices of beginning and ending of those ranges. (Indices are 0-based)
        
        For e.g. s = "0001100001111100"
        this function will return {{0,2},{3,4},{5,8},{9,13},{14,15}};

        However this doesn't tell which element it starts with? 0 or 1? So handle that explicitly.
     */
    int n = s.length();
    char last = '.';
    vector<vector<int>> res;

    for(int i=0;i<n;i++){
        if(s[i] == last){
            res.back()[1]++;
        }
        else{
            res.push_back({i,i});
            last = s[i];
        }
    }

    return res;
}
