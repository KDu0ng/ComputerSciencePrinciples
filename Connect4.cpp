#include <iostream>
using namespace std;

bool b(int board[][7], int player, int x, int y) {
  //check left
  if (x > 2 && board[y][x - 1] == player && board[y][x - 2] == player && board[y][x - 3] == player) {
    cout << x << "," << y << "  left";
    return true;
  }

  //check upleft
  if (x > 2 && y > 2 && board[y - 1][x - 1] == player && board[y - 2][x - 2] == player && board[y - 3][x - 3] == player) {
    cout << x << "," << y << "  upleft";
    return true;
  }

  //check up
  if (y > 2 && board[y - 1][x] == player && board[y - 2][x] == player && board[y - 3][x] == player) {
    cout << x << "," << y << "  up";
    return true;
  }

  //check upright
  if (x < 4 && y > 2 && board[y - 1][x + 1] == player && board[y - 2][x + 2] == player && board[y - 3][x + 3] == player) {
    cout << x << "," << y << "  upright";
    return true;
  }

  //check right
  if (x < 4 && board[y][x + 1] == player && board[y][x + 2] == player && board[y][x + 3] == player) {
    cout << x << "," << y << "  right";
    return true;
  }

  //check downright
  if (x < 4 && y < 3 && board[y + 1][x + 1] == player && board[y + 2][x + 2] == player && board[y + 3][x + 3] == player) {
    cout << x << "," << y << "  downright";
    return true;
  }

  //check down
  if (y < 3 && board[y + 1][x] == player && board[y + 2][x] == player && board[y + 3][x] == player) {
    cout << x << "," << y << "  down";
    return true;
  }

  //check downleft
  if (x > 2 && y < 3 && board[y + 1][x - 1] == player && board[y + 2][x - 2] == player && board[y + 3][x - 3] == player) {
    cout << x << "," << y << "  downleft";
    return true;
  }

  return false;
}

int isWin(int board[][7], int player) {
  for (int r = 0; r < 6; r++) {
    for (int c = 0; c < 7; c++) {
      if (board[r][c] == player) {
        if (b(board, player, c, r)) {
          return player;
        } 
      }
    }
  }
  return 0;
}

void print(int board[][7]) {
  printf("  Connect 4\n");
  for (int r = 0; r < 6; r++) {
    for (int c = 0; c < 7; c++) {
      if (board[r][c] == 0) {
        printf("0 ");
      } else if (board[r][c] == 1) {
        printf("\x1B[31m0\033[0m ");
      } else if (board[r][c] == 2) {
        printf("\x1B[93m0\033[0m ");
      } 
    }
    printf("\n");
  }
  printf("1 2 3 4 5 6 7\n");
}

bool full(int board[][7]) {
  for (int c = 0; c < 7; c++) {
    if (board[0][c] == 0) {
      return false;
    }
  }
  return true;
}

int main () {
  int board[6][7];
  int win = 0;
  int player = 1;

  for (int r = 0; r < 6; r++) {
    for (int c = 0; c < 7; c++) {
      board[r][c] = 0;
    }
  }

  while (win == 0 && !full(board)) {
    print(board);
    int col = 0;
    cout << "What column would player " << player << " like to play?\n";
    cin >> col;
    col -= 1;
    
    while (board[0][col] != 0 || col > 6 || col < 0) {
      cout << "Unable to play there. Try again?\n";
      cin >> col;
      col -= 1;
    }
    
    for (int r = 1; r < 6; r++) {
      if (board[r][col] != 0) {
        board[r - 1][col] = player;
        break;
      } else if (r == 5) {
        board[5][col] = player;
      }
    }

    win = isWin(board, player);
    if (player == 1) {
      player = 2;
    } else {
      player = 1;
    }
  }

  print(board);
  if (win == 1) {
    cout << "Player 1 wins!\n";
  } else if (win == 2) {
    cout << "Player 2 wins!\n";
  } else {
    cout << "It's a tie!\n";
  }
}
//g++ -o Connect4.exe Connect4.cpp && ./Connect4.exe