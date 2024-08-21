#include <iostream>
#include <string>
#include <Windows.h>
#include <cmath>
#include <math.h>

void Calculator();
void MainM();

class LoginSystem
{
private:
	int choice = 0;
	std::string username;
	std::string password;
	std::string usernameC;
	std::string passwordC;
public:
	void Main()
	{
		system("cls");
		std::cout << "---- Register and Login system ----" << std::endl;
		std::cout << "1. Register" << std::endl;
		std::cout << "2. Login" << std::endl;
		std::cout << "3. Exit from login system" << std::endl;

		std::cin >> choice;

		switch (choice)
		{
		case 1:
			Register();
			break;
		case 2:
			Login();
			break;
		case 3:
			MainM();
			break;
		default:
			break;
		}
	}

	void Register()
	{
		system("cls");
		std::cout << "Enter username: ";
		std::cin >> username;
		usernameC = username;
		std::cout << "Enter password: ";
		std::cin >> password;
		passwordC = password;

		std::cout << "Please wait... We are registering you" << std::endl;

		Sleep(3150);

		std::cout << "Registered succesfully!" << std::endl;

		Sleep(1650);

		Main();
	}

	void Login()
	{
		system("cls");
		std::cout << "Enter username: ";
		std::cin >> username;
		std::cout << "Enter password: ";
		std::cin >> password;

		if (usernameC == username && passwordC == password)
		{
			std::cout << "Login succeeded" << std::endl;
			Sleep(1000);
			MainM();
		}
		else if (usernameC != username && passwordC == password)
		{
			std::cout << "Username or Password is incorrect" << std::endl;
			Sleep(1000);
			Main();
		}
		else if (usernameC == username && passwordC != password)
		{
			std::cout << "Username or Password is incorrect" << std::endl;
			Sleep(1000);
			Main();
		}
		else
		{
			std::cout << "Account might not exist" << std::endl;
			Sleep(1000);
			Main();
		}
	}
};

LoginSystem* loginSys;
long long int a, b;
short int choice;

void OneNumMode()
{
	choice = 0;
	int x = 0;
	system("cls");

	std::cout << "----|| One Number Mode ||----" << std::endl;

	std::cout << "Enter number: ";
	std::cin >> a;

	std::cout << "What do you want to do?" << std::endl;
	std::cout << "1. To the power of 2" << std::endl;
	std::cout << "2. Custom power" << std::endl;
	std::cout << "3. Exit" << std::endl;

	std::cin >> choice;

	switch (choice)
	{
	case 1:
		std::cout << "Number " << a << " raisen to the power of 2 is " << pow(a, 2) << std::endl;
		break;
	case 2:
		std::cout << "Enter power: ";
		std::cin >> x;
		std::cout << "Number " << a << " raisen to the power of " << x << " is " << pow(a, x) << std::endl;
		break;
	case 3:
		Calculator();
		break;
	default:
		std::cout << "ERROR::UNKNOWN::COMMAND" << std::endl;
		break;
	}
}

void TwoNumMode()
{
	choice = 0;
	system("cls");

	std::cout << "----|| Two Numbers Mode ||----" << std::endl;

	std::cout << "Enter first number: ";
	std::cin >> a;

	std::cout << "Enter second number: ";
	std::cin >> b;

	std::cout << "What do you want to do?" << std::endl;
	std::cout << "1. Addition" << std::endl;
	std::cout << "2. Subtraction" << std::endl;
	std::cout << "3. Multiplication" << std::endl;
	std::cout << "4. Division" << std::endl;
	std::cout << "5. Everything" << std::endl;

	std::cin >> choice;

	switch (choice)
	{
	case 1:
		std::cout << "The result of this addition is " << a + b << std::endl;
		break;
	case 2:
		std::cout << "The result of this subtraction is " << a - b << std::endl;
		break;
	case 3:
		std::cout << "The result of this multiplication is " << a * b << std::endl;
		break;
	case 4:
		std::cout << "The result of this division is " << a / b << std::endl;
		break;
	case 5:
		std::cout << "The result of this addition is " << a + b << std::endl;
		std::cout << "The result of this subtraction is " << a - b << std::endl;
		std::cout << "The result of this multiplication is " << a * b << std::endl;
		std::cout << "The result of this division is " << a / b << std::endl;
		break;
	default:
		std::cout << "ERROR::UNKNOWN::COMMAND" << std::endl;
		Calculator();
		break;
	}

}

void Calculator()
{
	system("cls");
	
	std::cout << "-----| Calculator |-----" << std::endl;

	std::cout << "1. One Number Mode" << std::endl;
	std::cout << "2. Two Numbers Mode" << std::endl;
	std::cout << "3. Exit to Menu" << std::endl;

	std::cin >> choice;

	switch (choice)
	{
	case 1:
		OneNumMode();
		break;
	case 2:
		TwoNumMode();
		break;
	case 3:
		MainM();
		break;
	default:
		system("cls");
		std::cout << "ERROR::UNKNOWN::COMMAND" << std::endl;
		Calculator();
		break;
	}

	std::cout << "Do you want to go back to menu?" << std::endl;
	std::cout << "1. Yes" << std::endl;
	std::cout << "2. No" << std::endl;

	std::cin >> choice;

	switch (choice)
	{
	case 1:
		MainM();
		break;
	case 2:
		Calculator();
		break;
	default:
		system("cls");
		std::cout << "ERROR::UNKNOWN::COMMAND" << std::endl;
		Calculator();
		break;
	}
}

void GuessingGame()
{
	system("cls");
	int num = 0;
	int guess;

	std::cout << "Set difficulty" << std::endl;
	std::cout << "1. Easy (1-5)" << std::endl;
	std::cout << "2. Medium (1-10)" << std::endl;
	std::cout << "3. Hard (1-20)" << std::endl;
	std::cout << "4. Impossible (1-35)" << std::endl;

	std::cin >> choice;

	switch (choice)
	{
	case 1:
		num = rand() % 5 + 1;
		break;
	case 2:
		num = rand() % 10 + 1;
		break;
	case 3:
		num = rand() % 20 + 1;
		break;
	case 4:
		num = rand() % 35 + 1;
		break;
	default:
		std::cout << "ERROR::UNKNOWN::COMMAND" << std::endl;
		break;
	}

	std::cout << "Enter your guess: ";
	std::cin >> guess;

	std::cout << "Processing..." << std::endl;
	Sleep(2000);

	if (guess == num)
	{
		std::cout << "Congratulations! You win!!" << std::endl;
	}
	else
	{
		std::cout << "You lose :(" << std::endl;
		std::cout << "The guess was " << num << std::endl;
	}

	Sleep(1500);
	MainM();
}

void Quiz()
{
	choice = 0;
	std::cout << "Are you ready to start quiz?" << std::endl;
	std::cout << "1. Yes" << std::endl;
	std::cout << "2. No (Menu)" << std::endl;

	std::cin >> choice;

	switch (choice)
	{
	case 1:
		std::cout << "Starting quiz..." << std::endl;
		Sleep(1700);
		system("cls");
		break;
	case 2:
		MainM();
		break;
	default:
		std::cout << "ERROR::UNKNOWN::COMMAND" << std::endl;
		Sleep(500);
		system("cls");
		Quiz();
		break;
	}

	char ans = ' ';
	float exp = 0.0f;

	std::cout << "    ----+Question 1+----" << std::endl;
	std::cout << "What color apple is?" << std::endl;
	std::cout << "a) blue" << std::endl;
	std::cout << "b) orange" << std::endl;
	std::cout << "c) red" << std::endl;
	std::cout << "d) black" << std::endl;

	std::cin >> ans;

	switch (ans)
	{
	case 'a':
	case 'b':
	case 'd':
		std::cout << "Wrong answer :( try next time." << std::endl;
		Sleep(950);
		system("cls");
		Quiz();
		break;
	case 'c':
		exp += 1.f;
		std::cout << "Correct! You got 1 exp!\nYou have " << exp << " exp." << std::endl;
		break;
	default:
		std::cout << "ERROR::UNKNOWN::COMMAND" << std::endl;
		Sleep(500);
		system("cls");
		Quiz();
		break;
	}

	std::cout << "Generating next question..." << std::endl;
	Sleep(2000);
	system("cls");

	std::cout << "    ----+Question 2+----" << std::endl;
	std::cout << "In which continent Poland is?" << std::endl;
	std::cout << "a) Europe" << std::endl;
	std::cout << "b) Africa" << std::endl;
	std::cout << "c) Asia" << std::endl;
	std::cout << "d) South America" << std::endl;

	std::cin >> ans;

	switch (ans)
	{
	case 'a':
		exp += 1.f;
		std::cout << "Correct! You got 1 exp!\nYou have " << exp << " exp." << std::endl;
		break;
	case 'b':
	case 'c':
	case 'd':
		std::cout << "Wrong answer :( try next time." << std::endl;
		Sleep(950);
		system("cls");
		Quiz();
		break;
	default:
		std::cout << "ERROR::UNKNOWN::COMMAND" << std::endl;
		Sleep(500);
		system("cls");
		Quiz();
		break;
	}

	std::cout << "Generating next question..." << std::endl;
	Sleep(2000);
	system("cls");

	std::cout << "    ----+Question 3+----" << std::endl;
	std::cout << "There is more lands or an oceans?" << std::endl;
	std::cout << "a) Lands" << std::endl;
	std::cout << "b) Oceans" << std::endl;

	std::cin >> ans;

	switch (ans)
	{
	case 'a':
		std::cout << "Wrong answer :( try next time." << std::endl;
		Sleep(950);
		system("cls");
		Quiz();
		break;
	case 'b':
		exp += 1.f;
		std::cout << "Correct! You got 1 exp!\nYou have " << exp << " exp." << std::endl;
		break;
	default:
		std::cout << "ERROR::UNKNOWN::COMMAND" << std::endl;
		Sleep(500);
		system("cls");
		Quiz();
		break;
	}

	std::cout << "Generating next question..." << std::endl;
	Sleep(2000);
	system("cls");

	std::cout << "    ----+Question 4+----" << std::endl;
	std::cout << "What is C in chemistry on periodic table?" << std::endl;
	std::cout << "a) Hydrogen" << std::endl;
	std::cout << "b) Oxygen" << std::endl;
	std::cout << "c) Carbon" << std::endl;

	std::cin >> ans;

	switch (ans)
	{
	case 'a':
	case 'b':
		std::cout << "Wrong answer :( try next time." << std::endl;
		Sleep(950);
		system("cls");
		Quiz();
		break;
	case 'c':
		exp += 1.f;
		std::cout << "Correct! You got 1 exp!\nYou have " << exp << " exp." << std::endl;
		break;
	default:
		std::cout << "ERROR::UNKNOWN::COMMAND" << std::endl;
		Sleep(500);
		system("cls");
		Quiz();
		break;
	}

	std::cout << "Thats the end of quiz!! Thanks for playing!" << std::endl;
	std::cout << "You got total of " << exp << " exp! :)" << std::endl;
	std::cout << "Ending Quiz..." << std::endl;
	Sleep(1200);
	MainM();
}

void ReverseWord()
{
	system("cls");
	choice = 0;
	std::string word;
	std::cout << "--Type word you want to reverse: ";
	std::cin >> word;

	std::cout << "Reversing..." << std::endl;
	word = std::string(word.rbegin(), word.rend());
	Sleep(1200);

	std::cout << "You reverse word: " << word << std::endl;

	Sleep(400);

	std::cout << "Do you want to go back to menu?" << std::endl;
	std::cout << "1. Yes" << std::endl;
	std::cout << "2. No" << std::endl;

	std::cin >> choice;

	switch (choice)
	{
	case 1:
		Sleep(120);
		MainM();
		break;
	case 2:
		Sleep(120);
		ReverseWord();
		break;
	default:
		system("cls");
		std::cout << "ERROR::UNKNOWN::COMMAND" << std::endl;
		Sleep(600);
		ReverseWord();
		break;
	}
}

void MainM()
{
	system("cls");
	choice = 0;
	std::cout << "What do you want to use?" << std::endl;
	std::cout << "1. Calculator" << std::endl;
	std::cout << "2. Login system" << std::endl;
	std::cout << "3. Guessing number game" << std::endl;
	std::cout << "4. Quiz" << std::endl;
	std::cout << "5. Reverse word" << std::endl;
	std::cout << "6. Exit" << std::endl;

	std::cin >> choice;

	switch (choice)
	{
	case 1:
		Calculator();
		break;
	case 2:
		loginSys->Main();
		break;
	case 3:
		GuessingGame();
		break;
	case 4:
		Quiz();
		break;
	case 5:
		ReverseWord();
		break;
	case 6:
		exit(0);
		break;
	default:
		system("cls");
		std::cout << "ERROR::UNKNOWN::COMMAND" << std::endl;
		Sleep(600);
		MainM();
		break;
	}
}

int main()
{
	loginSys = new LoginSystem();
	MainM();
	delete loginSys;
}