// Siaod2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <vector>
#include "Siaod2.h"
using namespace std;

#define ROWS 3 //размеры для стат. массива
#define COLS 3


int main() {
    setlocale(LC_ALL, "rus");
    srand(time(NULL));

    int work = 100; //индикатор switch-case

    int arr[ROWS][COLS]; //static matrix


    vector< vector<float> > arr_v; // двумерный вектор


    while (work != 0) {
        system("cls");
        cout << "Лабораторная работа №2 ИКБО-13-21 Смольников А.Б. Вариант 20" << endl << endl;
        cout << "Меню\n";
        cout << "Задание 1 (статический массив)" << endl;
        cout << "Дана целочисленная квадратная матрица 3x3. Определить:1) сумму элементов в тех столбцах, которые не содержат отрицательных элементов 2) минимум среди сумм модулей элементов диагоналей, параллельных побочной диагонали матрицы." << endl;
        cout << "Задание 2 (динамический массив)" << endl;
        cout << "Аналогично с заданием 1 " << endl;
        cout << "Задание 3 (вектор)" << endl;
        cout << "Множество попарно различных плоскостей в трехмерном пространстве задано перечислением трех точек, через которые проходит каждая из плоскостей. Выбрать максимальное подмножество попарно непараллельных плоскостей" << endl;
        cout << "0) Выход\n";
        cout << "Ваш выбор: ";
        cin >> work;
        system("cls");
        cout << "Лабораторная работа №2 ИКБО-13-21 Смольников А.Б. Вариант 20" << endl << endl;


        //reinterpret_cast<int*>(arr) используется для преобразования двумерного массива в одномерную развертку


        switch (work) {
        case 1: {
            cout << "Задание 1 (статический массив)" << endl;
            fillArr(reinterpret_cast<int*>(arr), ROWS, COLS);
            printArr(reinterpret_cast<int*>(arr), ROWS, COLS);
            cout <<"Ответ на пункт 1: " << first_static(reinterpret_cast<int*>(arr), ROWS, COLS) << endl;
            cout << "Ответ на пункт 2: " << second_static(reinterpret_cast<int*>(arr), ROWS, COLS) << endl;

            system("pause");
            break;
        }
        case 2: {

            cout << "Задание 2 (динамический массив)" << endl;
            cout << "Введите размер квадратной матрицы" << endl;
            int x;
            cin >> x;


            int** arr_d = new int* [x];
            for (int i = 0; i < x; i++) arr_d[i] = new int[x]; //объявление дин. массива

            

            fillArr(reinterpret_cast<int*>(arr_d), x, x);
            printArr(reinterpret_cast<int*>(arr_d), x, x);
            cout << "Ответ на пункт 1: " << first_static(reinterpret_cast<int*>(arr_d), x, x) << endl;
            cout << "Ответ на пункт 2: " << second_static(reinterpret_cast<int*>(arr_d), x, x) << endl;

            system("pause");
            break;
        }
        case 3: {
            arr_v.clear();
            cout << "Задание 3 (вектор)" << endl;
            inpVector(arr_v);
            cout << "Answer: " << third_v(arr_v)<<endl;

            system("pause");
            break;
        }
        
        default: {
            break;
        }
        }

    }

    return(0);
}

