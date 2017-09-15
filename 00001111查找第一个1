int find_first_location(int *num, int len, int target) {
	if (num[len - 1] < target) return -1;
    int head = 0, tail = len - 1, mid;
    while (head < tail) {
        mid = (head + tail) >> 1;
        if (num[mid] == target) {
            tail = mid;
        } 
        if (num[mid] < target) {
            head = mid + 1;
        }
    }
    return head;
}
