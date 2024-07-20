#include<iostream>
void  iterative(int a) {
	int sum{1};
	for (int i = a; i > 0; i--) {

		sum *= i;
	}
	std::cout << sum;
}
int recursive(int a) {
	if (a == 0) return 1;
	return a * recursive(a - 1);


}
int main() {
	iterative(5);
	std::cout << '\n' << recursive(5);

}