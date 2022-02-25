#pragma once
#ifndef __SIAOD2_H
#define __SIAOD2_H


int rrand(int range_min, int range_max); //случайная генерация int в заданном диапазоне
//статический
void fillArr(int arr[],int rows,int cols); //заполнение массива
void printArr(int arr[], int rows, int cols);//вывод массива на экран
int first_static(int arr[], int rows, int cols);//функция, выдающая ответ на 1 пункт задачи
int second_static(int arr[], int rows, int cols);//функция, выдающая ответ на 2 пункт задачи

//динамический массив передается в функции для статического массива

//вектор
void inpVector(std::vector<std::vector<float>>& arr_v); //заполнение вектора
bool checkPar(std::vector<float>& arr_v1, std::vector<float>& arr_v2); //проверка двух плоскостей на непараллельность(по нормали)
void equation_plane(std::vector<float> &arr_temp, float x1, float y1, float z1, float x2, float y2, float z2, float x3, float y3, float z3); //получение координат вектора нормали по 3 точкам
int third_v(std::vector<std::vector<float> > &arr_v); //функция, выдающая ответ на задание 3

#endif
