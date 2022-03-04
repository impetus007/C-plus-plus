 int pivotindex = start + count;
    int temp = arr[start];
    arr[start] = arr[pivotindex];
    arr[pivotindex] = temp;