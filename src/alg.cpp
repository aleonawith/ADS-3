// Copyright 2021 NNTU-CS

int cbinsearch(int *arr, int size, int value) {
  int left = 0;
  int right = size - 1;
  int count = size + 1;
  int middle = size / 2;
  for (int i = 0; i < middle; i++) {
    if (arr[i] != value)
      count--;
  }
  for (int j = size; j >= middle; j--) {
    if (arr[j] != value)
      count--;
  }
  return count;
}
