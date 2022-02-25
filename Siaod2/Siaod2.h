#pragma once
#ifndef __SIAOD2_H
#define __SIAOD2_H


int rrand(int range_min, int range_max);
//static
void fillArr(int arr[],int rows,int cols);
void printArr(int arr[], int rows, int cols);
int first_static(int arr[], int rows, int cols);
int second_static(int arr[], int rows, int cols);

//dynamic
//same as static

//vect
void inpVector(vector<vector<float>> &arr_v);
bool checkPar(vector<float> &arr_v1, vector<float> &arr_v2);
void equation_plane(vector<float> &arr_temp, float x1, float y1, float z1, float x2, float y2, float z2, float x3, float y3, float z3);
int third_v(vector<vector<float> > &arr_v);

#endif
