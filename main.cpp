#include <iostream>
#include<fstream>
#include <iomanip>
#include <cmath>
#include <limits>
#include <math.h>


using namespace std;


// Leibinz series. Oscillates near pi
float leibinz(int n){
	ofstream fout("leibinz_res.txt");
	float pi = 0;
	for (int i=0; i<n; i++){
		if (i % 2 == 0 ){
			pi = pi + 4.0 / ( 2.0 * i + 1.0);}
		else{   pi = pi - 4.0 / ( 2.0 * i + 1.0);} 	
		fout << setprecision(numeric_limits<long double>::digits10 + 1) << pi << "\n";}
	fout.close();
	return pi;
}

// Euler series. Row converges to pi below
float euler(int n){
	ofstream fout("euler_res.txt");
	float res = 0;
	float pi = 0;
	for (int i=1; i<n; i++){
		res = res +  static_cast<float>(static_cast<float>(1.0/i)/i);
		pi = sqrt(6 * res);	
		fout << setprecision(numeric_limits<long double>::digits10 + 1) << pi << "\n";
	}
	fout.close();
	return pi;
}


int main(){
	int n = 50;
	float q=leibinz(n);
	cout << euler(n);
}

