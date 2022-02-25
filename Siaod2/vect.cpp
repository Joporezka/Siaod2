using namespace std;
#include <iostream>
#include <cmath>
#include <vector>
#include "Siaod2.h"

void inpVector(vector<vector<float>> &arr_v) {
    vector <float> v_temp;
    cout << "¬ведите количество уникальных плоскостей: \n";
    int n,choose;
    float temp;
    cin >> n;
    cout << "¬ведите 0 дл€ ручного заполнение€, 1 дл€ автоматического:\n";
    cin >> choose;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 9; j++) {
            if (choose == 0) {
                cin >> temp;
            }
            else {
                temp = rrand(-20,20);
                cout << temp << " ";
            }
            
            v_temp.push_back(temp);
            
        }
        cout << endl;
        arr_v.push_back(v_temp);
    }
}

bool checkPar(vector<float>& arr_v1, vector<float>& arr_v2) {
	for (int i = 0; i < 2; i++) {
		if (arr_v1[i] / (float)arr_v2[i] != arr_v1[i+1] / (float)arr_v2[i+1]) {
			return(false);
		}
	}
	return(true);
}

void equation_plane(vector<float>& arr_temp, float x1, float y1, float z1, float x2, float y2, float z2, float x3, float y3, float z3) {

    float a1 = x2 - x1;
    float b1 = y2 - y1;
    float c1 = z2 - z1;
    float a2 = x3 - x1;
    float b2 = y3 - y1;
    float c2 = z3 - z1;
    arr_temp.push_back( b1 * c2 - b2 * c1);
    arr_temp.push_back(a2 * c1 - a1 * c2);
    arr_temp.push_back(a1 * b2 - b1 * a2);
    //arr_temp.push_back((-arr_temp[0] * x1 - arr_temp[1] * y1 - arr_temp[2] * z1));

}


int third_v(vector<vector<float> > &arr_v) {
    int cnt = 0;
	for (int i = 0; i < arr_v.size();i++) {
		for (int j = 0; i < arr_v.size(); i++) {
            if (i != j) {
                vector<float> eq1;
                equation_plane(eq1,arr_v[i][0], arr_v[i][1], arr_v[i][2], arr_v[i][3], arr_v[i][4], arr_v[i][5], arr_v[i][6], arr_v[i][7], arr_v[i][8]);
                vector<float> eq2;
                equation_plane(eq2,arr_v[j][0], arr_v[j][1], arr_v[j][2], arr_v[j][3], arr_v[j][4], arr_v[j][5], arr_v[j][6], arr_v[j][7], arr_v[j][8]);
                if (checkPar(eq1, eq2)) cnt++;
            }
		}
	}
    return(cnt);
}