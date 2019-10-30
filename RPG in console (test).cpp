//
// Made by Vovk Alex 
//
//

#include "pch.h"
#include <iostream>
#include <fstream>
#include <string>

; using namespace std;
/*TODO: 
-систему сохранить-загрузить (IN PRIORITY!!!)

-добавить арену 
-добавить врагов
-систему боя (пошаговая)


-сделать инвентарь

-систему получения лута

-вход\выход из здания
*/
string nickName;
bool gameover = false;
const short int spawn_id = 1;
const short  int Msquare_id = 2;
short int location = 1;
string destiny;
string enetre;
const short int shop_id = 10001;
const short int info_id = 10002;
short int choisesss;
bool mainMenu = true;

void Save_Load();



void shopActions();

//moving from main square
void mvn_mainsqv();


//moving from spawnpoint
void mvnSpawn();

void Choises();

void MainMenu();

int main()
{
	while (!gameover) 
	{
		MainMenu();	
	}
	return 0;
}



void MainMenu()
{
	cout << "Start game" << endl;
	cout << "Load game" << endl;
	cout << "Quit" << endl;
	cin >> enetre;
	if (enetre == "Start game" || enetre == "start" || enetre == "Start")
	{
		
		// nickname input

		// diffuculty (usless)

		//
		mainMenu = false;

		while (!gameover && mainMenu == false)
		{
			Choises();
		}
		if (mainMenu == false) {
			cout << "GameOver" << endl;
		}
	}
	else if (enetre == "Load game")
	{

	}
	else if (enetre == "Quit" || enetre == "quit")
	{
		gameover = true;
		mainMenu = true;
	}

	// начать игру

	//сохранит - загрузить

	//выход



	system("cls");
}


void Choises() {
	system("cls");

	cout << "Type 'move' to choise, where you'd like to move. Type 'lol'," << endl << " to get smile. Type'quit' to quit the game." << endl << "If you need help type 'help'." << endl;
	cout << "Type 'Menu' to get to  the Main menu" << endl;
	cin >> enetre;

	if (enetre == "move") //выбор передвижения
	{
		system("cls");
		switch (location) {
		case 1:
			mvnSpawn();
			break;
		case 2:
			mvn_mainsqv();
			break;
		}
	}
	else if (enetre == "lol") //тестовый if
	{
		cout << ":-)";
	}
	else if (enetre == "quit")  //выход из игры
	{
		mainMenu = false;
		gameover = true;
	}
	else if (enetre == "O_mae_wa_mou_shinderu") { //отсылка
		cout << "NANI!!!???? \n";

		system("pause");
		gameover = true;

	}
	else if (enetre == "determination")
	{
		cout << "Life is a river so many ups downs, \n twist and turns, some points are clear and smooth, \n others still are as white water rapids, hazy and rough, \n and we are but a Lilly along for the ride, \n hold on and fallow the flow we must, \n we may try to cling to certain parts but we will \n only be swept away in the current of time  \n (c) Eponia's Will Klock \n";
		system("pause");
	}
	else if (enetre == "help")
	{
		cout << "To chose where you'd like to move, you should type 'move' and than id of destinatoin from the list" << endl;
		system("pause");
	}
	else if (enetre == "save")
	{
		cout << "not yet =) \n";
		system("pause");
	}

	else if (enetre == "Menu")
	{
		mainMenu = true;
	}

	else {
		cout << "You entered wrong action. Please try again";
		system("pause");
	}


}

void mvnSpawn() {
	cout << "You are at the spawn" << endl;
	cout << "Choise your destination: " << endl;
	cout << "1.Main_square" << endl;
	cout << "0.Go back" << endl;
	cin >> destiny;


	if (destiny == "1")
	{
		location = Msquare_id;
		system("cls");
	}
	else if (destiny == "0") {

	}
	else
	{
		cout << "There is no destiny under id " + destiny << endl;
		system("pause");
		system("cls");


		mvnSpawn();


	}

}

void mvn_mainsqv() {
	cout << "You are at the Main square'" << endl;
	cout << "Choise your destination: " << endl;
	cout << "1.Spawn" << endl;
	cout << "2.Store" << endl;
	cout << "3.Arena" << endl;
	cin >> destiny;

	if (destiny == "1" || destiny == "spawn" || destiny == "Spawn" || destiny == "1.Spawn")
	{
		location = spawn_id;
		system("cls");
	}
	else if (destiny == "2")
	{
		location = shop_id;
	}
	else if (destiny == "0")
	{
	}
	else {
		cout << "This choise isn't avaible yet. Or there is no destiny under id " + destiny << endl;
		system("pause");
		system("cls");


		mvn_mainsqv();


	}

}

void shopActions() {
	cout << "You are at the shop \n";
	cout << "Choise action:\n";
	cout << "1.Buy\n";
	cout << "2.Sell\n";
	cout << "0.Leave the store\n";
	cin >> choisesss;
	if (choisesss == 1)
	{
		cout << "This action is not availble yet.";
		shopActions();
	}
	else if (choisesss == 2)
	{
		cout << "This action is not availble yet.";
		shopActions();
	}
	if (choisesss == 0)
	{
		location = Msquare_id;

	}
}


void Save_Load()
{
	//
	//	ник
	//	статы
	//	инвентарь
	//
}