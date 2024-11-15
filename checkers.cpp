#include <iostream>
#include <vector>
#define fl(i, a, b) for(int i = a; i<b; ++i)
#define fli(i, a, b) for(int i = a; i<=b; ++i)
#define f(i, a) fl(i, 0,a)
#define fi(i, a) fli(i,0,a)
#define all(s) s.begin(), s.end()
using namespace std;

int main(){
    // vector<vector<int>> v(rows, vector<int>(cols, init_value));
    vector<vector<int>> v(8, vector<int>(8, 0));
	f(i, 3){    f(j,8){ if(i%2==j%2){	v[i][j]=1;}}} //black
	fl(i,5,8){  f(j,8){ if(i%2==j%2){	v[i][j]=2;}}} //white
	f(i, 8){    f(j,8){	cout << v[i][j] << " ";}    cout << endl;} //cout
    
    return 0;
}
