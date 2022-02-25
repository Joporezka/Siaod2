// Siaod2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <vector>
#include "Siaod2.h"
using namespace std;

#define ROWS 3
#define COLS 3

int main()
{   
    int arr[ROWS][COLS];
    fillArr(reinterpret_cast<int*>(arr), ROWS, COLS);
    printArr(reinterpret_cast<int*>(arr), ROWS, COLS);
    cout << first_static(reinterpret_cast<int*>(arr), ROWS, COLS)<<endl;
    cout << second_static(reinterpret_cast<int*>(arr), ROWS, COLS)<<endl;

    int** arr_d = new int* [ROWS];
    for (int i = 0; i < ROWS; i++) arr_d[i] = new int[COLS];

    fillArr(reinterpret_cast<int*>(arr_d), ROWS, COLS);
    printArr(reinterpret_cast<int*>(arr_d), ROWS, COLS);
    cout << first_static(reinterpret_cast<int*>(arr_d), ROWS, COLS) << endl;
    cout << second_static(reinterpret_cast<int*>(arr_d), ROWS, COLS) << endl;


    //vector<vector<float> > arr_v;
    vector <vector<float>> arr_v(3, vector<float>(6, 0));
    inpVector(arr_v);
    //cout << third_v(arr_v);





}

