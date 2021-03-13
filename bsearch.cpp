int binary_search(int search_value, int lst[], int elements) {
    int counter = 0;
    int low, high, mid;

    low = 0;
    high = elements - 1;

    while (low <= high) {
        counter++;
        mid = (low + high) / 2;
        if (lst[mid] == search_value) {
            return counter;
        }
        else if (search_value < lst[mid]){
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }
    return counter;
}