#include <iostream>
#include <conio.h>
//enum {LOAD=1, MODIFY, SAVE, EXIT};
//enum {SEPIA=1, BLACK, NEGATIVE, CONTOUR, BACK};
using namespace std;

int main()
 {
    char decision;
    bool exit = false;
    cout << "Graphics"<< endl;
	cout << "What do you think about programming?" << endl;
	do
    {
    cout << "Choose one option:" << endl;
	cout << "1: load new file .bmp," << endl;
	cout << "2: modify image," << endl;
	cout << "3: save changes," << endl;
	cout << "4: exit" << endl;
	cout << "------------------------------------"<< endl;
	decision=getch();
    switch(decision)
      {
		case '1':
			cout << "Loading file ..." << endl;
			// powinna pojawic sie instrukcja wczytujjąca plik
			break; //alternatywa dla wczytania innej grafiki
		case '2':
			cout << "Choose one efekt:" <<endl;
			cout << "1: sepia," << endl;
			cout << "2: black and white," << endl;
			cout << "3: negative," << endl;
			cout << "4: contour"<< endl;
			cout << "5: back to options"<< endl;
			cout << "------------------------------------"<< endl;
            decision=getch();
            switch( decision )
            {
                case '1':
                cout << "Add efekt sepia..." << endl;
                // powinna pojawic sie instrukcja modyfikująca plik
                break;
                case '2':
                cout << "Add efekt black and white..." << endl;
                // powinna pojawic sie instrukcja modyfikująca plik
                break;
                case '3':
                cout << "Add efekt negative..." << endl;
                // powinna pojawic sie instrukcja modyfikująca plik
                break;
                case '4':
                cout << "Add efekt contour..." << endl;
                // powinna pojawic sie instrukcja modyfikująca plik
                break;
                case '5':
                break;
                default: //else
                cout << "Try one more time" << endl;
            }
            break;
		case '3':
			cout << "Saving ..." << endl;
			// powinna pojawic sie instrukcja zapisująca plik
			 break;
        case '4':
            {
            cout << " Thank you for the use of this program. " << endl;
			exit = true;
			break;
            }
		default: // else
			cout << "Try one more time" << endl; break;
        }
    } while (exit == false);
	return 0;

}
