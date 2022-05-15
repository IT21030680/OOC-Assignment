#pragma once
class Rooms
{
private:
	int Room_Id;
	char Room_No[5];
	char Room_Type[20];
	int Hotel_Id;
	int Room_Price;

public:
	Rooms();
	Rooms(int RId, char RNo[],char RType[], int HId, int Rprice);
	~Rooms();
	void GetRoomInfo();
};

