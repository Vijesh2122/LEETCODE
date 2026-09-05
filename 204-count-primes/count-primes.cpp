class Solution {
public:
    int countPrimes(int n) {

        if (n <= 2)
            return 0;

        vector<char> isPrime(n, 1);

        isPrime[0] = 0;
        isPrime[1] = 0;

        int count = n - 2;

        for (int i = 2; i * i < n; i++) {

            if (isPrime[i]) {

                for (int j = i * i; j < n; j += i) {

                    if (isPrime[j]) {
                        isPrime[j] = 0;
                        count--;
                    }
                }
            }
        }

        return count;
    }
};