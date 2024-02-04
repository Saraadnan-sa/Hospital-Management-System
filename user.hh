#ifndef USER
#define USER
using namespace std;

class User
{
private:
    string m_username;
    string m_password;

public:
    User(const string &username, const string &password);

    bool Authentication();
};
#endif //user