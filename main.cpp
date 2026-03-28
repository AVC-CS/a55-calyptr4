
#include <iostream>
#include <string>
using namespace std;

int main()
{
	int N, M, score; 
	string name;

	cout << "Enter the number of students: " ;
	cin >> N;
	cout << "Enter the number of scores for each student: " ;
	cin >> M;

	for(int i=0; i<N; i++)
	{
		cout << "Student Name: ";
    	cin >> name;
		int sum = 0;
		for (int j=0; j<M; j++)
		{
			cout << "Student Score: ";
			cin >> score;
			sum += score;
		}
		double avg = sum/(double)M;
    	cout << name << " \t" << sum << "\t" << avg << endl;
	}

	return 0;
}
