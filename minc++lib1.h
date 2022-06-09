
#define pi 3.14159265359








int FactorialInt(int a) {
	if (a < 0){
		return 0;
	}
	long double b = 1.0;
	for (int i = 1; i <= a; ++i) {
		b *= i;
	}
	return b;
}

float DivideFloat(float a, float b) {
	if (b == 0) { return 0; }
	float c = a / b;
	return c;
}
float MultiplyFloat(float a, float b) {
	float c = a * b;
	return c;
}
float SubtractFloat(float a, float b) {
	float c = a - b;
	return c;
}
float AddFloat(float a, float b) {
	float c = a + b;
	return c;
}
void bar(void) {

}
void foo(void) {

}
int DivideInt(int a, int b) {
	if (b == 0) { return 0; }
	int c = a / b;
	return c;
}
int MultiplyInt(int a, int b) {
	int c = a * b;
	return c;
}
int SubtractInt(int a, int b) {
	int c = a - b;
	return c;
}
int AddInt(int a, int b) {
	int c = a + b;
	return c;
}
int IntToBoolean(int b) {
	if (b == 0) {
		return false;
	}
	if (b == 1) {
		return true;
	}
	if (b >= 1) {
		return true;
	}
	if (b <= 0) {
		return false;
	}
	return 0;
}
int BooleanToInt(bool g) {
	if (g == false) {
		return 0;
	}
	if (g == true) {
		return 1;
	}
	return 0;
}
