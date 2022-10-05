/// Даны натуральное число n, действительные числа a1,..., an. Вычислить: в) |a1| + ... + |an|;
/// @author Саранчин К.А.
/// Проверка для гит коммит
/// Вторая проверка
/// Переход на другую ветку

#include <iostream>
#include <math.h> 
#include <exception>
#include "SumMassiv.h"

using namespace std;
using namespace massiv;
 
int main(){
    srand(time(NULL));
    double sum;/// Сумма
    float n;/// Размер массива
    int k;/// Вспомогательный размер массива для проверки типа вводимого числа
    char yes;

    cout << "Enter size of array: ";
    cin >> n;
    k = (int)n;

    double *arr = new double[k]; /// Массив вещественных чисел

    try{

        cout << "Enter an array from the keyboard? \n";
        cout << "Yes = Y or No = N" << " : ";
        cin >> yes;
        if (yes == 'Y')  inputArray(arr, n); 
        //inputArray(arr, n);/// Ввод элементов массива с клавиатуры
        if (yes == 'N') randArray(arr, n);
        
        outputArray(arr, n);

        sum = sumArray(arr,n); /// Расчёт суммы элементов
     

        cout << "Sum = " << sum << endl; /// Вывод результата
    

    }

    catch (invalid_argument e){ /// Проверка исключительных ситуаций
        cout << e.what();
    }
    
    
    delete[]arr;
    return 0;
}