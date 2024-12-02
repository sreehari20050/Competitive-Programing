pair<int, int> getFloorAndCeil(vector<int> &a, int n, int x) {
    int floor = -1, ceil = -1;

    // Binary search for floor
    int low = 0, high = n - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (a[mid] <= x) {
            floor = a[mid]; // Update floor
            low = mid + 1;  // Move right to find a larger value ? x
        } else {
            high = mid - 1; // Move left to check smaller values
        }
    }

    // Binary search for ceil
    low = 0, high = n - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (a[mid] >= x) {
            ceil = a[mid]; // Update ceil
            high = mid - 1; // Move left to find a smaller value ? x
        } else {
            low = mid + 1; // Move right to check larger values
        }
    }

    return {floor, ceil};
}
