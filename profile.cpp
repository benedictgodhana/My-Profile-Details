#include <iostream>
using namespace std;
int main()
{
    //declare variables
    string FirstName,LastName,FullName,FavoriteMeal,FavoriteMovie;

    //Variable Initialization
    getline(cin,FirstName);
    cout<< "Your First Name:"<<FirstName<<endl;
    
    getline(cin,LastName);
    cout<<"Your Last Name:"<<LastName<<endl;

    FullName= FirstName + LastName;

    cout<<"Your Full Name:"<<FullName<<endl;

    getline(cin, FavoriteMeal);
    cout<<"Your Favorite Meal:"<<FavoriteMeal<<endl;

    getline(cin,FavoriteMovie);
    cout<<"Your Favorite Movie:"<<FavoriteMovie;


}

