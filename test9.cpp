#include <iostream>

int main() {
  int n;
  std::cout << "Enter the number of elements: ";
  std::cin >> n;

  // allocate memory for n elements using the new operator
  int* arr = new int[n];

  std::cout << "Enter the elements:" << std::endl;
  for (int i = 0; i < n; i++) {
    std::cin >> arr[i];
  }

  // sort the array in ascending order using the bubble sort algorithm
  for (int i = 0; i < n - 1; i++) {
    for (int j = 0; j < n - i - 1; j++) {
      if (arr[j] > arr[j + 1]) {
        // swap the elements using a temporary variable
        int temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
    }
  }

  std::cout << "The elements in ascending order are:" << std::endl;
  for (int i = 0; i < n; i++) {
    std::cout << arr[i] << " ";
  }

  // deallocate the memory using the delete operator
  delete[] arr;

  return 0;
}
