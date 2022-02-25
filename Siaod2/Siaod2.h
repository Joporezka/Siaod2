#pragma once
#ifndef __SIAOD2_H
#define __SIAOD2_H


int rrand(int range_min, int range_max); //��������� ��������� int � �������� ���������
//�����������
void fillArr(int arr[],int rows,int cols); //���������� �������
void printArr(int arr[], int rows, int cols);//����� ������� �� �����
int first_static(int arr[], int rows, int cols);//�������, �������� ����� �� 1 ����� ������
int second_static(int arr[], int rows, int cols);//�������, �������� ����� �� 2 ����� ������

//������������ ������ ���������� � ������� ��� ������������ �������

//������
void inpVector(std::vector<std::vector<float>>& arr_v); //���������� �������
bool checkPar(std::vector<float>& arr_v1, std::vector<float>& arr_v2); //�������� ���� ���������� �� ����������������(�� �������)
void equation_plane(std::vector<float> &arr_temp, float x1, float y1, float z1, float x2, float y2, float z2, float x3, float y3, float z3); //��������� ��������� ������� ������� �� 3 ������
int third_v(std::vector<std::vector<float> > &arr_v); //�������, �������� ����� �� ������� 3

#endif
