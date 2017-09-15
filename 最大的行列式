int calc_matrix(int arr[3][3], int n) {
    if (n == 2) {
        return arr[0][0] * arr[1][1] - arr[0][1] * arr[1][0];
    }
    int k, sum, i, j;
    int x, y;
    sum = 0;
    for (i = 0; i < n; ++i) {
        x = 0, y = i, k = 1;
        for (j = 0; j < n; ++j) {
            k *= arr[x][y];
            x += 1; y += 1;
            y %= n;
        }
        sum += k;
    }
    for (i = 0; i < n; ++i) {
        x = 0, y = i, k = 1;
        for (j = 0; j < n; ++j) {
            k *= arr[x][y];
            x += 1; y -= 1;
            y = (y + n) % n;
        }
        sum -= k;
    }
    return sum;
}
