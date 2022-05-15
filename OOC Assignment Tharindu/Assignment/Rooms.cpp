#include "Rooms.h"
#include <iostream>
#include <cstring>
using namespace std;

Rooms::Rooms()
{
	Room_Id = 0;
	strcpy(Room_No,"Empty");
	strcpy(Room_Type, "Empty");
	Hotel_Id = 0;
	Room_Price = 0;          
}

Rooms::Rooms(int RId, char RNo[], char RType[], int HId, int Rprice)
{
	Room_Id = RId;
	strcpy(Room_No, RNo);
	strcpy(Room_Type, RType);
	Hotel_Id = HId;
	Room_Price = Rprice;
}

Rooms::~Rooms()
{
	cout << "Destructor called";
}

void Rooms::GetRoomInfo()
{
}
