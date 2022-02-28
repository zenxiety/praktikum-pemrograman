 // insertion sort (descending)
    for(int j = 1; j < n; j++) {
        i = j - 1;
        temp = arr[j];
        while(arr[i] < temp && i >= 0) {
            arr[i + 1] = arr[i];
            i--;
        }
        arr[i + 1] = temp;
    }