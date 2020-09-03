#include <iostream>
using namespace std;

int main()
{

	float peso, altura, imc;

	cout << "Digite seu peso: ";
	cin >> peso;

	cout << "Digite a sua altura: ";
	cin >> altura;

	imc = peso / altura*altura;

	if (imc < 20)
	{
		cout << "Abaixo do peso" << endl;
	}

	if (imc > 20 & imc < 25)
	{

		cout << "Peso Ideal" << endl;
	}

	if( imc >= 25)
	{
		cout << "Acima do peso" << endl;
	}
	return 0;
}
