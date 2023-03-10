#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void Search(int x, int arr[x]){
    int y;
    cout << endl << "Какой элемент необходимо найти: " ;
    cin >> y;

    for(int i = 0; i < x; i++){
        if(arr[i] == y) cout << "arr[" << i << "] = " << arr[i] << endl; 
    }
}

int main(){

    srand(time(NULL));
    int x;

    cout << "Введите размер массива: ";
    cin >> x; 

    int *arr = new int[x]; 

    for(int i = 0; i < x; i++){
        arr[i] = rand() % 10 + 0;
    }

    cout << "Исходный массив:" << endl;
    for(int i = 0; i < x; i++){
        cout << arr[i] << " ";
    }

    Search(x, arr);

    return 0;

}
