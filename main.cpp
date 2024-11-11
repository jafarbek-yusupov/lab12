#include <iostream>
#include <numeric>
#include <vector>
using namespace std;
#define rp(i,a,b)   for(int i=a; i<b; i++)
typedef vector<int> vi;

const int SIZE = 4;

double sumColumn(double m[][SIZE], int rowSize, int columnIndex) {
    double sum = 0.0;
    if (columnIndex < 0 || columnIndex >= SIZE){    cout << "Invalid column index!" << endl;    return 0.0;}
    rp(i,0, rowSize){   sum += m[i][columnIndex];}
    return sum;
}

void pr1() {
    int m, n;  cin >> m >> n;
    vector<vector<int>> v(m, vector<int>(n, 0));
    rp(i,0,m){ rp(j,0, n){    cin >> v[i][j];} }
    rp(i,0,m){ cout << accumulate(v[i].begin(), v[i].end(), 0) << endl;}
   // rp(i, 0, n){ cout << sumColumn(v, n, clm);}
}

int main(){
    pr1();
    return 0;
}