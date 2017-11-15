#include <set>
...
set<unsigned int> primes {2, 3, 5};
...
bool isPrime(unsigned int n) {
    if (primes.find(n) != primes.end()) return true;

    if (n%2 == 0 || n%3 == 0) return false;
    for (unsigned int i = 5; i*i <= n; ++i) {
        if (n%i == 0 || n%(i+2) == 0) return false;
    }
    primes.insert(n);
    return true;
}
...