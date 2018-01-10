int find_target(int ** matrix, int n, int m, int target) {
	int head = 0, tail = n - 1, mid;
    while (head < tail) {
        mid = (head + tail) >> 1;
        if (matrix[mid][m - 1] < target) {
            head = mid + 1;
        } else {
            tail = mid;
        }
    }
    int indx = head;
    head = 0; tail = m - 1; 
    while (head <= tail) {
        mid = (head + tail) >> 1;
        if (matrix[indx][mid] == target) {
            return 1;
        } else if (matrix[indx][mid] < target) {
            head = mid + 1;
        } else {
            tail = mid - 1;
        }
    }
    return 0;
}
