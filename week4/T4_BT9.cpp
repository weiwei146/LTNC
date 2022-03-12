void sort(float array[], int size, bool isAscending) {
    if (isAscending==true) {
        sort(array, array + size);
    } else {
        sort(array, array + size, greater<float>());
    }
}