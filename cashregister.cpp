#include <iostream>
#include<string>
#include <iomanip>

using namespace std;

void calculate_price_discount(float first_price, float second_price, bool is_customer_card, float tax_rate);
int main()
{
    float first_item_price,second_item_price,tax_rate;
    string clup_card_answer;
    bool is_customer_card = false;

    cout<<"Enter price of the first item:";
    cin>>first_item_price;

    cout<<"Enter price of the second item:";
    cin>>second_item_price;

    cout<<"Does customer have a club card? (Y/N):";
    cin>>clup_card_answer;

    cout<<"Enter tax rate, e.g. 5.5 for 5.5% tax: ";
    cin>>tax_rate;

    if (clup_card_answer == "Y" || clup_card_answer == "y" || clup_card_answer == "yes")
    {
        is_customer_card = true;
    }
    else if (clup_card_answer == "N" || clup_card_answer == "n" || clup_card_answer == "no")
    {
        is_customer_card = false;
    }
    else
    {
        cout<<"Please type  ‘Y’ or ‘y’ for “yes”; ‘N’ or ‘n’ for “no”"<<endl;
        return 1;
    }
    
    calculate_price_discount(first_item_price,second_item_price,is_customer_card,tax_rate);

    return 0;
}
void calculate_price_discount(float first_item_price,float second_item_price, bool is_customer_card, float tax_rate)
{
    float price_discount,higher_price,lower_price,base_price,total_price;

    base_price = first_item_price + second_item_price;

    if (first_item_price >= second_item_price)
    {
        higher_price = first_item_price;
        lower_price = second_item_price;
    }
    else
    {
        higher_price = second_item_price;
        lower_price = first_item_price;
    }

    if (is_customer_card == true)
    {
        price_discount = higher_price + (lower_price * 0.5) - (higher_price + (lower_price * 0.5) ) * (0.1);
    }
    else
    {
        price_discount = higher_price + (lower_price * 0.5);
    }
    total_price = price_discount + price_discount * tax_rate * 0.01;
    cout<<"Base price = "<<std::setprecision(2)<<fixed<<base_price<<endl;
    cout<<"Price after discounts = "<<std::setprecision(2)<<price_discount<<endl;
    cout<<"Total price = "<<std::setprecision(2)<<total_price<<endl;
}