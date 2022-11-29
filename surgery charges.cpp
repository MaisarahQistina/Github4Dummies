//void surgeryCharges();
//
//void surgeryCharges()
//{
//	int surgery;
//	int surgery_charges;
//	
//	cout << "Type of surgery: ";
//	cin >> surgery;
//	
//	switch(surgery)
//	{
//		case 1: 
//		{
//			if (surgery==1) //if user chooses colon and rectal surgery
//				surgery_charges = 12000; //colon and rectal surgery charges
//			else if (surgery==2) //if user chooses gynecological surgery
//				surgery_charges = 17000; //gynecological surgery charges		
//			else if (surgery==3) //if user chooses neurosurgery
//				surgery_charges = 30000; //neurosurgery charges
//			else if (surgery==4) //if user chooses orthopedic surgery
//				surgery_charges = 20000; //orthopedic surgery charges
//			else if (surgery==5) //if user chooses outpatient surgery
//				surgery_charges = 5000; //outpatient surgery charges
//			break;
//		}
//	}
//	
//	cout << "RM " << surgery_charges;
//}

#include<iostream>
using namespace std;

void surgeryCharges();

int main()
{
    surgeryCharges();
    return 0;
}

void surgeryCharges()
{
    int surgery;
    double surgery_charges;

    cout << "Type of surgery: ";
    cin >> surgery;

            if (surgery==1) //if user inputs colon and rectal surgery
                surgery_charges = 12000; //colon and rectal surgery charges
            else if (surgery==2) //if user inputs gynecological surgery
                surgery_charges = 17000; //gynecological surgery charges
            else if (surgery==3) //if user inputs neurosurgery
                surgery_charges = 30000; //neurosurgery charges
            else if (surgery==4) //if user inputs orthopedic surgery
                surgery_charges = 20000; //orthopedic surgery charges
            else if (surgery==5) //if user inputs outpatient surgery
                surgery_charges = 5000; //outpatient surgery charges
                cout << surgery_charges;4
}

