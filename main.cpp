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

#include <iostream>
#include <vector>
#include <limits>

using namespace std;

bool canParkCars(vector<int>& parkingSpots, int n) {
    int parkedCars = 0;
    int length = parkingSpots.size();

    for (int i = 0; i < length; ++i) {
        // Check if the current spot is empty and both neighbors (if any) are also empty
        if (parkingSpots[i] == 0 &&
            (i == 0 || parkingSpots[i - 1] == 0) &&
            (i == length - 1 || parkingSpots[i + 1] == 0)) {

            // Park a car in this spot
            parkingSpots[i] = 1;
            parkedCars++;

            // Check if we've parked enough cars
            if (parkedCars == n) {
                return true;  // "YES"
            }
            }
    }

    // If not enough cars could be parked
    return false;  // "NO"
}

int main() {
    int n;
    cout << "Enter the number of cars to park (n): ";
    cin >> n;

    vector<int> parkingSpots;
    int spot;
    cout << "Enter the parking spots (0 for empty, 1 for occupied). Enter a non-integer to stop:\n";

    // Read parking spots until a non-integer input is encountered
    while (cin >> spot) {
        parkingSpots.push_back(spot);
    }

    // Clear cin if it went into fail state due to non-integer input
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout << (canParkCars(parkingSpots, n) ? "YES" : "NO") << endl;
    return 0;
}




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