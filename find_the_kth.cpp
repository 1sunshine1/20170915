int __find_kth_number(int *num1, int *num2, int len1, int len2, int k) {
    if (len1 == 0) return num2[k - 1];
    if (len2 == 0) return num1[k - 1];
    if (k == 1) {
        return num1[0] > num2[0] ? num2[0] : num1[0];
    }
    int a1, b1;
    a1 = len1 < k / 2 ? len1 : k / 2;
    b1 = k - a1;
    if (num1[a1 - 1] < num2[b1 - 1]) {
        num1 += a1;
        len1 -= a1;
        k -= a1;
    } else {
        num2 += b1;
        len2 -= b1;
        k -= b1;
    }
    return __find_kth_number(num1, num2, len1, len2, k);
}
