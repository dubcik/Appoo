#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){
	vector<string> v;
	vector<string> c;
	c.push_back("10");
	c.push_back("20");
	c.push_back("30");
	c.push_back("40");
	
	while (1){
		cout << " Enter number of operation:\n";
		cout << " 1.Enter vector.\n" " 2.Show vector №1.\n" " 3.Delet element of vector.\n";
		cout << " 4.Exit. \n" " 5.Delet Vector.\n" " 6.Add to vector1-n + vector2.\n" " 7.Show vector №1 and №2. \n";

		int in;
		string input;
		cin >> in;
		switch (in)
		{
		case(1) ://ввод символов в вектор
		{
			cout << " Enter number:   *(for exit whrite> exit )\n";
			while (cin >> input) {
				if (input == "exit")
					break;
				v.push_back(input);
			}}

				 break;
		case(2) ://вывод на экран 1 вектора
		{
			cout << " Vector number:   \n";
			for (vector<string>::const_iterator iter = v.begin(); iter != v.end(); ++iter) {
				cout << " " << *iter << " \n";
																							}
		}
				 break;
		case(3) ://удаление элемента
		{

			string m;
			if (!v.empty()){

				cout << " Enter number in vector for delete:   ";
				cin >> m;
				vector<string>::iterator it = find(v.begin(), v.end(), m);

				v.erase(it);
							}
		}
				 break;
		case(4) ://Выход
		{ v.clear();
			return 0;
		}
				 break;
		case(5) ://очистка контейнера вектора
		{
			v.clear();
		}

				 break;
		case(6)://вывод на экран 1 вектора - удалённые элементы + 2 вектор
		{
			if (!v.empty()){
				string n;
				cout << "  Enter number in vector for delete:   ";
				cin >> n;
				vector<string>::iterator it = find(v.begin(), v.end(), n);
								
					v.erase(it,v.end());
					
					for (vector<string>::const_iterator iter = c.begin(); iter != c.end(); ++iter)
					{
						v.push_back(*iter);
					}
							}
			
		}
				   break;
		case(7)://вывод на экран 1 вектора
		{
			cout << " Vector 1 number:   \n";
			for (vector<string>::const_iterator iter = v.begin(); iter != v.end(); ++iter) {
				cout << " " << *iter << " \n";
			}
			cout << " Vector 2 number:   \n";
			for (vector<string>::const_iterator iter = c.begin(); iter != c.end(); ++iter) {
				cout << " " << *iter << " \n";
			}

		}
				break;
		default:
			break;

		}
	}
		
	return 0;
}