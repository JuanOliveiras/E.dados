#include <iostream>
#define num 10

using namespace std;

struct ordem
{
	int vet[num];
	int n;
};

int main(int argc, char** argv)
{
	ordem numero;
	numero.vet;
	numero.n = 1;

	for (int i = 0; i < num; i++)
	{
		numero.vet[i] = numero.n;
		numero.n++;
	}
	
	cout << "Ordem crescente: " << endl;
	for (int i = 0; i < num; i++)
	{
		cout << numero.vet[i] << endl;;
	}
	

	cout << "Ordem decrescente: " << endl;
	
	for (int i = num - 1; i >= 0; i--)
	{
		cout << numero.vet[i] << endl;
	}

	return 0;
}