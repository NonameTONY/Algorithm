#include <iostream>

using namespace std;

// Процедура сортировки пузырьком методом погружения
void Sort_bubble(int arr[], int size){
    int temp;

    // Внешний цикл для прохода по всем элементам, кроме последнего
    for(int i = 0; i < size-1; i++){
        // Внутренний цикл для сравнения текущего элемента с оставшимися
        for(int j = i+1; j < size; j++){
            // Если текущий элемент больше следующего, меняем их местами
            if(arr[j] < arr[i]){
                for(int z = 0; z < size; z++){
                    cout << arr[z] << " ";
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

    // Вызываем процедуру сортировки пузырьком
    Sort_bubble(arr, 5);

    cout << "Отсортированный массив: ";
    // Выводим отсортированный массив
    for(int i = 0; i < 5; i++){
        cout << arr[i] << " ";
    }

    return 0;
}
