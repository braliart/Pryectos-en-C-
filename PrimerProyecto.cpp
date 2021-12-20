/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

#define FRIEND 1

int main()
{
    char name [200];
    cout<< "escribe tu nombre";
    cin >> name;

    #ifdef FRIEND 
    cout << "Hola " << name << ", que tal !";
    #endif
    
    return 0;
}
