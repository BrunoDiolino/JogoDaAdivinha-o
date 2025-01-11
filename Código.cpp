#include <iostream>;
#include <tchar.h>;

using namespace std;

int main() {
	_tsetlocale(LC_ALL, _T("portuguese"));

	cout << "***********************************************" << endl;
	cout << "     Bem-Vindo ao Jogo Da Adivinhação  " << endl;
	cout << "***********************************************" << endl;
	
	    int tentativas = 0;
		bool n_acertou = true;
		double pontos = 1000.0;


	while (n_acertou) {
		
		tentativas++;
		
		const int NUM_SECRETO = 42;

		int chute;
		cout << "Tentativa: " << tentativas << endl;
		cout << "Faça seu chute: " << endl;
		cin >> chute;

		double pontos_loss = abs(chute - NUM_SECRETO) / 2.0; ///ABSolute - entrega o valor absoluto e não o negativo 
		pontos = pontos - pontos_loss;

		cout << "O valor do chute é :" << chute << endl;

		bool acertou = chute == NUM_SECRETO;
		bool maior = chute > NUM_SECRETO;


		if (acertou) {
			cout << "Parabéns você acertou o chute!!!" << endl;
			
			n_acertou = false;
		}
		else if (maior) {
			cout << "Seu chute foi maior que o número sercreto! " << endl;
		}
		else {
			cout << "Seu chute foi menor que o número secreto" << endl;
		}

	}
	cout << "Você fez:" << tentativas << " tentativas" << endl;
	cout.precision(2); //para adicionar duas casas ou mais antes da virgula assim como usado para imprimir o valor da mesma forma quando se trata de dinheiro usamos o comando na frente do "cout" .precision(...) (lembrando que se faz isso uma linha antes da linha que se quer adicionar esse comando) 
	cout << fixed;
	cout << "Você fez:" << pontos << " pontos" << endl;
	cout << "fim de jogo" << endl;
	

}
