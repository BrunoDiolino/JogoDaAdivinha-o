#include <iostream>;
#include <locale.h>;

using namespace std;

int main() {

	cout << "***********************************************" << endl;
	cout << "     Bem-Vindo ao Jogo Da Adivinhação  " << endl;
	cout << "***********************************************" << endl;

	const int NUM_SECRETO = 42;

	int chute;
	cout << "Faça seu chute: " << endl; 
	cin >> chute;
	cout << "O valor do chute é :" << chute << endl;
	
	bool acertou = chute == NUM_SECRETO;
	bool maior = chute > NUM_SECRETO;


	if (acertou){
		cout << "Parabéns você acertou o chute!!!" << endl;
	}
	else if (maior) {
		cout << "Seu chute foi maior que o número sercreto! " << endl;
	}
	else {
		cout<<"Seu chute foi menor que o número secreto" << endl;
	}
}