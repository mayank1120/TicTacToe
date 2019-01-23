#include <iostream>
using namespace std;

char game[10] = {'o','1','2','3','4','5','6','7','8','9'};

int checkStatus();
void setBoard();

int main()
{
	int player = 1,status,choice;

	char mark;
	do
	{
		setBoard();
		player=(player%2)?1:2;

		cout << "Player " << player << ", enter a number:  ";
		cin >> choice;

		mark=(player == 1) ? 'X' : 'O';

		if (choice == 1 && game[1] == '1')

			game[1] = mark;
		else if (choice == 2 && game[2] == '2')

			game[2] = mark;
		else if (choice == 3 && game[3] == '3')

			game[3] = mark;
		else if (choice == 4 && game[4] == '4')

			game[4] = mark;
		else if (choice == 5 && game[5] == '5')

			game[5] = mark;
		else if (choice == 6 && game[6] == '6')

			game[6] = mark;
		else if (choice == 7 && game[7] == '7')

			game[7] = mark;
		else if (choice == 8 && game[8] == '8')

			game[8] = mark;
		else if (choice == 9 && game[9] == '9')

			game[9] = mark;
		else
		{
			cout<<"Invalid move ";

			player--;
			cin.ignore();
			cin.get();
		}
		status=checkStatus();

		player++;
	}while(status == -1);
	setBoard();

	if(status == 1)
		cout<<"==>\aPlayer "<<--player<<" win ";
	else
		cout<<"==>\aGame draw";

	cin.ignore();
	cin.get();
	return 0;
}

/*********************************************

	FUNCTION TO RETURN GAME STATUS
	1 FOR GAME IS OVER WITH RESULT
	-1 FOR GAME IS IN PROGRESS
	O GAME IS OVER AND NO RESULT
**********************************************/

int checkStatus()
{
	if (game[1] == game[2] && game[2] == game[3])

		return 1;
	else if (game[4] == game[5] && game[5] == game[6])

		return 1;
	else if (game[7] == game[8] && game[8] == game[9])

		return 1;
	else if (game[1] == game[4] && game[4] == game[7])

		return 1;
	else if (game[2] == game[5] && game[5] == game[8])

		return 1;
	else if (game[3] == game[6] && game[6] == game[9])

		return 1;
	else if (game[1] == game[5] && game[5] == game[9])

		return 1;
	else if (game[3] == game[5] && game[5] == game[7])

		return 1;
	else if (game[1] != '1' && game[2] != '2' && game[3] != '3' 
                    && game[4] != '4' && game[5] != '5' && game[6] != '6' 
                  && game[7] != '7' && game[8] != '8' && game[9] != '9')

		return 0;
	else
		return -1;
}


/*******************************************************************
     FUNCTION TO DRAW setBoard OF TIC TAC TOE WITH PLAYERS MARK
********************************************************************/


void setBoard()
{
	system("cls");
	cout << "\n\n\tTic Tac Toe\n\n";

	cout << "Player 1 (X)  -  Player 2 (O)" << endl << endl;
	cout << endl;

	cout << "     |     |     " << endl;
	cout << "  " << game[1] << "  |  " << game[2] << "  |  " << game[3] << endl;

	cout << "_____|_____|_____" << endl;
	cout << "     |     |     " << endl;

	cout << "  " << game[4] << "  |  " << game[5] << "  |  " << game[6] << endl;

	cout << "_____|_____|_____" << endl;
	cout << "     |     |     " << endl;

	cout << "  " << game[7] << "  |  " << game[8] << "  |  " << game[9] << endl;

	cout << "     |     |     " << endl << endl;
}
