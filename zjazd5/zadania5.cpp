#include <iostream>
using namespace std;
#include <vector>;

int main()
{
	int dlugosc_wektora;
	int size;

	cout << "prosze podac zadana dlugosc wektora: " << endl;
	cin >> dlugosc_wektora;

	vector<int> wektor_uzytkownika;
	wektor_uzytkownika.reserve(dlugosc_wektora);

	size = wektor_uzytkownika.capacity();
	cout << size << endl;

	for (int i = 0; i < size; i++)
	{
		int x;
		cout << "podaj liczbe ktora chcesz dodac do wektora: " << endl;
		cin >> x;
		wektor_uzytkownika.push_back(x);
	}

	/*for (int k : wektor_uzytkownika)
	{
		cout << wektor_uzytkownika[k] << " ";
	}*/
	
	int wektor_max = 0;
	int index_wektor_max;
	
	for (int k = 0; k < size; k++)
	{
		cout << wektor_uzytkownika[k] << " ";
		
		if (wektor_max < wektor_uzytkownika[k])
		{
			wektor_max = wektor_uzytkownika[k];
			index_wektor_max = k;
		}
	}
	cout << endl << "wektor_max: " << wektor_max << endl << "index_wektor_max: " << index_wektor_max << endl;

	int array_wejsciowy[5][2] = { 1,2,3,4,5,6,7,8,9,0 };
	
	cout << endl <<"Array wejsciowy: " << endl << endl;
	
	int array_X = 0;
	int array_Y = 0;

	for (int i = 0; i < 5; i++)
	{
		for (int k = 0; k < 2; k++)
		{
			cout << array_wejsciowy[i][k] << "    ";
			
			if (i == 0) 
			{
			array_X+=1;
			}
		}
		array_Y++;
		cout << endl;
	}
	cout << endl << "wielkosc arrayu, os x: " << array_X << " oraz os y: " << array_Y << endl;

	int temp_0;
	int temp_1;

	for (int h = 0; h < 5; h++)
	{
		temp_0 = array_wejsciowy[h][0];
		temp_1 = array_wejsciowy[h][1];

		array_wejsciowy[h][0] = temp_1;
		array_wejsciowy[h][1] = temp_0;
	}

	cout << endl << "Array wyjsciowy: " << endl << endl;

	for (int x = 0; x < 5; x++)
	{
		for (int y = 0; y < 2; y++)
		{
			cout << array_wejsciowy[x][y] << "    ";
		}
		cout << endl;
	}














}