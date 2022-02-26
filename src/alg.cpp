// Copyright 2021 NNTU-CS

int cbinsearch(int *arr, int size, int value) {
  int count = 0;
  for (int i = 1; i <= size; i++) {
    if (arr[i] == value)
      count++;
  }
  return count;
}
