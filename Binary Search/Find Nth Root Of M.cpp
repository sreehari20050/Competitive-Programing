
int func(long long mid, int n, int x) {
    long long ans = 1;
    for (int i = 0; i < n; i++) {
        ans *= mid;
        if (ans > x) { // Break if ans exceeds x to prevent unnecessary computation
            return 2;
        }
    }
    if (ans == x) return 0;
    if (ans < x) return 1;
    return 2;
}

int NthRoot(int n, int x) {
    if (x == 0) return 0; // Special case: nth root of 0 is 0
    long long low = 1, high = x;
    int ans = -1;

    while (low <= high) {
        long long mid = (low + high) / 2;
        int result = func(mid, n, x);

        if (result == 0) { // Found exact root
            return mid;
        } else if (result == 1) { // mid^n is less than x
            low = mid + 1;
        } else { // mid^n is greater than x
            high = mid - 1;
        }
    }
    return ans; // If no exact root exists, return -1
}
