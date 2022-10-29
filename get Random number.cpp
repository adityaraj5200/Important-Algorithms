mt19937 rng;
int getRandomNumber(int l, int r){
    uniform_int_distribution<int> dist(l, r);
    return dist(rng);
}

void preprocess(){
    rng = mt19937(chrono::steady_clock::now().time_since_epoch().count());
}
