#include <iostream>
#include<fstream>
#include <iomanip>
#include <cmath>
#include <limits>
#include <math.h>
#include <cstdlib>

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


//Valise product
float valise(int n){
	ofstream fout("valise_res.txt");
	float pi = 2.0;
	for (int i=1; i<n; i++){
		pi = pi * (4 * i * i) / (4 * i * i - 1);
		fout << setprecision(numeric_limits<long double>::digits10 + 1) << pi << "\n";
	}
	return pi;
}

///n^4
float calc_pi(int n){
	ofstream fout("1n4_res.txt");
	float pi = 0.0;
	float res = 0.0;
	for (int i=1; i<n; i++){
		res = res + 1.0/i/i/i/i;
		pi = sqrt(sqrt(90 * res));
		fout << setprecision(numeric_limits<long double>::digits10 + 1) << pi << "\n";
	}
	return pi;	
}

int main(int argc, char**  argv){
//	int n = 50;
//	int n = atoi(argv[1]); // TODO INVALID IF 0. It is C style use strtol instead.
	int n = 0;
	if (argc > 1){
		n = atoi(argv[1]);}
	cout << leibinz(n) << "\n";
	cout << euler(n) << "\n";
	cout << valise(n) << "\n";
	cout << calc_pi(n) << "\n";
}
