#include <iostream>
using namespace std;
#include <vector>

class User
{
    string status = "Active";

public:
    string first_name;
    string last_name;
    string get_status()
    {
        return status;
    }
};

bool add_user_if_not_exists(vector<User> &users, const User &new_user)
{
    for (const auto &user : users)
    {
        if (user.first_name == new_user.first_name &&
            user.last_name == new_user.last_name)
        {
            return false; // already exists
        }
    }

    users.push_back(new_user);
    return true; // added successfully
}

int main()
{
    vector<User> users;

    User user1, user2, user3;
    user1.first_name = "Godswill";
    user1.last_name = "Uchechi";

    user2.first_name = "Jane";
    user2.last_name = "Doe";

    user3.first_name = "John";
    user3.last_name = "Smith";

    users.push_back(user1);
    users.push_back(user2);
    users.push_back(user3);

    User new_user;


    cout << "Enter first name: ";
    cin >> new_user.first_name;


    cout << "Enter last name: ";
    cin >> new_user.last_name;
    
    cout << endl;


    if (add_user_if_not_exists(users, new_user))
    {
        for(size_t i = 0; i < users.size(); i++)
        {
            cout << users[i].first_name << " " << users[i].last_name << endl;
        }
    }
    else
    {
        cout << "User already exists." << endl;
    }

    cout << users.size() << endl;

    return 0;
}