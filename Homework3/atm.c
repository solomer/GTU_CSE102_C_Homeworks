#include <stdio.h>
FILE *accounts;
double get_balance();
void update_balance(double new_balance);
void check_balance();
void deposit_money();
void withdraw_money();
void menu();

int main()
{
  printf("----- Virtual ATM -----\n");
  double initialBalance = 100.00;
  accounts = fopen("/home/omer/linuxcode/gtu cse homeworks/Homework3/account.txt", "r");
  if (accounts == NULL || fgetc(accounts) == EOF)
  {
    printf("Generating a new account with a balance of 100$\n");
    update_balance(initialBalance);
  }
  menu();
  return 0;
}

void update_balance(double new_balance)
{
  accounts = fopen("/home/omer/linuxcode/gtu cse homeworks/Homework3/account.txt", "w");
  fprintf(accounts, "%f", new_balance);
  fclose(accounts);
}
void check_balance()
{
  double balance;
  accounts = fopen("/home/omer/linuxcode/gtu cse homeworks/Homework3/account.txt", "r");
  if (accounts == NULL)
  {
    printf("Error we couldnt find the file.\n");
  }
  fscanf(accounts, "%lf", &balance);
  fclose(accounts);
  printf("Current balance: $%.2f\n", balance);
  menu();
}
void deposit_money()
{
  double amount;
  printf("Enter amount to deposit: ");
  scanf("%lf", &amount);
  if (amount<=0)
  {
    printf("You can only deposit positive amount!.\n");
  }
  else
  {

    double balance;
    accounts = fopen("/home/omer/linuxcode/gtu cse homeworks/Homework3/account.txt", "r");
    if (accounts == NULL)
    {
      printf("Error we couldnt find the file.\n");
    }
    fscanf(accounts, "%lf", &balance);
    fclose(accounts);
    update_balance(amount + balance);
    printf("Deposit successful! New balance: $%.2f (Saved account.txt)", amount + balance);
  }
  menu();
}
void withdraw_money()
{
  double amount;
  printf("Enter amount to withdraw: ");
  scanf("%lf", &amount);

  if (amount<=0)
  {
    printf("You can only withdraw positive amount!.\n");
  }
  else
  {
    double balance;
    accounts = fopen("/home/omer/linuxcode/gtu cse homeworks/Homework3/account.txt", "r");
    if (accounts == NULL)
    {
      printf("Error we couldnt find the file.\n");
    }
    fscanf(accounts, "%lf", &balance);
    fclose(accounts);
    if (amount > balance)
    {
      printf("Insufficient funds! Your balance is only $%.2f\n", balance);
    }
    else
    {
      update_balance(balance - amount);
      printf("Withdraw succwssful! New balance: $%.2f\n", balance - amount);
    }
  }
  menu();
}

void menu()
{
  int option;
  printf("1. Check Balance\n2. Deposit Money\n3. Withdraw Money\n4. Exit\nChoose an option: ");
  if (scanf("%d", &option))
  {
    if (option == 1)
    {
      check_balance();
    }
    else if (option == 2)
    {
      deposit_money();
    }
    else if (option == 3)
    {
      withdraw_money();
    }
    else if (option == 4)
    {
      printf("Program ended successsfully\n");
    }
    else
    {
      printf("Please enter a proper option\n");
    }
  }
}