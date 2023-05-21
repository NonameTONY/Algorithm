#include <iostream>

using namespace std;

// Процедура сортировки пузырьком с алгоритмом всплытия
void Sinking_sort(int arr[], int size){
    int temp;

    // Внешний цикл для прохода по массиву в обратном порядке
    for(int i = size; i > 0; i--){
        // Внутренний цикл для сравнения текущего элемента с предыдущими
        for(int j = i-1; j >= 0; j--){
            // Если текущий элемент больше следующего, происходит обмен значениями
            if(arr[j] > arr[i]){
                for(int j = 0; j < size; j++){
                    cout << arr[j] << " ";
                }
                cout << "\n";
                temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
}

int main(){
    int arr[] = {5, 2, 9, 1, 7};

    cout << "Исходный массив: ";
    // Выводим исходный массив
    for(int i = 0; i < 5; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    // Вызываем процедуру сортировки пузырьком с алгоритмом всплытия
    Sinking_sort(arr, 5);

    cout << "Отсортированный массив: ";
    // Выводим отсортированный массив
    for(int i = 0; i < 5; i++){
        cout << arr[i] << " ";
    }

    return 0;
}
