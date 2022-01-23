#include <iostream>

using namespace std;


class Admin
{
private:
    string username;
    string password;
public:
    Admin();
    Admin (string username, string password);
    void setUsername(string username);
    void setPassword(string password);
    string getUsername();
    string getPassword();
};