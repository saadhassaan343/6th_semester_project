#include <iostream>
using namespace std;
int main() 
{
    try 
	{
        cout << "Enter a string: ";
        string input;
        cin >> input;

        for (char ch : input) 
		{
            if (ch == 'm' || ch == 'M') 
			{
                throw runtime_error("Exception: Found 'm' or 'M' in the string.");
            }
        }

        cout << "No 'm' or 'M' found in the string." << endl;
    } 
	catch (const exception& e) 
	{
        cerr << e.what() << endl;
    }
    return 0;
}
