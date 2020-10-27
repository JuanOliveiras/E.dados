  //slide 15
  
#include <iostream>
#include <string>

using namespace std;

struct pessoa
{
	string nome;
	string endereco;
	string cpf;
	int idade;
};

int main()
{
	pessoa p[5];

	for(int x=0; x < 5; x++)
	{  
		cout << "Digite o nome da " << x + 1 << "ª pessoa: "<<endl;
		getline(cin, p[x].nome);
		
		cout << "Digite o CPF da " << x + 1 << "ª pessoa: "<<endl;
		getline(cin, p[x].cpf);

		cout << "Digite o endereco da " << x + 1 << "ª pessoa: "<<endl;
		getline(cin, p[x].endereco);
		
		cout << "Idade da " << x + 1 << "ª pessoa: ";
		cin >>  p[x].idade;
		
		
		cin.ignore();

	}
	
	cout << "Dados aceitos"<<endl;
	
	
	for(int x = 0; x < 5; x++)
	{
		cout << "Nome da " << x+1 << "ª pessoa: " << p[x].nome << endl;
		cout << "Idade da " << x+1 << "ª pessoa: " << p[x].idade << endl;
		cout << "CPF da " << x+1 << "ª pessoa: " << p[x].cpf << endl;
		cout << "Endereco da " << x+1 << "ª pessoa: " << p[x].endereco << endl;
	}

	return 0;
}