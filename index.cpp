#include <iostream>
#include <cstdlib>


using namespace std;

int main () {

cout << "Rock Paper Scissors Game !!" << endl << endl;

cout << "Choose Your Option !!" <<endl<<endl;
cout << "1) Rock " << endl;
cout << "2) Paper " << endl;
cout << "3) Scissors" << endl;

int user;

while (true) {
    cin >>user;
    if (user > 0 && user < 4)
    {
         break ;
    }
    else {
        cout << "Invalid Value , Please Try Again !" <<endl <<endl;
    }

}

if (user == 1)
{
    cout << "You Are Rock" <<endl  <<endl;
}
else if (user == 2)
{
    cout << "You Are Paper" <<endl  <<endl;
}
else if (user == 3)
{
    cout << "You Are Scissors" <<endl  <<endl;
}

int cpu;
cpu = rand()%3+1;

if (cpu == 1)
{
    cout << "Cpu Is Rock" <<endl  <<endl;
}
else if (cpu == 2)
{
    cout << "Cpu Is Paper" <<endl  <<endl;
}
else if (cpu == 3)
{
    cout << "Cpu Is Scissors" <<endl  <<endl;
}

if (user == cpu) {
    cout << "Its a Tie" <<endl<<endl;
}
else if (user == 1)
{
    if (cpu == 2) {
            cout << "You Lost !" <<endl<<endl;
    }
    else if (cpu == 3) {
            cout << "You Won !" <<endl<<endl;
    }
}
else if (user == 2)
{
    if (cpu == 3) {
            cout << "You Lost !" <<endl<<endl;
    }
    else if (cpu == 1) {
            cout << "You Won !" <<endl<<endl;
    }
}
else if (user == 3)
{
    if (cpu == 1) {
            cout << "You Lost !" <<endl<<endl;
    }
    else if (cpu == 2) {
            cout << "You Won !" <<endl<<endl;
    }
}





}
