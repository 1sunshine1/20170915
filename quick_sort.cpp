int quick_select(int *nums, int left, int right, int k) {
    int x = left, y = right, z = nums[left];
    while (x < y) {
        while (x < y && nums[y] >= z) --y;
        if (x < y) nums[x++] = nums[y];
        while (x < y && nums[x] <= z) ++x;
        if (x < y) nums[y--] = nums[x];
    }
    
    nums[x] = z;
    if (x == k - 1) {
        return z;
    } else if (x > k - 1) {
        return quick_select(nums, left, x - 1, k);
    } else {
        return quick_select(nums, x + 1, right, k);
    }
    return 0;
}
