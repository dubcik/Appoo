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
<<<<<<< HEAD
		cout << " 1.Enter vector.\n" " 2.Show vector number 1.\n" " 3.Delet element of vector.\n";
		cout << " 4.Exit. \n" " 5.Delet Vector.\n" " 6.Add to vector 1-n + vector 2.\n" " 7.Show vector number 1 and number 2. \n";
=======
		cout << " 1.Enter vector.\n" " 2.Show vector №1.\n" " 3.Delet element of vector.\n";
		cout << " 4.Exit. \n" " 5.Delet Vector.\n" " 6.Add to vector1-n + vector2.\n" " 7.Show vector №1 and №2. \n";
>>>>>>> f9c31e11993b82984f5b04ab71bf19a517349241

		int in;
		string input;
		cin >> in;
		switch (in)
		{
<<<<<<< HEAD
		case(1) ://Add to Vector1
=======
		case(1) ://ввод символов в вектор
>>>>>>> f9c31e11993b82984f5b04ab71bf19a517349241
		{
			cout << " Enter number:   *(for exit whrite> exit )\n";
			while (cin >> input) {
				if (input == "exit")
					break;
				v.push_back(input);
			}}

				 break;
<<<<<<< HEAD
		case(2) ://Show Vector1
=======
		case(2) ://вывод на экран 1 вектора
>>>>>>> f9c31e11993b82984f5b04ab71bf19a517349241
		{
			cout << " Vector number:   \n";
			for (vector<string>::const_iterator iter = v.begin(); iter != v.end(); ++iter) {
				cout << " " << *iter << " \n";
																							}
		}
				 break;
<<<<<<< HEAD
		case(3) ://Delete element
=======
		case(3) ://удаление элемента
>>>>>>> f9c31e11993b82984f5b04ab71bf19a517349241
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
<<<<<<< HEAD
		case(4) ://Exit
=======
		case(4) ://Выход
>>>>>>> f9c31e11993b82984f5b04ab71bf19a517349241
		{ v.clear();
			return 0;
		}
				 break;
<<<<<<< HEAD
		case(5) ://Clear Vector 1
=======
		case(5) ://очистка контейнера вектора
>>>>>>> f9c31e11993b82984f5b04ab71bf19a517349241
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
<<<<<<< HEAD
		case(7)://Show Vector1 and Vector2 
=======
		case(7)://вывод на экран 1 вектора
>>>>>>> f9c31e11993b82984f5b04ab71bf19a517349241
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