/*@ requires n>0;
    requires read_valid(a + (0..n-1))

    behavior a:
    assumes 


*/

int min(int a[], int n) {
    int j = 0;
    for(int i = 0; i < n; i++) {
        if(a[j] > a[i]){
            j = i;
        }
    }

    return j;
}

int searchmin(int a[], int x, int n){
    for(int i = 0; i < n; i++) {
        if(a[i] == x) {
            return min(a, n);
        } else {
            return -1;
        }
    }
}