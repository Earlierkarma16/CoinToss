#include <iostream>
using namespace std;
void coinToss();
int main()
{

    int timesTossed;
    int numberRandom;

    string outcome;

    cout<< "Please enter the number of times you wish to toss the coin: ";
    cin >> timesTossed;

    srand(timesTossed);
    for (int i = 1; i <= timesTossed; i++)
    {
        numberRandom =timesTossed;
        if (numberRandom == 1)
            outcome = "Heads";
        else
            outcome = "Tails";
    }
    cout << outcome << endl;

    return 0;
}
void coinToss()
{
    int MIN_VALUE =1;
    int MAX_VALUE =2;
    int coin;
    int numberRandom;
    coin= (numberRandom%(MAX_VALUE-MIN_VALUE+1)+MIN_VALUE;
    cout<<(coin==MIN_VALUE?"Heads":"Tails")<<endl;
}