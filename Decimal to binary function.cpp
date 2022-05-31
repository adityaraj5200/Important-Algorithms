void decimalToBinary(int val,int bits=8){
    cout<<setw(4)<<val<<" -> ";
    stack<int> stk;
    while(bits--){
        stk.push(val&1);
        val >>= 1;
    }
    while(!stk.empty()){
        cout<<stk.top();
        stk.pop();
    }
    cout<<endl;
}
