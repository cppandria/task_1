#include <iostream>
#include <ctime>
#include <random>

using namespace std;

const int N = 12; //my variant

double math_phrase(int i, int N) {

	double res = 0;
	res = sqrt(i*i + N * N) / i;
	return res;
}

double loop_example_1() {
	double result = 0;
	int i = N;
	while (i <= 22) {
		result += math_phrase(i, N);
		i++;
	}
	cout << "result of Loop example 1 is=" << result << endl;
	return result;
}

double loop_example_2() {
	double result = 0;
	int i = N;
	do
	{
		result += math_phrase(i, N);
		i++;
	} while (i <= 22);

	cout << "result of Loop example 2 is=" << result << endl;
	return result;
}

double loop_example_3() {
	double result = 0;
	for (int i = N; i <= 22; i++) {
		result += math_phrase(i, N);
	}
	cout << "result of Loop example 3 is=" << result << endl;
	return result;
}

double loop_example_4() {
	double result = 0;
	for (int i = 22; i >= N; i--) {
		result += math_phrase(i, N);
	}
	cout << "result of Loop example 4 is=" << result << endl;
	return result;
}


int main() {

	loop_example_1();
	loop_example_2();
	loop_example_3();
	loop_example_4();
	return 0;
}