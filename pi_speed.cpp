#include <iostream>
#include <math.h>
#include <ctime> 
#include <chrono>
#include <fstream>

float real_pi = M_PI;

void leibniz_test();

int main(){
	leibniz_test();

}

void leibniz_test(){
	auto now = std::chrono::system_clock::now();
	auto now_ms = std::chrono::time_point_cast<std::chrono::milliseconds>(now);
	auto epoch = now_ms.time_since_epoch();
	auto start = std::chrono::high_resolution_clock::now();
//	auto t2 = std::chrono::high_resolution_clock::now();
//	auto t3 = std::chrono::high_resolution_clock::now();
	long t2 = 0;
	long t3 = 0;
	float pi = 0;
	int n = 9999999;
	bool find2 = false;
	bool find3 = false;
	for (int i=0; i<n; i++){
		if (i % 2) pi+= 4.0/(2.0 * i + 1.0);
		else pi -= 4.0/(2.0 * i + 1.0);
		if (abs(pi - real_pi) < 0.01){ t2 = std::chrono::duration_cast<std::chrono::milliseconds>(epoch).count(); bool find2 = true;}
		if (abs(pi - real_pi) < 0.001){t3 = std::chrono::duration_cast<std::chrono::milliseconds>(epoch).count(); bool find3 = true;}
	}	
	if (find2)
	std::cout << t2; //<< "t2 \n";
	if (find3)
	std::cout << t3;// << "t3 \n";
}

