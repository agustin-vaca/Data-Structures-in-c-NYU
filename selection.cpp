void swap(int *xp, int *yp);

void selection_sort(int arr[], int elements) {
    for (int i = 0; i < elements-1; i++) 
        { 
            int min_idx = i; 
            for (int j = i+1; j < elements; j++) 
                if (arr[j] < arr[min_idx]) 
                    min_idx = j; 
            swap(&arr[min_idx], &arr[i]);
        } 
}