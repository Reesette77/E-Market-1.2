#include <iostream>
using namespace std;

class Login {
    public:
        int login1;
        int loginCargo;
        int loginDriver;
        int loginTransComp;
};

class LoginInfo {
    public:
        string FirstName;
        string LastName;
        string EmailAddress;
        string HomeBusiness;
        string Username;
        string Password;
        int MobileNumber;

};


int main()
{
    Login UserSelect;
    UserSelect.login1;
    UserSelect.loginCargo;

    cout << "===========================================================================\n";
    cout << "Hello, and welcome to the E-Marketplace.\n";
    cout << "Here you can meet Cargo Owners, Drivers and Transportation Companies alike!\n";
    cout << "===========================================================================\n";
    cout << "\n";
    cout << "0 - Exit\n";
    cout << "1 - Cargo Owners\n";
    cout << "2 - Drivers\n";
    cout << "3 - Transportation Companies\n";
    cout << "\n";

    cout << "Enter an option number: \n"; cin >> UserSelect.login1;
    cout << "\n";

    if (UserSelect.login1 == 0) {
        cout << "Terminating Program.\n";
        return 0;
    }
//===============================================================================================================================
//===============================================================================================================================
    if (UserSelect.login1 == 1) {
        cout << "===Cargo Owner Login===\n";
        cout << "0 - Exit\n";
        cout << "1 - Log In\n";
        cout << "2 - Sign Up\n";
        cout << "\n";
        cout << "Enter an option number: \n"; cin >> UserSelect.loginCargo;

        cout << "\n";

        if (UserSelect.loginCargo == 0) {
            cout << "Terminating Program.\n";
            return 0;
        }

        if (UserSelect.loginCargo == 1) {
            cout << "Please sign up first.\n";
            return 0;
        }

        if (UserSelect.loginCargo == 2) {

            LoginInfo UserInfo;
            UserInfo.FirstName;
            UserInfo.LastName;
            UserInfo.EmailAddress;
            UserInfo.HomeBusiness;
            UserInfo.Username;
            UserInfo.Password;
            UserInfo.MobileNumber;

            cout << "To sign up, we wil need a few details from you.\n";
            cout << "\n";
            cout << "Enter your Name: \n"; cin >> UserInfo.FirstName;
            cout << "\n";
            cout << "Enter your Surname: \n"; cin >> UserInfo.LastName;
            cout << "\n";
            cout << "Email Address: \n"; cin >> UserInfo.EmailAddress;
            cout << "\n";
            cout << "Home/Business Address: \n"; cin >> UserInfo.HomeBusiness;
            cout << "\n";
            cout << "Username: \n"; cin >> UserInfo.Username;
            cout << "\n";
            cout << "Password: \n"; cin >> UserInfo.Password;
            cout << "\n";
            cout << "Mobile Number: \n"; cin >> UserInfo.MobileNumber;
            cout << "\n";
            cout << "=================================================\n";
            cout << "=================================================\n";
            cout << "\n";
            cout << "Your details are: \n";
            cout << "\n";
            cout << "First Name: " << UserInfo.FirstName << endl;
            cout << "\n";
            cout << "Surname: " << UserInfo.LastName << endl;
            cout << "\n";
            cout << "Email Address: " << UserInfo.EmailAddress << endl;
            cout << "\n";
            cout << "Home/Business Address: " << UserInfo.HomeBusiness << endl;
            cout << "\n";
            cout << "Username: " << UserInfo.Username << endl;
            cout << "\n";
            cout << "Password: " << UserInfo.Password << endl;
            cout << "\n";
            cout << "Mobile Number: " << UserInfo.MobileNumber << endl;
            cout << "\n";
            cout << "Thanks for this information, " << UserInfo.FirstName << ".\n";
            cout << "We will send you a verification message on the number provided.\n";
            cout << "Thank you for signing up! You can now use the Marketplace.\n";
            cout << "\n";
            cout << "Please press 'Enter' to close the program.\n"; cin;
            return 0;
        }
        else {
            cout << "INVALID SELECTION";
            return 0;
        }
    }
//===============================================================================================================================
//===============================================================================================================================
    if (UserSelect.login1 == 2) {
        cout << "===Driver Login===\n";
        cout << "0 - Exit\n";
        cout << "1 - Log In\n";
        cout << "2 - Sign Up\n";
        cout << "\n";
        cout << "Enter an option number: \n"; cin >> UserSelect.loginDriver;

        cout << "\n";

        if (UserSelect.loginDriver == 0) {
            cout << "Terminating Program.\n";
            return 0;
        }

        if (UserSelect.loginDriver == 1) {
            cout << "Please sign up first.\n";
            return 0;
        }

        if (UserSelect.loginDriver == 2) {

            LoginInfo UserInfo;
            UserInfo.FirstName;
            UserInfo.LastName;
            UserInfo.EmailAddress;
            UserInfo.HomeBusiness;
            UserInfo.Username;
            UserInfo.Password;
            UserInfo.MobileNumber;

            cout << "To sign up, we wil need a few details from you.\n";
            cout << "\n";
            cout << "Enter your Name: \n"; cin >> UserInfo.FirstName;
            cout << "\n";
            cout << "Enter your Surname: \n"; cin >> UserInfo.LastName;
            cout << "\n";
            cout << "Email Address: \n"; cin >> UserInfo.EmailAddress;
            cout << "\n";
            cout << "Home/Business Address: \n"; cin >> UserInfo.HomeBusiness;
            cout << "\n";
            cout << "Username: \n"; cin >> UserInfo.Username;
            cout << "\n";
            cout << "Password: \n"; cin >> UserInfo.Password;
            cout << "\n";
            cout << "Mobile Number: \n"; cin >> UserInfo.MobileNumber;
            cout << "\n";
            cout << "=================================================\n";
            cout << "=================================================\n";
            cout << "\n";
            cout << "Your details are: \n";
            cout << "\n";
            cout << "First Name: " << UserInfo.FirstName << endl;
            cout << "\n";
            cout << "Surname: " << UserInfo.LastName << endl;
            cout << "\n";
            cout << "Email Address: " << UserInfo.EmailAddress << endl;
            cout << "\n";
            cout << "Home/Business Address: " << UserInfo.HomeBusiness << endl;
            cout << "\n";
            cout << "Username: " << UserInfo.Username << endl;
            cout << "\n";
            cout << "Password: " << UserInfo.Password << endl;
            cout << "\n";
            cout << "Mobile Number: " << UserInfo.MobileNumber << endl;
            cout << "\n";
            cout << "Thanks for this information, " << UserInfo.FirstName << ".\n";
            cout << "We will send you a verification message on the number provided.\n";
            cout << "Thank you for signing up! You can now use the Marketplace.\n";
            cout << "\n";
            cout << "Please press 'Enter' to close the program.\n"; cin;
            return 0;
        }
        else {
            cout << "INVALID SELECTION";
            return 0;
        }
    }
//===============================================================================================================================
//===============================================================================================================================
    if (UserSelect.login1 == 3) {
        cout << "===Transport Company Login===\n";
        cout << "0 - Exit\n";
        cout << "1 - Log In\n";
        cout << "2 - Sign Up\n";
        cout << "\n";
        cout << "Enter an option number: \n"; cin >> UserSelect.loginTransComp;

        cout << "\n";

        if (UserSelect.loginTransComp == 0) {
            cout << "Terminating Program.\n";
            return 0;
        }

        if (UserSelect.loginTransComp == 1) {
            cout << "Please sign up first.\n";
            return 0;
        }

        if (UserSelect.loginTransComp == 2) {

            LoginInfo UserInfo;
            UserInfo.FirstName;
            UserInfo.LastName;
            UserInfo.EmailAddress;
            UserInfo.HomeBusiness;
            UserInfo.Username;
            UserInfo.Password;
            UserInfo.MobileNumber;

            cout << "To sign up, we wil need a few details from you.\n";
            cout << "\n";
            cout << "Enter your Name: \n"; cin >> UserInfo.FirstName;
            cout << "\n";
            cout << "Enter your Surname: \n"; cin >> UserInfo.LastName;
            cout << "\n";
            cout << "Email Address: \n"; cin >> UserInfo.EmailAddress;
            cout << "\n";
            cout << "Home/Business Address: \n"; cin >> UserInfo.HomeBusiness;
            cout << "\n";
            cout << "Username: \n"; cin >> UserInfo.Username;
            cout << "\n";
            cout << "Password: \n"; cin >> UserInfo.Password;
            cout << "\n";
            cout << "Mobile Number: \n"; cin >> UserInfo.MobileNumber;
            cout << "\n";
            cout << "=================================================\n";
            cout << "=================================================\n";
            cout << "\n";
            cout << "Your details are: \n";
            cout << "\n";
            cout << "First Name: " << UserInfo.FirstName << endl;
            cout << "\n";
            cout << "Surname: " << UserInfo.LastName << endl;
            cout << "\n";
            cout << "Email Address: " << UserInfo.EmailAddress << endl;
            cout << "\n";
            cout << "Home/Business Address: " << UserInfo.HomeBusiness << endl;
            cout << "\n";
            cout << "Username: " << UserInfo.Username << endl;
            cout << "\n";
            cout << "Password: " << UserInfo.Password << endl;
            cout << "\n";
            cout << "Mobile Number: " << UserInfo.MobileNumber << endl;
            cout << "\n";
            cout << "Thanks for this information, " << UserInfo.FirstName << ".\n";
            cout << "We will send you a verification message on the number provided.\n";
            cout << "Thank you for signing up! You can now use the Marketplace.\n";
            cout << "\n";
            cout << "Please press 'Enter' to close the program.\n"; cin;
            return 0;
        }
        else {
            cout << "INVALID SELECTION";
            return 0;
        }
    }
//===============================================================================================================================
//===============================================================================================================================
    else {
        cout << "INVALID SELECTION";
        return 0;
    }

}

