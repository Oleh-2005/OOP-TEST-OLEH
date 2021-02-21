#include<iostream> 
#include<windows.h>
#include<fstream>
#include<string>
#include<ctime>
#include<vector>
#include<deque> 
#include<list>
#include<map>
using namespace std;

struct User {
	int status;
	long TNumber;
	string password ;
	string Name;
	string Surname;
	string FName;
	string ResidenceAddress;
	string Login ;
};
struct test {
	int max_mark;
	int numberOftasks;
	string name;
	string task;
	int number;

};
struct ResumeTest {
	int number;
	int max_mark;
	int real_mark;
	int numberOftasks;
	string name;
	string nameOfuser;
	int fail;
	string task;
};
class Test {
	test t;
public:
	Test() {

	}
	void DoTest() {

	}

};
class Register {

public:
	Register(int Status) {
		int OK = 0;
		while (OK == 0) {
			User user;
			string sentence = "";
			string password = "";
			cout << "\nEnter your name : ";
			cin >> user.Name;
			cout << "\nEnter your surname : ";
			cin >> user.Surname;
			cout << "\nEnter your father`s name : ";
			cin >> user.FName;
			user.status = Status;
			cout << "\nEnter your residence address : ";
			cin >> user.ResidenceAddress;
			cout << "\nEnter your telephone number : ";
			cin >> user.TNumber;
			cout << "\nEnter your login : ";
			cin>>sentence;
			cout << "\nEnter your passord : ";
			cin>>password;

			
			bool ok = false;
			int shifter;					
			shifter = 4;
			User us;
			ifstream fin(R"(C:\Users\Zver\Desktop\Cursova\users.txt)");
			if (fin.is_open()) {
				while (fin >> us.Login) {
					fin  >> us.password >> us.status>>us.FName>>us.Name>>us.Surname>>us.TNumber>>us.ResidenceAddress;
					for (int i = 0; i < us.Login.length(); i++) {
						us.Login[i] = us.Login[i] - shifter;

					}
					for (int i = 0; i < us.password.length(); i++) {
						us.password[i] = us.password[i] - shifter;

					}
				    if (us.Login == sentence) {
				    	ok = true;
				    }
					
				}
				
				
			}
			fin.close();
			if (ok == false) {
				
				ofstream in(R"(C:\Users\Zver\Desktop\Cursova\users.txt)" ,ios::app);
				if (in.is_open()) {
					for (int i = 0; i < sentence.length(); i++) {
						sentence[i] = sentence[i] + shifter;

					}
					for (int i = 0; i < password.length(); i++) {
						password[i] = password[i] + shifter;

					}
					in << sentence << " " << password <<" "<< user.status << " "<< user.FName << " "<< user.Name << " "<< user.Surname << " "<< user.TNumber << " "<< user.ResidenceAddress<<endl;
					
				}
				in.close();
				OK++;
			}

			else {
				cout << "\n\n\t\tThis login is already exist" << endl;
				OK++;
			}
		}
	}
};
class Math {

};
class Biology {

};
class UKR_History {

};
class Geography {

};
class Data {
public:
	Data(int status , string login , string password) {
		if (status == 1) {

			User user;
			vector <User> v;
			int shifter;
			shifter = 4;
			ifstream in(R"(C:\Users\Zver\Desktop\Cursova\users.txt)");
			if (in.is_open()) {
				while (in >> user.Login) {
					in  >> user.password >> user.status >> user.FName >> user.Name >> user.Surname >> user.TNumber >> user.ResidenceAddress;
					for (int i = 0; i < user.Login.length(); i++) {
						user.Login[i] = user.Login[i] - shifter;

					}
					for (int i = 0; i < user.password.length(); i++) {
						user.password[i] = user.password[i] - shifter;

					}
					v.push_back(user);
				}
				for (int i = 0; i < v.size(); i++) {
					if (login == v[i].Login || password == v[i].password) {
						cout << "\nLogin : " << v[i].Login << "\tPassword : " << v[i].password << "\nName : " << v[i].Name << "\tSurname : " << v[i].Surname << "\nAddress : " << v[i].ResidenceAddress << "\tTelephone number : " << v[i].TNumber << "\nFathers name : " << v[i].FName << endl;
					}
					
				}
			}
			in.close();
		}
		else if (status == 0) {
			User user;
			vector <User> v;
			int shifter;
			shifter = 4;
			ifstream in(R"(C:\Users\Zver\Desktop\Cursova\users.txt)");
			if (in.is_open()) {
				while (in >> user.Login) {
					in  >> user.password >> user.status >> user.FName >> user.Name >> user.Surname >> user.TNumber >> user.ResidenceAddress;
					for (int i = 0; i < user.Login.length(); i++) {
						user.Login[i] = user.Login[i] - shifter;

					}
					for (int i = 0; i < user.password.length(); i++) {
						user.password[i] = user.password[i] - shifter;

					}
					v.push_back(user);
				}
				for (int i = 0; i < v.size(); i++) {
					cout << "\nLogin : " << v[i].Login << "\tPassword : " << v[i].password << "\tName : " << v[i].Name << "\tSurname : " << v[i].Surname << "\tAddress : " << v[i].ResidenceAddress << "\tTelephone number : " << v[i].TNumber << "\tFathers name : " << v[i].FName << endl;
					
				}
			}
			in.close();
		}

	}
};
class Result {
public:
	Result() {

	}
};
class SecondMenu {
public:
	SecondMenu(int status, string login, string password) {
		int exit = 0;
		while (exit == 0) {
			int want = 0;
			cout << "\nEnter 1 if you want to exit \nEnter 2 if you want to see data \nEnetr 3 if you want to continue test\nEnter 4 if you want to do test\nEnter 5 if you want to see your results from all tests" << endl;
			cout << "----> ";
			cin >> want;

			if (want == 1) {
				exit++;
			}
			else if (want == 2) {

				Data data(status , login , password);
			}
			else if (want == 3) {
				cout << "\n\n\t\tSorry . This content is not evailable now" << endl << endl;
			}
			else if (want == 4) {
				cout << "\n\n\t\tSorry . This content is not evailable now" << endl << endl;

			}
			else if (want == 5) {
				cout << "\n\n\t\tSorry . This content is not evailable now" << endl << endl;

			}
		}
	}

};
class Login {

public :
	Login(int st) {
		User luser;
		cout << "\nEnter your login : ";
		cin >> luser.Login;
		cout << "\nEnter your password : ";
		int ok = 0;
		cin >> luser.password;
		User user;
		vector <User> v;
		int shifter;
		shifter = 4;
		ifstream fin(R"(C:\Users\Zver\Desktop\Cursova\users.txt)");
		if (fin.is_open()) {
			while (!fin.eof()) {
				fin >> user.Login >> user.password >> user.status >> user.FName >> user.Name >> user.Surname >> user.TNumber >> user.ResidenceAddress;
				for (int i = 0; i < user.Login.length(); i++) {
					user.Login[i] = user.Login[i] - shifter;

				}
				for (int i = 0; i < user.password.length(); i++) {
					user.password[i] = user.password[i] - shifter;

				}

				v.push_back(user);
			}
			for (int i = 0; i < v.size(); i++) {
				if (luser.Login == "Admin" || luser.password == "Admin" || luser.status == 0) {
					ok++;
				}
			}
			for (int i = 0; i < v.size(); i++) {
				if (luser.Login == v[i].Login || luser.password == v[i].password || luser.status == 1) {
					ok--;
				}
			}
		}
		if (ok > 0) {
			SecondMenu smenu(0 , luser.Login , luser.password);
		}
		if (ok < 0) {
			SecondMenu smenu(1, luser.Login, luser.password);
		}


		else {
			cout << "\n\n\t\tERROR !!! You enter incorrect login or password" << endl << endl;
		}
		fin.close();
	}

};
class FirstMenu {
public:
	FirstMenu() {
		int exit = 0;
		while (exit == 0) {
			int want = 0;
			cout << "\nEnter 1 if you want to login \nEnetr 2 if you want to exit \nEnter 3 if you want to register" << endl;;
			cout << "----> ";
			cin >> want;
			if (want == 2) {
				cout << "\n\n\t\tGOOD BYE !" << endl;
				exit++;
			}
			else if (want == 1) {
				Login login(1);
			}
			else if (want == 3) {
				Register reg(1);
			}
		}
	}
};
int main() {
	srand(unsigned(time(NULL)));
	FirstMenu menu;

	system("pause");
	return 0;
}