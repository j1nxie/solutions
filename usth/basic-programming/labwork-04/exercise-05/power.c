int power_normal(int x, int n) {
    int result = 1;
    for (int i = 0; i < n; i++) {
        result *= x; 
    }
    return result;
}

int power_recursive(int x, int n) {
    if (n == 0) {
        return 1;
    } else {
        return x * power_recursive(x, n - 1);
    }
}
