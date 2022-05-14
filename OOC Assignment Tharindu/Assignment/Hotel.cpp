#include "Hotel.h"
#include <iostream>
#include <cstring>
using namespace std;

Hotel::Hotel()
{
	Hotel_Id = 0;
	strcpy(Hotel_name , "Empty");
	strcpy(Hotel_Address, "Empty"); 
	strcpy(Contact, "Empty");
}
Hotel::Hotel(int HId, char HName[], char HAddress[],char ContNo[])
{
	Hotel_Id = HId;
	strcpy(Hotel_name, HName);
	strcpy(Hotel_Address, HAddress);
	strcpy(Contact, ContNo);
	
}
void Hotel::getHotelInfo()
{
}

Hotel::~Hotel()
{
	cout << "Destructor called : Hotel";
}