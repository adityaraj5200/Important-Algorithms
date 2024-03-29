bool isPrime(int n){
    // Corner cases
    if (n <= 1) return false;
    if (n <= 3) return true;

    // This is checked so that we can skip middle five numbers in below loop
    if (n % 2 == 0 || n % 3 == 0) return false;

    // Using concept of prime number can be represented in form of (6*n + 1) or(6*n - 1).
    // Hence we have to go for every multiple of 6 and
    // prime number would always be 1 less or 1 more than the multiple of 6.
    for (int i = 5; i * i <= n; i += 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;

    return true;
}
