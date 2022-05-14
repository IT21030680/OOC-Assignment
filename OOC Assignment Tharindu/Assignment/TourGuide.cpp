#include "TourGuide.h"
#include <iostream>
#include <cstring>
using namespace std;

TourGuide::TourGuide()
{
	Guide_Id = 0;
	strcpy(Guide_name, "Empty");
	strcpy(Contact, "Empty");
	strcpy(Guide_NIC, "Empty");
	Price_Per_Day = 0;
}

TourGuide::TourGuide(int GId, char Gname[], char ContNo[10], char GNIC[], int PricePD)
{
	Guide_Id = GId;
	strcpy(Guide_name, Gname);
	strcpy(Contact, ContNo);
	strcpy(Guide_NIC, GNIC);
	Price_Per_Day = 0;
}

TourGuide::~TourGuide()
{
	cout << "Destructor called : Tuor Guide";
}

void TourGuide::displayGuideInfo()
{

}
