#include <string>
#include <iostream>

#include "user.hh"
   User :: User(const string &username, const string &password) : m_username(username), m_password(password) {}

  bool  User :: Authentication()
    {
        string username, password;
        cout << "Enter username: ";
        cin >> username;
        cout << "Enter password: ";
        cin >> password;

        if (username == m_username && password == m_password)
        {
            cout << "Login successful" << endl;
            return true;
        }
        else
        {
            cout << "Invalid username or password" << endl;
            return false;
        }
    }