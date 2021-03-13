void merge(int arr[], int left, int middle, int right) {;
    int lowRight, size;
    int *mergedArr;
    int iRight, iLeft, iRes;
    int i, iArr;

    lowRight = middle +1;
    size = right - left;
    mergedArr = new int[size];

    iLeft = left;
    iRight = lowRight;
    iRes = 0;

    while(iLeft <= middle && iRight <= right) {
        if (arr[iLeft] < arr[iRight]) {
            mergedArr[iRes] = arr[iLeft];
            iLeft++;
            iRes++;
        }
        else {
            mergedArr[iRes] = arr[iRight];
            iRight++;
            iRes++;
        }
    }

    while (iLeft <= middle){
        mergedArr[iRes] = arr[iLeft];
        iLeft++;
        iRes++;
    }

    while (iRight <= right) {
        mergedArr[iRes] = arr[iRight];
        iRight++;
        iRes++;
    }

    for (i = 0, iArr = left; i < size ; i++, iArr++){
        arr[iArr] = mergedArr[i];
    }

    delete []mergedArr;
}