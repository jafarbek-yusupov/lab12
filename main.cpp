#include <iostream>
#include <numeric>
#include <vector>
using namespace std;
#define rp(i,a,b)   for(int i=a; i<b; i++)
typedef vector<int> vi;
const int SIZE = 4;

//lab pr1
double sumColumn(double m[][SIZE], int rowSize, int columnIndex) {
    double sum = 0.0;
    if (columnIndex < 0 || columnIndex >= SIZE){    cout << "Invalid column index!" << endl;    return 0.0;}
    rp(i,0, rowSize){   sum += m[i][columnIndex];}
    return sum;
}
//lab pr2
double sumMajorDiagonal(const double m[][SIZE]) {
    double sum = 0.0;
    for (int i = 0; i < SIZE; i++){    sum += m[i][i];}
    return sum;
}
//lab pr3
void multiplyMatrix(const double a[][N], const double b[][N], double c[][N]) {
    // init matrix C to zero
    for (int i = 0; i < N; i++){    for (int j = 0; j < N; j++){    c[i][j] = 0.0;}}
    // Multiply matrices a and b, store result in c
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            for (int k = 0; k < N; k++) {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }
}

void pr1() {
    int m, n;  cin >> m >> n;
    vector<vector<int>> v(m, vector<int>(n, 0));
    rp(i,0,m){ rp(j,0, n){    cin >> v[i][j];} }
    rp(i,0,m){ cout << accumulate(v[i].begin(), v[i].end(), 0) << endl;}
   // rp(i, 0, n){ cout << sumColumn(v, n, clm);}
}

#include <iostream>
#include <vector>
using namespace std;

#define rp(i, a, b) for(int i = a; i < b; i++)

bool isa(const vector<vector<int>>& v, int m, int n) {
    double c = 0;
    rp(j, 0, n){    c += v[0][j];}
    c /= n;
    rp(i, 1, m){
        double ra = 0;
        rp(j, 0, n){    ra += v[i][j];}
        ra /= n;
        if(ra != c){    return false;}
    }
    rp(j, 0, n){
        double ca = 0;
        rp(i, 0, m){    ca += v[i][j];}
        ca /= m;
        if(ca != c){    return false;}
    }
    return true;
}

int main(){
    int m, n;
    cin >> m >> n;
    vector<vector<int>> v(m, vector<int>(n));
    rp(i, 0, m){    rp(j, 0, n){    cin >> v[i][j]; }   }
    cout << (isa(v, m, n) ? "YES" : "NO") << endl;
    return 0;
}




// TO CLEAR cin if it went into fail state due to non-integer input
// cin.clear();
// cin.ignore(numeric_limits<streamsize>::max(), '\n');


// int main() {
//     int m, n;
//     cin >> m >> n;
//     vector<vector<int>> matrix(m, vector<int>(n));
//     rp(i, 0, m) {   rp(j, 0, n){    cin >> matrix[i][j];}}
//     double rs = 0, cs = 0;
//     rp(i,0,m){
//         double rt = 0;
//         rp(j,0,n){
//             rt += matrix[i][j];
//             rs += rt/n;
//         }
//     }
//     rp(j,0,n){
//         double ct = 0;
//         rp(i,0,m){  ct += matrix[i][j];}
//         cs += ct / m;
//     }
//     cout << rs << " " <<  cs << endl;
//     cout << (rs == cs ? "YES" : "NO") << endl;
//     return 0;
// }


// PROBLEM 5
// #include <iostream>
// #include <vector>
// #include <limits>
// #define pb push_back
// using namespace std;
//
// bool isp(vector<int>& ps, int n) {
//     int cnt = 0;
//     rp(i, 0, ps.size()){
//         if (ps[i] == 0 && (i == 0 || ps[i - 1] == 0) && (i == ps.size() - 1 || ps[i + 1] == 0)){
//             ps[i] = 1;    cnt++;
//             if (cnt == n){  return true;}
//         }
//     }
//     return false;
// }
//
// int main() {
//     int n;  cin >> n;
//     vector<int> ps;
//     int i;
//     while (cin >> i){    ps.pb(i);}
//     cout << (isp(ps, n) ? "YES" : "NO") << endl;
//     return 0;
// }
