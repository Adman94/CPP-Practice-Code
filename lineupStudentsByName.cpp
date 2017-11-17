#include<iostream>
#include<string>
using namespace std;

int main() {
	
	//enter the number of students in the class

	int num_of_students;
	
	cout << "Enter the number of students in the class: ";
	cin >> num_of_students;

	string students[num_of_students];

	//loop through that many name of students
if ((num_of_students > 0) && (num_of_students <= 25)){


	for (int count = 0; count < num_of_students; count++) {

		cout << "Enter the name of student " << count + 1 << ": ";
		cin >> students[count];
	}

	//go through all the first letter of the name of each students
	for (int i = 0; i < num_of_students; i++) {
		for (int j = 0; j < num_of_students; j++) {
			if (students[i].at(0) < students[j].at(0)) {
				string temp = students[i];
				//put the name with the earliest alphabet in the first position
				students[i] = students[j];
				//put the name with the latest alphabet in the last position
				students[j] = temp;
			}
		}
	}

	cout << endl;

	// print out the first alphabetically ordered name first
	cout << "The student at the front is " << students[0] << endl;

	// print out the last alphabetically ordered name first
	cout << "The student at the back is " << students[num_of_students - 1] << endl;
}
else {
	cout << "Invalid Input";
	cout << endl;
	}
}
