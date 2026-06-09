#include <bits/stdc++.h>
using namespace std;

class temp
{
    string username, Email, Password;
    string searchName, searchPass, searchEmail;
    fstream file;

public:
    void Login();
    void SingUp();
    void Forget();
} obj;

int main()
{
    char choice;

    cout << "1. Login\n";
    cout << "2. Sign Up\n";
    cout << "3. Forget Password\n";
    cout << "4. Exit\n";
    cout << "Enter Your Choice: ";
    cin >> choice;
    cin.ignore();

    switch (choice)
    {
    case '1':
        obj.Login();
        break;

    case '2':
        obj.SingUp();
        break;

    case '3':
        obj.Forget();
        break;

    case '4':
        return 0;

    default:
        cout << "Invalid Selection...";
    }

    return 0;
}

void temp::SingUp()
{
    cout << "\nEnter Your User Name: ";
    getline(cin, username);

    cout << "Enter Your Email Address: ";
    getline(cin, Email);

    cout << "Enter Your Password: ";
    getline(cin, Password);

    file.open("loginData.txt", ios::out | ios::app);

    file << username << "*" << Email << "*" << Password << endl;

    file.close();

    cout << "\nAccount Created Successfully!\n";
}

void temp::Login()
{
    cout << "\n----- Login -----\n";

    cout << "Enter Your User Name: ";
    getline(cin, searchName);

    cout << "Enter Your Password: ";
    getline(cin, searchPass);

    file.open("loginData.txt", ios::in);

    bool found = false;

    while (getline(file, username, '*'))
    {
        getline(file, Email, '*');
        getline(file, Password);

        if (username == searchName && Password == searchPass)
        {
            cout << "\nLogin Successful!\n";
            cout << "Username: " << username << endl;
            cout << "Email: " << Email << endl;
            found = true;
            break;
        }
    }

    if (!found)
    {
        cout << "\nInvalid Username or Password!\n";
    }

    file.close();
}

void temp::Forget()
{
    cout << "\nEnter Your Username: ";
    getline(cin, searchName);

    cout << "Enter Your Email Address: ";
    getline(cin, searchEmail);

    file.open("loginData.txt", ios::in);

    bool found = false;

    while (getline(file, username, '*'))
    {
        getline(file, Email, '*');
        getline(file, Password);

        if (username == searchName && Email == searchEmail)
        {
            cout << "\nAccount Found!\n";
            cout << "Your Password is: " << Password << endl;
            found = true;
            break;
        }
    }

    if (!found)
    {
        cout << "\nAccount Not Found!\n";
    }

    file.close();
}

//date:05-06-26
//Registration And Login Form 
