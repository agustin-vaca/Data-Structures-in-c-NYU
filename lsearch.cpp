int linear_search(int search_value, int lst[], int elements) {
    int counter = 0;
    for (int i = 0; i < elements; i++) {
        counter++;
        if (lst[i] == search_value) {
            return counter;
        }
    }
    return counter;
}