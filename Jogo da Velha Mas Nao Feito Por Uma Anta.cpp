#include <iostream>
#include <string>
using namespace std;

void EscolheJgda(int jgda[], int i){
    string mJ1 = "Jogador 1: ";
    string mJ2 = "Jogador 2: ";
    bool jgdaInvalida;
    do{
        jgdaInvalida = 0;
        if(i % 2 == 0)
            cout << mJ1;
        else
            cout << mJ2;
        cin >> jgda[i];
        if(jgda[i] < 1 || jgda[i] > 9){
            jgdaInvalida = 1;
            cout << "Jogada invalida, tente novamente." << endl;
        }
        else{
            for(int j = 1; j <= i; j++){
                if(jgda[i] == jgda[i-j]){
                    jgdaInvalida = 1;
                    cout << "Jogada invalida, tente novamente." << endl;
                }
            }
        }
    }while(jgdaInvalida == 1);
}

bool Vitoria(int i, string p[], string j_){
    bool Venceu = 0;
        for(int x = 0; x < 4; x += 3){
            for(int y = 0; y < 4; y++){
            	for(int z = 0; z < 4; z += 2){
            		if((p[x] == "_" + j_ + "_" && p[x+1] == p[x] && p[x+2] == p[x]) || //Horizontal 1 e 2
						(p[6] == " " + j_ + " " && p[7] == p[6] && p[8] == p[6]) || //Horizontal 3
                        (p[y] == "_" + j_ + "_" && p[y+3] == p[y] && p[y+6] == " " + j_ + " ") || //Vertical
                        (p[z] == "_" + j_ + "_" && p[4] == p[z] && p[8-z] == " " + j_ + " ")){ //Diagonal
                        Venceu = 1;
                    }
               	}
            }
        }
    return Venceu;
}

string JgdaJ_(int jgda[], int i, string p[], string j_, string T){ 
    for(int j = 1; j < 7; j++){
        if(jgda[i] == j)
            p[j-1] = "_" + j_ + "_";
    }
    for(int j = 7; j < 10; j++){
        if(jgda[i] == j)
            p[j-1] = " " + j_ + " ";
    }

    string l1 = p[0] + '|' + p[1] + '|' + p[2];
    string l2 = p[3] + '|' + p[4] + '|' + p[5];
    string l3 = p[6] + '|' + p[7] + '|' + p[8];
    T = l1 + '\n' + l2 + '\n' + l3;
    return T;
}

int main(){
    //Formato do jogo
	string l1 = "_1_|_2_|_3_";
	string l2 = "_4_|_5_|_6_";
	string l3 = " 7 | 8 | 9 ";
	string T = l1 + '\n' + l2 + '\n' + l3;
    string p[9];
    p[0] = p[1] = p[2] = p[3] = p[4] = p[5] = "___";
    p[6] = p[7] = p[8] = "   ";
	cout << "Jogo da Velha" << endl;
	cout << T << endl << endl;

	//Jogadores
    string mJ1 = "Jogador 1: ";
	string mJ2 = "Jogador 2: ";
    string j1, j2;

    cout << "Escolha x ou o." << endl << mJ1;
    cin >> j1;
    
    while(j1 != "X" && j1 != "x" && j1 != "O" && j1 != "o"){
        cout << "Invalido, tente novamente." << endl << mJ1;
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
	
	//Jogadas
	int jgda[9];
    for(int i = 0; i < 9; i++){
        if(i % 2 == 0){
            EscolheJgda(jgda, i);
            cout << JgdaJ_(jgda, i, p, j1, T) << endl << endl;
            if(Vitoria(i, p, j1) == 1){
                cout << "Jogador 1 venceu.";
            	return 0;
            }
        }
        else{
            EscolheJgda(jgda, i);
            cout << JgdaJ_(jgda, i, p, j2, T) << endl << endl;
            if(Vitoria(i, p, j2) == 1){
                cout << "Jogador 2 venceu.";
                return 0;
            }
        }
    }
}
