ll modpow(ll x, ll n, ll m = mod) {
    if (x == 0 && n == 0) return 0; // undefined case
    
    ll res = 1;
    while (n > 0){
        if (n & 1)
            res = (res * x) % m;
        x = (x * x) % m;
        n /= 2;
    }
    return res;
}

ll modinv(ll x, ll m = mod) {
    return modpow(x, m - 2, m);
}
