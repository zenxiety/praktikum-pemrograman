for(int i = 0; i < n; i++){
        if(array[i] <= 100 || array[i] >= -100) {
            if(array[i] >= 0) {
                if(x > array[i]) {
                    x = array[i];
                }
            }
        }
    }

    for(int i = 0; i < n; i++){
        if(array[i] < 0) {
            m++;
            if(m == n) {
                x = 1;
            }
        }
    }