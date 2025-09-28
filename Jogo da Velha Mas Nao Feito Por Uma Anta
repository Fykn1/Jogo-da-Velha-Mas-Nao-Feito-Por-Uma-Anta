#include <iostream>
#include <string>
using namespace std;

int VerificaJgda(int jgda[], int i){
    string mJ1 = "Jogador 1: ";
    string mJ2 = "Jogador 2: ";
	int jgdaInvalida = 0;
	for(int j = 1; j <= i; j++){
		if(jgda[i] < 1 || jgda[i] > 9 || jgda[i] == jgda[i-j]){
			do{
				jgdaInvalida = 1;
				cout << "Jogada invalida, escolha outra.";
				if(i % 2 == 0) 
                    cout << endl << mJ1;
                else
                    cout << endl << mJ2;
				cin >> jgda[i];
			}while(jgda[i] < 1 || jgda[i] > 9 || jgda[i] == jgda[i-j]);
		}
	}
	return jgdaInvalida;
}

int main(){
    //Formato do jogo
	string l1 = "_1_|_2_|_3_";
	string l2 = "_4_|_5_|_6_";
	string l3 = " 7 | 8 | 9 ";
    string p1, p2, p3, p4, p5, p6, p7, p8, p9;
    p1 = p2 = p3 = p4 = p5 = p6 = "___";
    p7 = p8 = p9 = "   ";
	cout << "Jogo da Velha" << endl;
	cout << l1 << endl << l2 << endl << l3 << endl << endl;

	//Jogadas e jogadores
    int jgda[8];
    string mJ1 = "Jogador 1: ";
	string mJ2 = "Jogador 2: ";
    string j1, j2;

    cout << "Escolha x ou o." << endl << mJ1;
    cin >> j1;
    
    while(j1 != "X" && j1 != "x" && j1 != "O" && j1 != "o"){
        cout << "Invalido, tente novamente" << endl << mJ1;
        cin >> j1;
    }
    if(j1 == "X" || j1 == "x"){
        j1 = "x";
        j2 = "o";
    }
    else{
        j1 = "o";
        j2 = "x";
    }

    cout << mJ2 << j2 << endl << endl;

    //1º Jogada
    cout << mJ1;
    cin >> jgda[0];
    while(jgda[0] < 1 || jgda[0] > 9){
        cout << "Jogada invalida, tente novamente" << endl << mJ1;
        cin >> jgda[0];
    }

    if(jgda[0] == 1)
        p1 = "_" + j1 + "_";
    else if(jgda[0] == 2)
        p2 = "_" + j1 + "_";
    else if(jgda[0] == 3)
        p3 = "_" + j1 + "_";
    else if(jgda[0] == 4)
        p4 = "_" + j1 + "_";
    else if(jgda[0] == 5)
        p5 = "_" + j1 + "_";
    else if(jgda[0] == 6)
        p6 = "_" + j1 + "_";
    else if(jgda[0] == 7)
        p7 = " " + j1 + " ";
    else if(jgda[0] == 8)
        p8 = " " + j1 + " ";
    else
        p9 = " " + j1 + " ";

    l1 = p1 + '|' + p2 + '|' + p3;
    l2 = p4 + '|' + p5 + '|' + p6;
    l3 = p7 + '|' + p8 + '|' + p9;
    cout << l1 << endl << l2 << endl << l3 << endl;

    //Demais Jogadas
    for(int i = 2; i < 5; i += 2){ //Jogador 1
        for(int j = 1; j < 5; j += 2){ //Jogador 2
                cout << mJ2;
                cin >> jgda[j];
                if(VerificaJgda(jgda, j) == 1){
                    do{
                        VerificaJgda(jgda, j);
                    }while(VerificaJgda(jgda, j) == 1);
                }

                if(jgda[j] == 1)
                    p1 = "_" + j2 + "_";
                else if(jgda[j] == 2)
                    p2 = "_" + j2 + "_";
                else if(jgda[j] == 3)
                    p3 = "_" + j2 + "_";
                else if(jgda[j] == 4)
                    p4 = "_" + j2 + "_";
                else if(jgda[j] == 5)
                    p5 = "_" + j2 + "_";
                else if(jgda[j] == 6)
                    p6 = "_" + j2 + "_";
                else if(jgda[j] == 7)
                    p7 = " " + j2 + " ";
                else if(jgda[j] == 8)
                    p8 = " " + j2 + " ";
                else if(jgda[j] == 9)
                    p9 = " " + j2 + " ";
                else{
                    cout << "Jogada invalida, tente novamente" << endl << mJ2;
                    cin >> jgda[j];
                }

                l1 = p1 + '|' + p2 + '|' + p3;
                l2 = p4 + '|' + p5 + '|' + p6;
                l3 = p7 + '|' + p8 + '|' + p9;
                cout << l1 << endl << l2 << endl << l3 << endl << endl;

                cout << mJ1;
                cin >> jgda[i];
                if(VerificaJgda(jgda, i) == 1){
                    do{
                        VerificaJgda(jgda, i);
                    }while(VerificaJgda(jgda, i) == 1);
                }

                if(jgda[i] == 1)
                    p1 = "_" + j1 + "_";
                else if(jgda[i] == 2)
                    p2 = "_" + j1 + "_";
                else if(jgda[i] == 3)
                    p3 = "_" + j1 + "_";
                else if(jgda[i] == 4)
                    p4 = "_" + j1 + "_";
                else if(jgda[i] == 5)
                    p5 = "_" + j1 + "_";
                else if(jgda[i] == 6)
                    p6 = "_" + j1 + "_";
                else if(jgda[i] == 7)
                    p7 = " " + j1 + " ";
                else if(jgda[i] == 8)
                    p8 = " " + j1 + " ";
                else
                    p9 = " " + j1 + " ";

                l1 = p1 + '|' + p2 + '|' + p3;
                l2 = p4 + '|' + p5 + '|' + p6;
                l3 = p7 + '|' + p8 + '|' + p9;
                cout << l1 << endl << l2 << endl << l3 << endl << endl;
        }
    }  
}
