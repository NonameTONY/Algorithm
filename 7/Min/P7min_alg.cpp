#include <iostream>

using namespace std;

// Функция для поиска минимального элемента в массиве
int Search_min(int arr[], int start, int end) {
    int min_index = start;
    for (int i = start + 1; i < end; i++) {
        if (arr[i] < arr[min_index]) {
            min_index = i;
        }
    }
    return min_index;
}

// Процедура сортировки массива выбором
void Sort_exchange(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for(int j = 0; j < size; j++){
            cout << arr[j] << " ";
        }
        cout << "\n";
        // Находим индекс минимального элемента в оставшейся части массива
        int min_index = Search_min(arr, i, size);
        
        // Обмениваем минимальный элемент с текущим элементом
        swap(arr[i], arr[min_index]);
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
