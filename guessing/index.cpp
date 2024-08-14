#include <iostream>


using namespace std;

void Guess(int number)

{

int i;


cout << "\n Enter your guesses (number) , you will get 3 chances."<<endl<<" All the best"; for (i = 1; i < 4; i++)

{

cout <<"\nEnter guess "<<i<<endl;

cin >> number;

if(i == 1)

{

cout<<"(Hint: it is a single digit number)"; 


}

if(number == 6 || number == 8)

{

cout<<"\nJust near the guess";

}

if (number == 7)
{

cout <<"Woohooo!!! Your Guess is correct.";

break;

//this break will help to end the program if guess is correct.

}

else

{

cout <<"\nBetter luck next time";

}

}

}

int main()

{

int number, i;

cout << "\n Welcome to The Guessing game";

Guess(number); 
return 0;

}