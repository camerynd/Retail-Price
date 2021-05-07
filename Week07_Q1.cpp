#include<iostream>
#include<iomanip>
using namespace std;
//function prototypes
void user_input(double& wholeSale, double& markUp);
double calculate_retail(double wholeSale, double markUp);

int main()
{   
    double wholesaleCost, markupPercentage, retailPrice;//declaring variables
    cout << "Hello! Please enter your item's wholesale cost and markup percentage, and "; 
    cout << "I will calulate the retail price." << endl << endl;//explaining program to user
    user_input(wholesaleCost, markupPercentage);//calling user input function
    retailPrice = calculate_retail(wholesaleCost, markupPercentage);//assigning returned value of calculate_retail 
    //to retailPrice
    cout << setprecision(2) << fixed;
    cout << "The retail price of your item is $" << retailPrice << "." << endl << endl; //display result
    return 0;
}

void user_input(double& wholeSale, double& markUp)//asks user for input and assigns input to variables
{   
    cout << "Wholesale cost: $ ";
    cin >> wholeSale;
    cout << "Markup percentage: ";
    cin >> markUp;
    cout << endl;
    while(wholeSale < 0 || markUp < 0)//input validation only allowing values of 0 or greater
    {   
        cout << "Please enter only positive values." << endl;
        cout << "Wholesale cost: ";
        cin >> wholeSale;
        cout << "Markup percentage: ";
        cin >> markUp;
    }
}

double calculate_retail(double wholeSale, double markUp)//performs calculation to find retail price using variables given
{   
    double retail = ((markUp * wholeSale) / 100) + wholeSale;
    return retail;//returns retail price
}