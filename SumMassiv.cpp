/// Даны натуральное число n, действительные числа a1,..., an. Вычислить: в) |a1| + ... + |an|;
/// @author Саранчин К.А.

#include <iostream>
#include <exception>
#include <typeinfo>
#include <math.h>
#include <ctime>
#include <vector> 

using namespace std;

namespace massiv{
/*
/// Создания вектора 
    vector <double> myVec(n)
/// Заполнение вектора рандомно
    void myVector(double myVec, float size){

    for (int i = 0; i < size; i++)
    {
        array[i] = rand() % 50 + rand() % 100/ 100.0;
    }
} */

/// Проверка размера массива
    bool checkInt(float num){
    float s = 0.0001;
    if (abs((floor(num + 0.5) - num)) > s) /// Если число не целое
        return 1;
    else
    if (num <= 0) /// Если число равно нулю
        return 1;
    else return 0;
    }

/// Заполнение матрицы случайными числами
void randArray(double *array, float size){
    if(checkInt(size)) throw invalid_argument("Invalid argument: size of array error\n "); /// Проверка исключительных ситуаций
    if(array == nullptr) throw invalid_argument("Empty array");
    for (int i = 0; i < size; ++i)
     {
         array[i] = rand() % 50 + rand() % 100 / 100.0;
     } 
}

/// Ввод элементов матрицы с клавиатуры
void inputArray(double *array, float size){

    if(checkInt(size)) throw invalid_argument("Invalid argument: size of array error\n "); /// Проверка исключительных ситуаций
    if(array == nullptr) throw invalid_argument("Empty array");
    for(int i = 0; i < size; i++){
  
        cout << "a[" << i+1 << "]= ";
        cin >> array[i];
  
    }
}

/// Вывод элементов матрицы
void outputArray(double *array, float size){

    for(int i = 0; i < size; i++){

    cout << "a[" << i+1 << "]= "<< array[i] << endl;
    }
}

/// Сумма элементов матрицы
double sumArray(double *array, int size){

    double summ = 0;
    for(int i = 0; i < size; i++){
        
        summ += fabs(array[i]);
    }
    return summ; /// Вывод суммы
}
}

