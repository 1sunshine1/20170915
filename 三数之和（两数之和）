int* three_sum(int *nums, int length, int target) {
    int *ans = malloc(sizeof(int) * 3);
    int sum = 0, left, right, i;
    for (i = 0; i < length - 2; i++) {
        left = i + 1;
        right = length - 1;
        sum = nums[i] + nums[left] + nums[right];
        while (left < right && sum != target) {
            if (sum < target) {
                sum = sum - nums[left] + nums[left + 1];
                left++;
            } else {
                sum = sum - nums[right] + nums[right - 1];
                right--;
            }
        }
        if (left < right) break;
    }
    ans[0] = i;
    ans[1] = left;
    ans[2] = right;
    return ans;
}
