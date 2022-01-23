#include "admin.h"
#include <iostream>
#include <string>

using namespace std;



Admin::Admin()  : username{ " " }, password{ " " } {

}
Admin::Admin(string username, string password) {
    this->username = username;
    this->password = password;
}
void Admin::setUsername(string username) {
    this->username = username;
}
void Admin::setPassword(string password) {
    this->password = password;
}
string Admin::getUsername() {
    return this->username;
}
string Admin::getPassword() {
    return this->password;
}
//
// Created by Berkin on 6.01.2022.
//

