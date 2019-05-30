#include <iostream>
#include <string>
using namespace std;

class User
{
	public:
		User( string uname, string pass )
		{
			uid = i;
			username = uname;
			password = pass;
			i++;
		}

		string getUsername()
		{
			return username;
		}
		int getUID()
		{
			return uid; 
		}
	private:
		static int i;
		int uid = 0;
		string username;
		string password;
};
int User::i = 0;

int main() {

	User *u1 = new User("root", "password");
	User *u2 = new User("guest", "password");


	cout << "User: " << u1 -> getUsername() << " UID: " << u1 -> getUID() << endl;
	cout << "User: " << u2 -> getUsername() << " UID: " << u2 -> getUID() << endl;

	delete u1;
	delete u2;

	return 0;
}
