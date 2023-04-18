#include <iostream>

using std::cout;
using std::endl;

// Сортирует массив вне зависимости - отрицательное число или положительное (т.е. по модулю)
void sortAbs(int* arr, const int arrSize) {
    for (int i = 0; i < arrSize; ++i) {
        if (arr[i] > 0 && std::abs(arr[i]) > 0) break;
        for (int j = i + 1; j < arrSize; ++j) {
            if (std::abs(arr[i]) > std::abs(arr[j])) {
                std::swap(arr[i], arr[j]);
            }
        }
    }
}

int main() {
    int arr[] = {-3, -100,-50, -5, 1, 10, 15};
    int arrSize = sizeof(arr) / sizeof(arr[0]);

    cout << "-----AFTER-----" << endl;
    for (int i : arr) cout << i << " ";

    sortAbs(arr, arrSize);

    cout << endl;
    cout << "-----BEFORE----" << endl;
    for (int i : arr) cout << i << " ";
    cout << endl;
}