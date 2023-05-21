#include <iostream>

using namespace std;

// Функция для поиска индекса максимального элемента в массиве
int Search_max(int arr[], int start, int end) {
    int max_index = start;
    for (int i = start + 1; i < end; i++) {
        if (arr[i] > arr[max_index]) {
            max_index = i;
        }
    }
    return max_index;
}

// Процедура сортировки массива выбором
void Sort_exchange(int arr[], int size) {
    for (int i = size - 1; i > 0; i--) {
        for(int j = 0; j < size; j++){
            cout << arr[j] << " ";
        }
        cout << "\n";
        // Находим индекс максимального элемента в оставшейся части массива
        int max_index = Search_max(arr, 0, i + 1);
        
        // Обмениваем максимальный элемент с последним элементом в оставшейся части
        swap(arr[max_index], arr[i]);
    }
}

int main() {
    int arr[] = {5, 2, 9, 1, 7};

    cout << "Исходный массив: ";
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    Sort_exchange(arr, 5);

    cout << "Отсортированный массив: ";
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
