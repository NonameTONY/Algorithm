#include <iostream>

using namespace std;

void Sdvig(int q, int e[q]){
    int w = e[0];
    e[0] = e[q-1];
    e[q-1] = w;
}

int main(){
    int x, y;
    cout << "Введите размер массива: ";
    cin >> x;

    int *arr = new int[x];

    cout << "Введите элементы массива: " << endl;
    for (int i = 0; i < x; i++){
        cin >> y;
        arr[i] = y;
    }

    Sdvig(x, arr);

    cout << "Массив после сдвига:" << endl;
    for(int i = 0; i < x; i++){
        cout << arr[i] << " ";
    }

    return 0;
}
