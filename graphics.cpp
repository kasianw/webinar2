#include <iostream>
enum {load=1, modify, save, exit};
enum {sepia=1, black, negative, contour};
using namespace std;

int main()
 {
    int decision;
    bool EXIT = false;
    cout << "Graphics"<< endl;
	cout << "What do you think about programming?" << endl;
	do
    {
    cout << "Choose one option:" << endl;
	cout << "1: load new file .bmp," << endl;
	cout << "2: modify image," << endl;
	cout << "3: save changes," << endl;
	cout << "4: exit" << endl;
	cin >> decision;

	switch( decision )
        {
		case load:
			cout << "Loading file ..." << endl;
			// powinna pojawic sie instrukcja wczytujjąca plik
		case modify:
			cout << "Choose one efekt:" <<endl;
			cout << "1: sepia," << endl;
			cout << "2: black and white," << endl;
			cout << "3: negative," << endl;
			cout << "4: contour"<< endl;
            cin >> decision;
            switch( decision )
            {
                case sepia:
                cout << "Add efekt sepia..." << endl;
                // powinna pojawic sie instrukcja modyfikująca plik
                break;
                case black:
                cout << "Add efekt black and white..." << endl;
                // powinna pojawic sie instrukcja modyfikująca plik
                break;
                case negative:
                cout << "Add efekt negative..." << endl;
                // powinna pojawic sie instrukcja modyfikująca plik
                break;
                case contour:
                cout << "Add efekt contour..." << endl;
                // powinna pojawic sie instrukcja modyfikująca plik
                break;
                default: //else
                cout << "Try one more time" << endl;
            }
            break;
		case save:
			cout << "Saving ..." << endl;
			// powinna pojawic sie instrukcja zapisująca plik
			 break;
        case exit:
            {
            cout << " Thank you for the use of this program. " << endl;
			EXIT = true;
			break;
            }
		default: // else
			cout << "Try one more time" << endl; break;
        }
    } while (EXIT == false);
	return 0;

}
