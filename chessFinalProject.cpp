#include <iostream>
#include <cmath>
#include <string>

using namespace std;

string chessBoard[8][8][5] =
{

    {
      {
        {'R'},{'W'},{'C'},{'0'},{'0'}
      },
      {
         {'P'},{'W'},{'C'},{'0'},{'1'}
      },
      {
         {'E'},{'N'},{'C'},{'2'},{'0'}
      },
      {
        {'E'},{'N'},{'C'},{'2'},{'0'}
      },
      {
        {'E'},{'N'},{'C'},{'2'},{'0'}
      },
      {
        {'E'},{'N'},{'C'},{'2'},{'0'}
      },
      {
        {'p'},{'B'},{'C'},{'2'},{'0'}
      },
      {
        {'r'},{'B'},{'C'},{'2'},{'0'}
      }
    },{
      {
        {'N'},{'W'},{'W'},{'0'},{'1'}
      },
      {
        {'P'},{'W'},{'W'},{'1'},{'1'}
      },
      {
        {'E'},{'N'},{'C'},{'4'},{'0'}
      },
      {
        {'E'},{'N'},{'C'},{'4'},{'0'}
      },
      {
        {'E'},{'N'},{'C'},{'4'},{'0'}
      },
      {
        {'E'},{'N'},{'C'},{'4'},{'0'}
      },
      {
        {'p'},{'B'},{'C'},{'1'},{'6'}
      },
      {
        {'n'},{'B'},{'W'},{'0'},{'1'}
      }
    },
    {
      {
        {'B'},{'W'},{'C'},{'0'},{'2'}
      },
      {
        {'P'},{'W'},{'W'},{'2'},{'1'}
      },
      {
        {'E'},{'N'},{'C'},{'2'},{'2'}
      },
      {
        {'E'},{'N'},{'W'},{'2'},{'3'}
      },
      {
        {'E'},{'N'},{'C'},{'2'},{'4'}
      },
      {
        {'E'},{'N'},{'W'},{'2'},{'5'}
      },
      {
        {'p'},{'B'},{'C'},{'2'},{'6'}
      },
      {
        {'b'},{'B'},{'W'},{'2'},{'7'}
      }
    },
    {
      {
        {'Q'},{'W'},{'W'},{'0'},{'3'}
      },
      {
        {'P'},{'W'},{'W'},{'3'},{'1'}
      },
      {
        {'E'},{'N'},{'C'},{'3'},{'2'}
      },
      {
        {'E'},{'N'},{'W'},{'3'},{'3'}
      },
      {
        {'E'},{'N'},{'C'},{'3'},{'4'}
      },
      {
        {'E'},{'N'},{'W'},{'3'},{'5'}
      },
      {
        {'p'},{'B'},{'C'},{'3'},{'6'}
      },
      {
        {'q'},{'B'},{'W'},{'3'},{'7'}
      }
    },
    {
      {
        {'K'},{'W'},{'C'},{'0'},{'4'}
      },
      {
        {'P'},{'W'},{'W'},{'4'},{'1'}
      },
      {
        {'E'},{'N'},{'C'},{'4'},{'2'}
      },
      {
        {'E'},{'N'},{'W'},{'4'},{'3'}
      },
      {
        {'E'},{'N'},{'C'},{'4'},{'4'}
      },
      {
        {'E'},{'N'},{'W'},{'4'},{'5'}
      },
      {
        {'p'},{'B'},{'C'},{'4'},{'6'}
      },
      {
        {'k'},{'B'},{'W'},{'4'},{'7'}
      }
    },
    {
      {
        {'B'},{'W'},{'W'},{'0'},{'5'}
      },
      {
        {'P'},{'W'},{'W'},{'5'},{'1'}
      },
      {
        {'E'},{'N'},{'C'},{'5'},{'2'}
      },
      {
        {'E'},{'N'},{'W'},{'5'},{'3'}
      },
      {
        {'E'},{'N'},{'C'},{'5'},{'4'}
      },
      {
        {'E'},{'N'},{'W'},{'5'},{'5'}
      },
      {
        {'p'},{'B'},{'W'},{'5'},{'1'}
      },
      {
        {'b'},{'B'},{'W'},{'0'},{'5'}
      }
    },
    {
      {
        {'N'},{'W'},{'C'},{'0'},{'6'}
      },
      {
        {'P'},{'W'},{'W'},{'6'},{'1'}
      },
      {
        {'E'},{'N'},{'W'},{'5'},{'7'}
      },
      {
        {'E'},{'N'},{'W'},{'5'},{'7'}
      },
      {
        {'E'},{'N'},{'W'},{'5'},{'7'}
      },
      {
        {'E'},{'N'},{'W'},{'5'},{'7'}
      },
      {
        {'p'},{'B'},{'C'},{'6'},{'6'}
      },
      {
        {'n'},{'B'},{'C'},{'0'},{'6'}
      }
    },
    {
      {
        {'R'},{'W'},{'W'},{'0'},{'7'}
      },
      {
        {'P'},{'W'},{'C'},{'6'},{'6'}
      },
      {
        {'E'},{'N'},{'W'},{'5'},{'3'}
      },
      {
        {'E'},{'N'},{'W'},{'5'},{'3'}
      },
      {
        {'E'},{'N'},{'W'},{'5'},{'3'}
      },
      {
        {'E'},{'N'},{'W'},{'5'},{'3'}
      },
      {
        {'p'},{'B'},{'C'},{'6'},{'6'}
      },
      {
        {'r'},{'B'},{'W'},{'7'},{'7'}
      }
    }

};


void showChessBoard(string chessBoard[8][8][5])
{
    cout << " x:   A  B  C  D  E  F  G  H " << endl << "y:" << endl;
    for (int i = 0; i < 8; i++)
    {
        cout << " " << i + 1 << "   ";

        for (int j = 0; j < 8; j++)
        {
            string p = chessBoard[i][j][0];
            if (p == "E")
            {
                p = "-";
            }
            cout << " " + p + " ";
        }
        cout << endl;
    }
}
string player = "W";

void setPlayerToPlay(string played)
{
    if (played == "W")
    {
        player = "B";
        cout << " Black Player " << endl;
    }
    else
    {
        player = "W";
        cout << " White Player " << endl;
    }

}
int checkY(string element)
{
    int index = -1;
    string column[8] = { {'A'},{'B'},{'C'},{'D'},{'E'},{'F'},{'G'},{'H'} };
    for (int i = 0; i < 8; i++)
    {
        if (column[i] == element)
        {
            index = i;
        }
    }
    return index;

}

void setSpace(int x1, int y1, int x2, int y2)
{
    string color = chessBoard[x1][y1][1];
    string piece = chessBoard[x1][y1][0];
    chessBoard[x2][y2][0] = piece;
    chessBoard[x2][y2][1] = color;

}
void setEmpty(int x, int y)
{
    chessBoard[x][y][1] = "N";
    chessBoard[x][y][0] = "E";

}

bool movePawn(int pawnX, int pawnY, int thatX, int thatY, string chessBoard[8][8][5])
{
    bool invalid = false;

    string pColor = chessBoard[pawnX][pawnY][1];
    string sColor = chessBoard[thatX][thatY][1];

    if (pColor == "W")
    {

        if (pawnX == thatX && thatY == pawnY + 1 && sColor == "N")
        {
            setSpace(pawnX, pawnY, thatX, thatY);
            setEmpty(pawnX, pawnY);
            return true;
        }
        else
            if ((pawnX + 1 == thatX || pawnX - 1 == thatX) && pawnY + 1 == thatY && sColor == "B")
            {
                setSpace(pawnX, pawnY, thatX, thatY);
                setEmpty(pawnX, pawnY);
                return true;
            }
            else
                return false;
    }
    else
        if (pColor == "B")
        {
            if (pawnX == thatX && thatY == pawnY - 1 && sColor == "N")
            {
                setSpace(pawnX, pawnY, thatX, thatY);
                setEmpty(pawnX, pawnY);
                return true;
            }
            else
                if ((pawnX + 1 == thatX || pawnX - 1 == thatX) && pawnY - 1 == thatY && sColor == "W")
                {
                    setSpace(pawnX, pawnY, thatX, thatY);
                    setEmpty(pawnX, pawnY);
                    return true;
                }
                else
                    return false;
        }
        else
            return false;

}
bool moveRook(int rookX, int rookY, int thatX, int thatY)
{

    bool invalid = false;
    if (rookX != thatX || rookY != thatY)
    {

        if (rookX == thatX)
        {
            int yIncrement = (thatY - rookY) / (abs(thatY - rookY));
            for (int i = rookY + yIncrement; i != thatY; i += yIncrement)
            {

                if (chessBoard[thatX][i][1] != "N")
                    return false;

            }
        }
        else
            if (rookY == thatY)
            {

                int xIncrement = (thatX - rookX) / (abs(thatX - rookX));
                for (int i = rookX + xIncrement; i != thatX; i += xIncrement)
                {
                    if (chessBoard[i][thatY][1] != "N")
                        return false;
                }
            }
            else
                return false;
    }
    if (invalid == false)
    {
        setSpace(rookX, rookY, thatX, thatY);
        setEmpty(rookX, rookY);
        return true;
    }
    else
    {
        cout << " Not a valid move for rook ";
        return false;
    }
}
bool moveKnight(int x1, int y1, int x2, int y2)
{


    if ((abs(x1 - x2) == 2 && abs(y1 - y2) == 1) || (abs(x1 - x2) == 1 && abs(y1 - y2) == 2))
    {
        setSpace(x1, y1, x2, y2);
        setEmpty(x1, y1);
        return true;
    }
    else
    {
        return false;
    }
}
bool moveBishop(int x1, int y1, int x2, int y2)
{

    bool invalid = false;

    if (abs(x1 - x2) == abs(y1 - y2))
    {
        int xIncrement = (x2 - x1) / (abs(x2 - x1));
        int yIncrement = (y2 - y1) / (abs(y2 - y1));

        for (int i = 1; i < abs(x1 - x2); i++)
        {
            if (chessBoard[x1 + xIncrement * i][y1 + yIncrement * i][1] != "N")
                return false;

        }
    }
    else
        return false;

    if (invalid == false)
    {
        setSpace(x1, y1, x2, y2);
        setEmpty(x1, y1);
        return true;
    }
    else
    {
        return false;
    }
}
bool moveQueen(int x1, int y1, int x2, int y2)
{
    int yIncrement;
    int xIncrement;

    bool invalid = false;
    if (x1 != x2 || y1 != y2)
    {

        if (x1 == x2)
        {
            yIncrement = (y2 - y1) / (abs(y2 - y1));
            for (int i = y1 + yIncrement; i != y2; i += yIncrement)
            {

                if (chessBoard[x2][i][1] != "N")
                    return false;

            }
        }
        else
            if (y1 == y2)
            {

                xIncrement = (x2 - x1) / (abs(x2 - x1));
                for (int i = x1 + xIncrement; i != x2; i += xIncrement)
                {
                    if (chessBoard[i][y2][1] != "N")
                        return false;
                }
            }
            else
                if (abs(x1 - x2) == abs(y1 - y2))
                {
                    xIncrement = (x2 - x1) / (abs(x2 - x1));
                    yIncrement = (y2 - y1) / (abs(y2 - y1));

                    for (int i = 1; i < abs(x1 - x2); i++)
                    {
                        if (chessBoard[x1 + xIncrement * i][y1 + yIncrement * i][1] != "N")
                            return false;

                    }
                }
                else
                    return false;
    }


    if (invalid == false)
    {
        setSpace(x1, y1, x2, y2);
        setEmpty(x1, y1);
        return true;
    }
    else
    {
        return false;
    }
}
bool moveKing(int x1, int y1, int x2, int y2)
{

    if (abs(x2 - x1) == 1)
    {
        if (abs(y2 - y1) == 1)
        {
            setSpace(x1, y1, x2, y2);
            setEmpty(x1, y1);
            return true;
        }
        else return false;
    }
    else return false;
}

bool makeMove(int x1, int y1, int x2, int y2, string chessBoard[8][8][5])
{
    if (x1 < 0 || x1>7 || y1 < 0 || y1>7 || x2 < 0 || x2>7 || y2 < 0 || y2>7)
    {
        cout << "Your inputs were out of board" << endl;
        return false;
    }
    string src = chessBoard[x1][y1][1];
    string dest = chessBoard[x2][y2][1];
    string chessPiece = chessBoard[x1][y1][0];

    if (src == dest && dest != "N")
    {
        cout << "Invalid move: cannot land on your own piece" << endl;
        return false;
    }
    if (chessPiece == "K" || chessPiece == "k")
    {
        return moveKing(x1, y1, x2, y2);
    }
    else if (chessPiece == "Q" || chessPiece == "q")
    {
        return moveQueen(x1, y1, x2, y2);
    }
    else if (chessPiece == "B" || chessPiece == "b")
    {
        return moveBishop(x1, y1, x2, y2);
    }
    else if (chessPiece == "N" || chessPiece == "n")
    {
        return moveKnight(x1, y1, x2, y2);
    }
    else if (chessPiece == "R" || chessPiece == "r")
    {
        return moveRook(x1, y1, x2, y2);
    }
    else if (chessPiece == "P" || chessPiece == "p")
    {
        return movePawn(x1, y1, x2, y2, chessBoard);
    }

    return false;
}

bool checkMoveAbility(string chessBoard[8][8][5])
{
    string move;
    int x1 = 0, x2 = 0, y1 = 0, y2 = 0;
    string yy, yyy;
    bool stop = false;
    if (player == "W")
    {
        cout << "White's turn (capital letters): " << endl;
    }
    else
    {
        cout << "Black's turn (small letters): " << endl;
    }
    while (!stop)
    {
        cout << "Enter starting and final position without spaces and in yx format." << endl;


        cin >> move;

        x1 = move[0] - 1;
        x2 = move[2] - 1;
        x1 = x1 - 48;
        x2 = x2 - 48;
        yy = move[1];
        yyy = move[3];
        y1 = checkY(yy);
        y2 = checkY(yyy);

        if (chessBoard[x1][y1][1] == player)
        {
            if (makeMove(x1, y1, x2, y2, chessBoard) == false)
            {
                cout << "  Invalid move, try again.  " << endl;
            }
            else
                stop = true;
        }
        else {
            cout << "\n Invalid player  ";
        }
    }
    if (chessBoard[x2][y2][0] == "K")
        if (chessBoard[x1][y1][1] == "W")
        {
            cout << "WHITE WINS" << endl;
            return false;
        }
        else

        {
            cout << "BLACK WINS" << endl;
            return false;
        }
    setPlayerToPlay(player);
    return true;
}
bool playGame()
{
    system("cls");
    showChessBoard(chessBoard);
    return checkMoveAbility(chessBoard);

}
int main()
{

    string s;
    bool newgame = true;
    cout << "   _____ _    _ ______  _____ _____ \n  / ____| |  | |  ____|/ ____/ ____| \n | |    | |__| | |__  | (___| (___  \n | |    |  __  |  __|  \\___  \\___ \\ \n | |____| |  | | |____ ____) |___) | \n  \\_____|_|  |_|______|_____/_____/ \n" << endl;
    cout << "Semester End Project (Programming Fundamental)" << endl;
    cout << "Enter any key to continue" << endl;
    cin >> s;

    while (newgame)
    {

        while (playGame());
        cout << "Do you want to play again? (y for yes, anything else for no) ";
        cin >> s;
        if (s != "y")
            newgame = false;
    }

    return 0;
}
