#include<iostream>
#include<vector>
#include<fstream>
#include<chrono>
#include<math.h>

using namespace std;

double get_time() {
    return chrono::duration_cast<chrono::microseconds>(chrono::steady_clock::now().time_since_epoch()).count()/1e6;
}


float leibniz(long int n) {
	float res = 0;
	float sign = 1;
	float den = 1;
	vector<float> history;
	vector<float> times;
	auto start_time = get_time();
	for (long int i = 0; i < n; i++) {
		res += 4 * sign / den;
		history.push_back(res);
		times.push_back(get_time() - start_time);
		den += 2;
		sign *= -1;
	}
	ofstream f("leibniz_history.csv", ios::out);
	for (long int i = 0; i < n; i++) {
		f << history[i] << "," << times[i] << endl;
	}
	return res;
}

float nikantha(long int n) {
	float res = 3;
	float sign = 1;
	vector<float> history;
	vector<float> times;
	auto start_time = get_time();

	for (int i = 2; i < n; i+=2) {
		float delta = (float) sign * 4. / ((float) (i * (i + 1) * (i + 2)));
		res += delta;
		sign *= -1;
		history.push_back(res);
		times.push_back(get_time() - start_time);
	}
	ofstream f("nikantha_history.csv", ios::out);
	for (long int i = 0; i < n; i++) {
		f << history[i] << "," << times[i] << endl;
	}
	return res;
}

float ramanujan(long int n) {
	float res = 0;
	float factorials = 1;
	float den = 1;
	vector<float> history;
	vector<float> times;
	auto start_time = get_time();

	for (int i = 0; i < n; i++) {
		float delta = factorials * (1103 + 26390 * i) * 2 * sqrt(2) / (99*99);
		res += delta;
		factorials *= (float) ( 4. * 396. * 396. * 396. * 396.) / ((float) (i * i * i));
		history.push_back(res);
		times.push_back(get_time() - start_time);
	}
	ofstream f("ramanujan_history.csv", ios::out);
	for (long int i = 0; i < n; i++) {
		f << history[i] << "," << times[i] << endl;
	}
	return res;
}

float taylor(int n) {
	vector<float> history;
	vector<float> times;
	auto start_time = get_time();
    float sum = 0.0;
    int sign = 1;
    for (int i = 0; i < n; ++i) {
        sum += sign/(2.0*i+1.0);
        sign *= -1;
		history.push_back(4. * sum);
		times.push_back(get_time() - start_time);

    }
	ofstream f("taylor.csv", ios::out);
	for (long int i = 0; i < n; i++) {
		f << history[i] << "," << times[i] << endl;
	}
    return 4.0*sum;
}

float bbp(int n) {
	vector<float> history;
	vector<float> times;
	auto start_time = get_time();
	int c=0;
	double pi=0;
	float a=1;
	for(a=1;a<=n;a=a+2)
    {
        if(c==0)
        {
            pi=pi+4/a;
            c++;
        }
        else
        {
            pi=pi-4/a;
            c--;
        }
		history.push_back(pi);
		times.push_back(get_time() - start_time);
    }
	ofstream f("bbp.csv", ios::out);
	for (long int i = 0; i < n; i++) {
		f << history[i] << "," << times[i] << endl;
	}

	return pi;
}


int main() {
	bbp(100000);
	return 0;
}
