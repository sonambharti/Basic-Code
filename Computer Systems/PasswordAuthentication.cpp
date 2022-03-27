/* Password Authentication is the process of checking the identity of a user.
"""
A password authentication system is a system that is used for the identification
of a user. Think of it like a login screen that you see while logging in to your
Facebook account. It asks for your email or a username and then it asks for your
password.
If you have entered the correct password then it verifies you as the real user.
"""
*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string username[] = {"sonam","rajnandini","simran"};
    string password[] = {"sona123","shyamli","sonika"};
    string pass, userid, res;
    cout<<"Enter your username: ";
    cin>>userid; 
    cout<<"Enter your password: ";
    cin>>pass;    
    for(int i = 0; i<sizeof(username); i++)
    {
        if (userid == username[i])
        {
            res = password[i];
        }
    }
    if (res == pass)
    {
        cout<<"Password Verified...";
    }
    else
        cout<<"Invalid";
    return 0;
}