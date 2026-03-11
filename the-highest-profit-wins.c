void min_max (const int arr[], int count, int *min, int *max) {
  *min = *max = arr[0];
  for (int i = 1; i < count; i++) {
    if (arr[i] < *min) {
      *min = arr[i];
    } else if (arr[i] > *max) {
      *max = arr[i];
    }
  }
}
