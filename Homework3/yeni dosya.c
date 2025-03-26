#include <stdio.h>
#include <stdlib.h>

double get_balance(); 
void update_balance(double new_balance); 
void check_balance(); 
void deposit_money(); 
void withdraw_money(); 
void menu(); 

void main(){
    menu();
}

void menu(){
    printf("----- Virtual ATM -----\n\n");
    printf("1. Check Balance\n\n");
    printf("2. Deposit Money\n\n");
    printf("3. Withdraw Money\n\n");
    printf("4. Exit\n\n");

    int input;
    printf("Choose an option: ");
    if(scanf("%d", &input) == 0){
        printf("\n");
        printf("Invalid input - Exiting the Program\n\n");
        return;
    }
    printf("\n");
    switch (input)
    {
    case 1:
        check_balance();
        break;
    case 2:
        deposit_money();
        break;
    case 3:
        withdraw_money();
        break;
    case 4:
        printf("Exiting the Program\n\n");
        break;
    
    default:
        printf("Invalid input - Exiting the Program\n\n");
        break;
    }
}

double get_balance(){
    double balance;
    FILE *fp = fopen("account.txt", "r");
    if(fp != NULL){
        fscanf(fp, "%lf", &balance);
        fclose(fp);
    }else{
        printf("No account found creating an account with 100 initial credits\n\n");
        fp = fopen("account.txt", "w");
        balance = 100;
        fprintf(fp, "100");
        fclose(fp);
    }
    
    return balance;
}

void check_balance(){
    double balance = get_balance();
    printf("Current balance: %.2lf TRY\n\n", balance);
}

void deposit_money(){
    double balance = get_balance(), deposit;

    printf("Enter amount to deposit: ");
    if(scanf("%lf", &deposit) == 0){
        printf("\n");
        printf("Invalid input - Exiting the Program\n\n");
        return;
    }
    if(deposit <= 0){
        printf("\n");
        printf("Invalid value to deposit - Exiting the Program\n\n");
        return;
    }
    printf("\n");
    balance += deposit;
    update_balance(balance);

    printf("Deposit successful! New balance: %.2lf TRY (Saved account.txt)\n\n", balance);
    

}

void update_balance(double new_balance){
    FILE *fp = fopen("account.txt", "w");
    fprintf(fp, "%lf", new_balance);
    fclose(fp);
}

void withdraw_money(){
    double withdraw;
    double balance = get_balance();
    printf("Enter amount to withdraw: ");
    if(scanf("%lf", &withdraw) == 0){
        printf("\n");
        printf("Invalid input - Exiting the Program\n\n");
        return;
    }
    if(withdraw <= 0){
        printf("\n");
        printf("Invalid value to withdraw - Exiting the Program\n\n");
        return;
    }
    if(withdraw > balance){
        printf("\n");
        printf("Insufficient funds! Your balance is only %.2lf TRY.\n\n", balance);
        return;
    }
    printf("\n");
    balance -= withdraw;
    update_balance(balance);
    printf("Withdraw successful! New balance: %.2lf TRY (Saved account.txt)\n\n", balance);
}