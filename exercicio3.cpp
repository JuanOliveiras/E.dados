#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
	double salario ;

	cout << "Digite seu salario" << endl;
	cin >> salario;

	if (salario < 1000)

	{
		cout << "Seu salario Bruto e de: " << salario * 1.15 << endl;
	}

	if (salario >= 1000 & salario < 1500)
	{
		cout << "Seu salario Bruto e de: " << salario * 1.10 << endl;
	}
 
    if (salario > 1500){
		cout << "Seu salario Bruto e de: " << salario * 1.05 <<endl;
	}

	return 0;
}
