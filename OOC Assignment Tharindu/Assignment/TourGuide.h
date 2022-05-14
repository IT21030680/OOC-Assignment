#pragma once
class TourGuide
{
private:
	int Guide_Id;
	char Guide_name[30];
	char Contact[10];
	char Guide_NIC[15];
	int Price_Per_Day;
public:
	TourGuide();
	TourGuide(int GId, char Gname[], char ContNo[10], char GNIC[], int PricePD);
	~TourGuide();
	void displayGuideInfo();
};

