#include <stdio.h>

// the amount of foods and drinks 
#define cake 40
#define cookie 40
#define coffee 40
#define tea 40
// the price of foods and drinks
#define cake_price 3
#define cookie_price 2
#define coffee_price 6
#define tea_price 4

int choice;
int i = 1;
long total; // the variable that keeps the total price of foods and drinks
// the function that shows the cafe menu
int cake_number, cookie_number, coffee_number, tea_number;

void menu(void) {
    printf("What do you want to buy?\n");
    printf("1: Cake  2: Cookie  3: Coffee  4: tea \n");
}

// function that mesure the number of food and drinks
void order_amount(int m) {
    if (m == 1) 
        cake_number++;
    else if (m == 2) 
        cookie_number++;
    else if (m == 3)
        coffee_number++;
    else if (m == 4) 
        tea_number++;
}

void take_photo(void) {
    int photo;
        printf("Do you want to take photo? 1: 'YES' , 0: 'NO'");
        scanf("%d", &photo);
        if (photo == 1) {
            printf("BE READY\n");
            printf("TAK\n\n");
        }
        else if (photo == 0)
            printf("NO PROBLEM, what ever you Sir/Madam");
        else 
            printf("Invalid input!!!");
        int k = 0;
        while (k <= 100000000)
        {
            k++;
        }
        
        if (photo == 1) {
        printf("Here is your photo!!!\n\n");
        printf("..........000...000..........\n");
        printf(".........00000.00000.........\n");
        printf("........0000000000000........\n");
        printf("........0000000000000........\n");
        printf(".........00000000000.........\n");
        printf("..........000000000..........\n");
        printf("...........0000000...........\n");
        printf("............00000............\n");
        printf(".............000.............\n");
        printf("..............0..............\n");
    }
}

void buy(int m) {
    if (m == 1) 
        total += cake_price;
    else if (m == 2) 
        total += cookie_price;
    else if (m == 3)
        total += coffee_price;
    else if (m ==4) 
        total += tea_price;
}


int choice_fun(int n) {
    if (n <= 0)
        return 1;

    switch (n) {
    case 1:
        buy(n);
        order_amount(n);
        i++;
        printf("You ordered cake\n");
        printf("___________________________________________\n");
        break;
    case 2:
        buy(n);
        order_amount(n);
        i++;
        printf("You ordered cookie\n");
        printf("___________________________________________\n");
        break;
    case 3:
        buy(n);
        order_amount(n);
        i++;
        printf("You ordered coffee\n");
        printf("___________________________________________\n");
        break;
    case 4:
        buy(n);
        order_amount(n);
        i++;
        printf("You ordered tea\n");
        printf("___________________________________________\n");
        break;
    
    default:
        printf("invalid input!\n");
        printf("Please order again\n\n");
        break;
    }
}
// function for paying money 
void pay(void) {
    int way = 0;
    long money = 0;
    printf("Pay the money please!!!\n");
    printf("how do want to pay? 1: phisycal money or 2: Card\n");
    scanf("%d", &way);
    // funtion that print the amount of orders
    if (way == 1) {
        printf("Please give the money?");
        scanf("%ld", &money);
        if (money == total)
            printf("THANKS A LOT\n");
        else {
            printf("please pay the money completly!!!\n");
            pay();
        }
    }
    // funtion that print the amount of orders
    else if (way == 2) {
        int card_code;
        printf("Please draw your card\n");
        printf("Enter your card code?");
        scanf("%d", &card_code);
        printf("Enter the amount of money and pay?");
        scanf("%ld", &money);
        if (money == total)
            printf("THANKS A LOT\n");
        else {
            printf("please pay the money completly!!!\n");
            pay();
        }
    }
    else // if the costomer do not pay completly
        pay();
}
// funtion that print the amount of orders
void print_orders(void) {
    if (cake_number != 0)
        printf("You ordered <%d> %s, it cost %d$\n", cake_number, "cake", cake_number * cake_price);
    if (cookie_number != 0)
        printf("You ordered <%d> %s, it cost %d$\n", cookie_number, "cookie", cookie_number * cookie_price);
    if (coffee_number != 0)
        printf("You ordered <%d> %s, it cost %d$\n", coffee_number, "coffee",coffee_number * coffee_price);
    if (tea_number != 0)
        printf("You ordered <%d> %s, it cost %d$\n", tea_number, "tea", tea_number * tea_price);
}

int main() {
    printf("welcome to HACKER`S CAFE!\n");
    int n; 
    printf("ENTER THE NUMBER OF YOUR REQUSTS?");
    scanf("%d", &n);
    printf("___________________________________________\n");

    while(i <= n) {
        printf("The %d order\n");
        menu();
        scanf("%d", &choice);
        choice_fun(choice);
    }

    printf("You ordered %d things\n", n);
    // funtion that print the amount of orders
    print_orders();

    printf("The total cost is %ld$\n\n", total);
    pay();

    take_photo();
}