#include <iostream>

using namespace std;

// Процедура щейкерной сортировки
void Shaker_sort(int arr[], int size) {
    int temp;
    bool swapped;
    int left = 0;
    int right = size - 1;

    while (left <= right) {
        swapped = false;

        // Проход слева направо, перемещая наибольший элемент вправо
        for (int i = left; i < right; i++) {
            if (arr[i] > arr[i + 1]) {
                for(int j = 0; j < size; j++){
                    cout << arr[j] << " ";
                }
                cout << "\n";
                temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
                swapped = true;
            }
        }

        if (!swapped) {
            break;
        }

        right--;

        // Проход справа налево, перемещая наименьший элемент влево
        for (int i = right; i > left; i--) {
            if (arr[i] < arr[i - 1]) {
                for(int j = 0; j < size; j++){
                    cout << arr[j] << " ";
                }
                cout << "\n";
                temp = arr[i];
                arr[i] = arr[i - 1];
                arr[i - 1] = temp;
                swapped = true;
            }
        }

        if (!swapped) {
            break;
        }

        left++;
    }
}

int main() {
    int arr[] = {5, 2, 9, 1, 7};

    cout << "Исходный массив: ";
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    Shaker_sort(arr, 5);

    cout << "Отсортированный массив: ";
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
