#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main(){
	double a, b;
	char op;
	string first;
	cout << "The symbol for a square is ^2" << endl << "The symbol for a square root is r" << endl;
	while(true){
		cin >> a >> op;
		if(op == 'r'){
			cout << sqrt(a) << endl;
		}
		else{
			cin >> b;
			switch (op){
				case '+':
					cout << a + b << endl;
					break;
				case '-':
					cout << a - b << endl;
					break;	
				case '*':
					cout << a * b << endl;
					break;
				case '/':
					if(b == 0){
						cout << "The denominator cannot be zero" << endl;
					}
					else{
						cout << a / b << endl;
					}
					break;
				case '%':
					cout <<(int) a %(int) b << endl;
					break;
				case '^':
					cout << pow(a,b) << endl;
					break;
				default:
					cout << "Invalid operator" << endl;
			}
		}
		cout << "Do you want to quit or continue? type quit if you want to quit, type continue if you want to continue." 
			<< endl;
		cin >> first;
		if(first == "quit"){
			break;
		}
	}
	return 0;
}
