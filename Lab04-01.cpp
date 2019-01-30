//==========================================================
//
// Title:      Olympic Oafs
// Course:     CSC 1101
// Lab Number: 04-01   
// Author:     Abdul Mahbub
// Date:       1/24/2019
// Description: Display records of olympic speedskaters
//
//==========================================================
#include <conio.h> // For function getch()
#include <cstdlib> // For several general-purpose functions
#include <fstream> // For file handling
#include <iomanip> // For formatted output
#include <iostream> // For cin, cout, and system
#include <string> // For string data type
using namespace std; // So "std::cout" may be abbreviated to "cout"

int main()
{

  // Declare variables
  //int i;
  //double r;
  //string s;
  //char c;

  // Show application header
  cout << "Welcome to my Olympic Records Table!" << endl;
  cout << "--------------------------" << endl << endl;

  // Write to screen
  cout << "Skater(m-men; w-women)\tCountry\t\tEvent(meters)\tTime(minutes:seconds)\tSpeed(km/hour)" << endl;
  cout << endl;
  cout << "Pavel Kulizhnikov(m)\tRussia\t\t500\t\t0:33.98\t\t\t"<< 14.8411992 * 3.6 << endl;
  cout << "Shani Davis(m)\t\tUSA\t\t1000\t\t1:06.42\t\t\t" << 15.05570611 * 3.6 << endl;
  cout << "Lee Sang-hwa(w)\t\tSouth Korea\t500\t\t0:36.36\t\t\t" << 13.75137514 * 3.6 << endl;
  cout << "Nao Kodaira(w)\t\tJapan\t\t1000\t\t1:12.09\t\t\t" << 13.87154945 * 3.6 << endl;


  // Show application close
  cout << "\nEnd of my Olympic Records Table!" << endl << endl;

  // Pause before application window closes
  cout << "Press any key to exit ..." << endl;
  _getch();

}
