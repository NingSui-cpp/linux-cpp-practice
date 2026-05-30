#include <iostream>
#include <cmath>
#include <string>
using namespace std;

double power( double num, double n);

int main(){
    double a, b;
    string op;  
    while(true){
        cout << "Type help to show the operations, or type calculate to start, or type quit to exit." << endl;
	cout << "Enter expression: " << endl;
        cin >> op;
        if(op == "help"){
            cout << "Available Operations:" << endl;
            cout <<"+ Addition"<< endl;
            cout << "- Subtraction" << endl;
            cout <<"* Multiplication" << endl;
            cout << "/ Division" << endl;
            cout << "% Modulo" << endl;
            cout << "^ Power" << endl;
            cout << "r Square Root" << endl;
        }
        else if(op == "calculate"){
            cin >> a >> op;
            if(op == "r"){
                cout << sqrt(a) << endl;
            }
            else{
                cin >> b;
                if(op == "+"){
                cout << a + b << endl;
                }
                else if(op == "-"){
                cout << a - b << endl;
                }
                else if(op == "*"){
                    cout << a * b << endl;
                }
                else if(op == "/"){
                    if(b == 0){
                            cout << "The denominator can't be zero" << endl;
                    }
                    else{
                            cout << a/b << endl;
                    }
                }
                else if(op == "%"){
                    if(b == 0){
                        cout << "The denominator can't be zero" << endl;
                    }
                    else
                        cout << (int) a % (int) b << endl;
                }
                else if(op == "^"){
                        cout << power(a,b) << endl;
                }
            }        
        }
        else if (op == "quit"){
            break;
        }
        else{
            cout << "Unknown command" << endl;
        }
    }
return 0;
}

double power( double num, double n) {
        return pow(num,n);
}


