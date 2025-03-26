#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
  FILE *gameState;
  const char *fileName = "game_state.txt";
  int playerX, playerY, doorX, doorY;
  srand(time(0));
  int width, height;
  gameState = fopen("/home/omer/linuxcode/gtu cse homeworks/Homework2/game_state.txt", "r");
  if (gameState == NULL || fgetc(gameState) == EOF)
  {
    gameState = fopen("/home/omer/linuxcode/gtu cse homeworks/Homework2/game_state.txt", "w");
    printf("Generating a new board...\nEnter the width and the height of the board:");
    scanf("%d %d", &width, &height);
    if (width <= 0 || height <= 0 || (height == 1 && width == 1))
    {
      printf("Width and height cant be less than 1.\n");
      return 0;
    }
    doorX = rand() % (width) + 1;
    doorY = rand() % (height) + 1;
    playerX = rand() % width + 1;
    playerY = rand() % height + 1;
    if (doorX == playerX)
    {
      int a = rand() % (height - 1) + 1;
      if (a == doorY)
      {
        a++;
        playerY = a;
      }
      else
      {
        playerY = a;
      }
    }
    else
    {
      playerY = rand() % height + 1;
    }
    if (doorY == playerY)
    {
      int a = rand() % (width - 1) + 1;
      if (a == doorX)
      {
        a++;
        playerX = a;
      }
      else
      {
        playerX = a;
      }
    }
    else
    {
      playerX = rand() % width + 1;
    }
    fprintf(gameState, "%d %d %d %d %d %d", width, height, playerX, playerY, doorX, doorY);
    printf("Width: %d Height: %d Player:(%d,%d) Door:(%d %d)\n", width, height, playerX, playerY, doorX, doorY);
    fclose(gameState);
  }
  else
  {
    gameState = fopen("/home/omer/linuxcode/gtu cse homeworks/Homework2/game_state.txt", "r");
    fscanf(gameState, "%d %d %d %d %d %d", &width, &height, &playerX, &playerY, &doorX, &doorY);
    char move;
    printf("Enter move(WASD):");
    scanf("%c", &move);
    if (move == 'A')
    {
      if (playerX == 1)
      {
        printf("You can't go through the wall. Try again.\n");
        return 0;
      }
      playerX--;
      printf("Player moves left to (%d,%d)\n", playerX, playerY);
      fclose(gameState);
      gameState = fopen("/home/omer/linuxcode/gtu cse homeworks/Homework2/game_state.txt", "w");
      fprintf(gameState, "%d %d %d %d %d %d", width, height, playerX, playerY, doorX, doorY);

      if (playerX == doorX && playerY == doorY)
      {
        printf("Congratulations! You escaped!\nGenerating a new board...\n");
        remove(fileName);
        return 0;
      }
      else
      {
        printf("Game continues...\n");
        return 0;
      }
    }
    else if (move == 'W')
    {
      if (playerY == height)
      {
        printf("You can't go through the wall. Try again.\n");
        return 0;
      }
      playerY++;
      printf("Player moves up to (%d,%d)\n", playerX, playerY);
      fclose(gameState);
      gameState = fopen("/home/omer/linuxcode/gtu cse homeworks/Homework2/game_state.txt", "w");
      fprintf(gameState, "%d %d %d %d %d %d", width, height, playerX, playerY, doorX, doorY);

      if (playerX == doorX && playerY == doorY)
      {
        printf("Congratulations! You escaped!\nGenerating a new board...\n");
        remove(fileName);
        return 0;
      }
      else
      {
        printf("Game continues...\n");
        return 0;
      }
    }
    else if (move == 'S')
    {
      if (playerY == 1)
      {
        printf("You can't go through the wall. Try again.\n");
        return 0;
      }
      playerY--;
      printf("Player moves down to (%d,%d)\n", playerX, playerY);
      fclose(gameState);
      gameState = fopen("/home/omer/linuxcode/gtu cse homeworks/Homework2/game_state.txt", "w");
      fprintf(gameState, "%d %d %d %d %d %d", width, height, playerX, playerY, doorX, doorY);

      if (playerX == doorX && playerY == doorY)
      {
        printf("Congratulations! You escaped!\nGenerating a new board...\n");
        remove(fileName);
        return 0;
      }
      else
      {
        printf("Game continues...\n");
        return 0;
      }
    }
    else if (move == 'D')
    {
      if (playerX == width)
      {
        printf("You can't go through the wall. Try again.\n");
        return 0;
      }
      playerX++;
      printf("Player moves right to (%d,%d)\n", playerX, playerY);
      fclose(gameState);
      gameState = fopen("/home/omer/linuxcode/gtu cse homeworks/Homework2/game_state.txt", "w");
      fprintf(gameState, "%d %d %d %d %d %d", width, height, playerX, playerY, doorX, doorY);
      
      if (playerX == doorX && playerY == doorY)
      {
        printf("Congratulations! You escaped!\nGenerating a new board...\n");
        remove(fileName);
        return 0;
      }
      else
      {
        printf("Game continues...\n");
        return 0;
      }
    }
    else
    {
      printf("Please enter a proper move.\n");
      return 0;
    }
  }
  return 0;
}