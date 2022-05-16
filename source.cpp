#include <iostream>
#include "Image.h"
#include <vector> //container

using namespace std;

int main(){

	std::vector<Image*> ImageList;

	for (int Y = 0; Y < 256; ++Y)
	{
		for (int X = 0; X < 256; ++X)
		{
			ImageList.push_back(new Image(X, Y, 166, 55 ,128));
		}
	}
	
	ImageList.push_back(new Image(0,0,165,55,128));
	ImageList.push_back(new Image(0, 2, 3, 4, 5));
	ImageList.push_back(new Image(0, 0, 6, 55, 1288));
	ImageList.push_back(new Image(1, 2, 465, 56, 198));
	ImageList.push_back(new Image(0, 0, 155, 55, 128));

	cout << ImageList.size() << endl;

	for (int i = 0; i < ImageList.size(); ++i)
	{
		cout << ImageList[i]->X << " , ";
		cout << ImageList[i]->Y << " , ";
		cout << ImageList[i]->R << " , ";
		cout << ImageList[i]->G << " , ";
		cout << ImageList[i]->B << endl;
	}

	for (int i = 0; i < ImageList.size(); ++i)
	{
		delete ImageList[i];
	}

	return 0;
}