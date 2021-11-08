#include <iostream>

using namespace std;

template< class CharT, class Traits >
std::basic_ostream<CharT, Traits>& endll(std::basic_ostream<CharT, Traits>& os)
{
	os.put(os.widen('\n'));
	os.put(os.widen('\n'));
	os.flush();

	return os;
}

int main()
{
  //Task1 

	{
		int a;
		cout << "Enter your number: ";

		while (true)
		{
			cin >> a;

			if (cin.good() && cin.peek() == '\n')
			{
				cin.ignore(numeric_limits<streamsize>::max(), '\n');
				break;
			}
			cin.clear();
			cerr << "Invalid Number. Try Again! "<< endl;
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
		}

		cout << "Your number: " << a << endl;
	}

	//Task2
	{
		cout << "Hi Jhonny!" << endll;
		cout << "Hi Tom";

	}

}

