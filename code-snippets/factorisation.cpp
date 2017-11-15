void factorise(long n) {
    if (n < 0) {
        cout << "-1 ";
        n = -n;
    }

    for (long i = 2; i*i <= n; ++i) {
        if (n%i != 0) continue;

        long ex = 0;
        while (n%i == 0) {
            ++ex;
            n /= i;
        }

        cout << i << "^" << ex << " ";
    }
    if(n > 1) {
        cout << n;
    }
}