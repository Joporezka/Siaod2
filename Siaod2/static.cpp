#pragma once
using namespace std;
#include <iostream>
#include <cmath>

int rrand(int range_min, int range_max) {
	return rand() % (range_max - range_min + 1) + range_min;
}

void fillArr(int arr[],int rows, int cols) {
	cout << "Type 0 for manual fill, 1 for random\n";
	int inp;
	cin >> inp;
	if (inp == 0) {
		for (int i = 0; i < rows; i++) {
			for (int j = 0; j < cols; j++) {
				cin>>arr[i * cols + j];
			}
		}
	}
	else {
		for (int i = 0; i < rows; i++) {
			for (int j = 0; j < cols; j++) {
				arr[i * cols + j] = rrand(-100,100);
			}
		}
	}
}

void printArr(int arr[], int rows, int cols) {
	cout << "Your array:\n";
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			cout<< arr[i * cols + j]<<" ";
		}
		cout << endl;
	}
}

int first_static(int arr[], int rows, int cols) {
	int sum_total = 0, sum_temp = 0;
	for (int j = 0; j < cols; j++) {
		sum_temp = 0;
		for (int i = 0; i < rows; i++) {
			if (arr[i * cols + j] >= 0) {
				sum_temp += arr[i * cols + j];
			}
			else {
				sum_temp = -1;
				break;
			}
		}
		if (sum_temp != -1) sum_total += sum_temp;

	}
	return(sum_total);
}

int second_static(int arr[], int rows, int cols) {
	int min=arr[0];
	for (int i = 0; i < rows - 1; i++)
	{
		int sum = 0;
		for (int j = 0; j <= i; j++)
			sum += abs(arr[(i - j)*cols+j]);
		if (sum < min)min = sum;
	}

	for (int i = 1; i < rows; i++)
	{
		int sum = 0;
		for (int j = 0; j + i < rows; j++)
			sum += abs(arr[(rows - 1 - j)*cols + i + j]);
		if (sum < min) min = sum;
	}
	return min;
}

