#include<iostream>
#include<string.h>
#include<cstdlib>

using namespace std;

void printmenu() {
	cout << "Type    'id'       to check valid or not" << endl;
	cout << "Type 'intfloat'    to check valid or not" << endl;
	cout << "Type 'password'    to check valid or not" << endl;
	cout << "Type 'criteria'    to check valid or not" << endl;
	cout << "Type    'int'      to check valid or not" << endl;
	cout << "Type   'float'     to check valid or not" << endl;
	cout << "Type  'complex'    to check valid or not" << endl;
}

bool validCSEid(char input[8])
{
	int i;



	for (i = 0; input[i] != '\0'; i++)
	{
		
		
			if (input[i] == 48 && input[i + 1] == 49 && input[i + 2] == 49 && input[i+5] != 48) {


				if (input[i + 3] == 48)
				{
					if (input[i + 4] >= 51 && input[i + 4] <= 57)
					{
						if (input[i+5]!='0'&&input[i + 5] >= '1' && input[i + 5] <= '3')
						{
							if (input[i + 6] >= 49 && input[i + 6] <= 57)
							{
								if (input[i + 7] >= 48 && input[i + 7] <= 57)
								{
									if (i <= 8 && (input[i + 8] >= 48 && input[i + 8] <= 57))
										continue;
									else return false;

								}
							}
							else if (input[i + 6] >= 48 && input[i + 6] <= 57)
							{
								if (input[i + 7] >= 48 && input[i + 7] <= 57)
								{
									if (i <= 8 && (input[i + 8] >= 49 && input[i + 8] <= 57))
										continue;
									else return false;
								}
							}
						}
					}

				}
				else if (input[i + 3] == 49)
				{
					if (input[i + 4] >= 48 && input[i + 4] <= 57)
					{
						if (input[i + 5] != '0' && input[i + 5] >= '1' && input[i + 5] <= '3')
						{
							if (input[i + 6] >= 49 && input[i + 6] <= 57)
							{
								if (input[i + 7] >= 48 && input[i + 7] <= 57)
								{
									if (i <= 8 && (input[i + 8] >= 48 && input[i + 8] <= 57))
										continue;
									else return false;
								}
							}
							else if (input[i + 6] >= 48 && input[i + 6] <= 57)
							{
								if (input[i + 7] >= 48 && input[i + 7] <= 57)
								{
									if (i <= 8 && (input[i + 8] >= 49 && input[i + 8] <= 57))
										continue;
									else return false;
								}
							}
						}
					}
				}

			}
		
		
		
	}return true;
	
}
	


bool validIntFloat(char input[30])
{
	int i;
	int c = 0;

	if ((input[0] >= 49 && input[0] <= 57) || (input[0] == '+' && (input[1] >= 49 && input[1] <= 57)) || (input[0] == '-' && (input[1] >= 49 && input[1] <= 57)) || (input[0] == '.' && (input[1] >= 49 && input[1] <= 57)) || ((input[0] >= 49 && input[0] <= 57) && '.') || (input[0] == '+' && input[1] == '.') || (input[0] == '-' && input[1] == '.')) {
		for (i = 1; input[i] != '\0'; i++) 
		{
			if (input[i] >= 49 && input[i] <= 57) {
				continue;
			}
			else return false;

			if (input[i] == '+' || input[i] == '-')
			{
				if ((input[i+1] >= 48 && input[i+1] <= 57) && input[i+2] == '.')
					continue;
			}
				continue;

				if (input[i] == '.') {
					if (input[i + 1] >= 48 && input[i + 1] <= 57) {
						continue;
					}

				}

			if ((input[i] >= 65 && input[i] <= 90) || (input[i] >= 97 && input[i] <= 122)) return false;
			else continue;
		}
		return true;
	}
	else
		return false;
}

bool validInteger(char input[30])
{
	int i;

	if ((input[0] >= 49 && input[0] <= 57) || (input[0] == '+' && (input[1] >= 49 && input[1] <= 57)) || (input[0] == '-' && (input[1] >= 49 && input[1] <= 57))) {
		for (i = 1; input[i] != '\0'; i++) {
			if (input[i] >= 48 && input[i] <= 57) {
				continue;
			}
			else
				return false;
		}
		return true;
	}
	else
		return false;
}

bool validFloat(char input[30])
{

	int c = 0;

	for (int i = 0; input[i] != '\0'; i++) {


		if (input[i] == '+' || input[i] == '-')
			continue;

		if (input[i] == '.') {
			if (c == 0 && input[i + 1] >= 48 && input[i + 1] <= 57) {
				c++;
				continue;
			}
			else
				return false;
		}
		if (c == 0) {
			if (input[i] >= 48 && input[i] <= 57)
				continue;
			else
				return false;
		}

		if (c == 1) {
			if (input[i] >= 48 && input[i] <= 57)
				continue;
			else
				return false;
		}

	}
	if (c == 0)
		return false;
	return true;
}

bool password(char p[50])
{
	bool up, low, num;
	up = false;
	low = false;
	num = false;
	int i;
	for (i = 0; p[i] != '\0'; i++) {
		if (p[i] >= 65 && p[i] <= 90) up = true;
		if (p[i] >= 97 && p[i] <= 122) low = true;
		if (p[i] >= 48 && p[i] <= 57) num = true;
	}

	if (i >= 8 && (p[i - 1] == '@' || p[i - 1] == '#' || p[i - 1] == '$' || p[i - 1] == '&')) {
		if (up == true && low == true && num == true)
			return true;
	}
	return false;

}

bool criteria(char p[50])
{
	for (int i = 0; p[i] != '\0'; i++) {
		if (i == 0) {
			if (p[i] >= 48 && p[i] <= 57) continue;
			else return false;
		}

		if (i == 1) {
			if (p[i] >= 65 && p[i] <= 90) continue;
			else return false;
		}

		if (i == 2) {
			if ((p[i] >= 65 && p[i] <= 90) || (p[i] >= 97 && p[i] <= 122)) return false;
			else continue;
		}

		if (i > 2) {
			if ((p[i] >= 65 && p[i] <= 90) || (p[i] >= 97 && p[i] <= 122) || (p[i] >= 48 && p[i] <= 57)) continue;
			else return false;
		}
	}
	return true;
}

bool cmlx1(char part[20], char xvar)
{
	for (int i = 0; part[i] != '\0'; i++) {
		if (part[i] == 'i') return false;
		if ((part[i] >= 97 && part[i] <= 122) || (part[i] >= 48 && part[i] <= 57)) continue;
		else return false;
	}
	return true;
}
bool cmlx2(char part[20], char xvar)
{
	bool cmx = false;
	for (int i = 0; part[i] != '\0'; i++) {
		if (part[i] == 'i' && cmx == false) {
			cmx = true;
			continue;
		}
		if ((part[i] >= 97 && part[i] <= 122) || (part[i] >= 48 && part[i] <= 57)) continue;
		else return false;
	}
	if (cmx == true)
		return true;
	else return false;
}

bool cmlx(char x[50])
{
	char xvar = '`';

	int j = 0;
	char y[50];
	for (int i = 0; x[i] != '\0'; i++) {
		if (x[i] == ' ') continue;
		y[j] = x[i];
		j++;
	}
	y[j] = '\0';

	int i = 0;
	if (y[1] == '=') {
		if (y[0] >= 97 && y[0] <= 122) xvar = y[0];
		else return false;
		i = 2;
	}

	char part1[20], part2[20];

	for (j = 0; y[i] != '\0'; i++) {
		if (y[i] == '+' || y[i] == '-') {
			i++;
			break;
		}
		part1[j] = y[i];
		j++;
	}
	part1[j] = '\0';

	for (j = 0; y[i] != '\0'; i++) {
		part2[j] = y[i];
		j++;
	}
	part2[j] = '\0';

	bool check1 = cmlx1(part1, xvar);
	bool check2 = cmlx2(part2, xvar);

	if (check1 == true && check2 == true) return true;
	else return false;
}

int main() {
	char action[20], input[30];

	printmenu();

	while (1) {
		cin >> action;
		if (strcmp(action, "id") == 0) {
			cin >> input;
			bool check = validCSEid(input);
			if (check == true)
				cout << "valid" << endl;
			else
				cout << "not valid" << endl;
		}
		else if (strcmp(action, "intfloat") == 0) {
			cin >> input;
			bool check = validIntFloat(input);
			if (check == true)
				cout << "valid" << endl;
			else
				cout << "not valid" << endl;
		}
		else if (strcmp(action, "float") == 0) {
			cin >> input;
			bool check = validFloat(input);
			if (check == true)
				cout << "valid" << endl;
			else
				cout << "not valid" << endl;
		}
		else if (strcmp(action, "int") == 0) {
			cin >> input;
			bool check = validInteger(input);
			if (check == true)
				cout << "valid" << endl;
			else
				cout << "not valid" << endl;
		}
		else if (strcmp(action, "password") == 0) {
			cin >> input;
			bool check = password(input);
			if (check == true)
				cout << "valid" << endl;
			else
				cout << "not valid" << endl;
		}
		else if (strcmp(action, "criteria") == 0) {
			cin >> input;
			bool check = criteria(input);
			if (check == true)
				cout << "valid" << endl;
			else
				cout << "not valid" << endl;
		}
		else if (strcmp(action, "complex") == 0) {
			cin >> input;
			bool check = cmlx(input);
			if (check == true)
				cout << "valid" << endl;
			else
				cout << "not valid" << endl;
		}
		else if (strcmp(action, "exit") == 0)
			break;
	}
}