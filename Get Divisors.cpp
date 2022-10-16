vector<int> getDivisors(int num){
    vector<int> divisors;
    int i=1;
    while(i*i < num){
        if(num%i == 0){
            divisors.push_back(num/i);
            divisors.push_back(i);
        }
        i++;
    }
    if(num%(i*i) == 0)
        divisors.push_back(i);

    return divisors;
}
