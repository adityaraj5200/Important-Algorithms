vector<int> nsl(vector<int> &vec){
    const int n = vec.size();
    vector<int> result(n,-1);
    stack<int> stk;
    for(int i=0;i<n;i++){
        while(!stk.empty() && vec[i] <= vec[stk.top()])
            stk.pop();
        result[i] = !stk.empty() ? stk.top() : -1;
        stk.push(i);
    }
    return result;
}
