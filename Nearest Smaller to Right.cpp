vector<int> nsr(vector<int> &vec){
    const int n = vec.size();
    vector<int> result(n,n);
    stack<int> stk;
    for(int i=n-1;i>=0;i--){
        while(!stk.empty() && vec[i] <= vec[stk.top()])
            stk.pop();
        result[i] = !stk.empty() ? stk.top() : n;
        stk.push(i);
    }
    return result;
}
