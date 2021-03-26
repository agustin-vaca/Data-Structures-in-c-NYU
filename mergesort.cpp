void merge(int arr[], int left, int middle, int right);

void merge_sort(int arr[], int left, int right) {
    int midInd;

    if (left == right){
        return;
    }
    else {
        midInd = (left + right)/2;
        merge_sort(arr, left, midInd);
        merge_sort(arr, midInd+1, right);
        merge(arr, left, midInd, right);
    }
}