#include <iostream>

using namespace std;

// Процедура сортировки пузырьком методом погружения
void Sort_bubble(int arr[], int size) {
    int temp;
    bool swapped;

    for (int i = 0; i < size - 1; i++) {
        swapped = false;
        for(int j = 0; j < size; j++){
            cout << arr[j] << " ";
        }
        cout << "\n";
        // Внутренний цикл для сравнения текущего элемента с оставшимися
        for (int j = i + 1; j < size; j++) {
            // Если текущий элемент больше следующего, меняем их местами
            if (arr[j] < arr[i]) {
                temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
                swapped = true;
            }
        }

        // Если на текущей итерации не было перестановок, выходим из внешнего цикла
        if (!swapped) {
            break;
        }
    }
}

int main() {
    int arr[] = {5, 2, 9, 1, 7};

    cout << "Исходный массив: ";
    // Выводим исходный массив
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Вызываем процедуру сортировки пузырьком
    Sort_bubble(arr, 5);

    cout << "Отсортированный массив: ";
    // Выводим отсортированный массив
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
