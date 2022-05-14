#pragma once
class Hotel
{
private:
	int Hotel_Id;
	char Hotel_name[30];
	char Hotel_Address[80];
	char Contact[10];

public:
	Hotel();
	Hotel(int HId, char HName[], char HAddress[], char ContNo[]);
	void getHotelInfo();
	~Hotel();
};

