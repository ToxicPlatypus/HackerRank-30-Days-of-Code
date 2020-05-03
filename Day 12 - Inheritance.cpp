#include <iostream>
#include <vector>

using namespace std;


class Person{
	protected:
		string firstName;
		string lastName;
		int id;
	public:
		Person(string firstName, string lastName, int identification){
			this->firstName = firstName;
			this->lastName = lastName;
			this->id = identification;

		}
		void printPerson(){
			cout<< "Name: "<< lastName << ", "<< firstName <<"\nID: "<< id << "\n";
		}

};

class Student :  public Person{
	private:
		vector<int> testScores;
	public:
	    Student(string firstName, string lastName, int identification, vector<int>scores):
	        Person(firstName,lastName,identification),testScores(scores){

		}
        char calculate()
	    {
	        int res=0;
	        for(int i=0;i<testScores.size();i++)
                res+=testScores[i];
            res=res/testScores.size();

            if(90<=res && 100>=res)
                return 'O';
            else if(80<=res && 90>res)
                return 'E';
            else if(70<=res && 80>res)
                return 'A';
            else if(55<=res && 70>res)
                return 'P';
            else if(40<=res && 55>res)
                return 'D';
            else
                return 'T';
	    }
};

int main() {
	string firstName;
  	string lastName;
	int id;
  	int numScores;
	cin >> firstName >> lastName >> id >> numScores;
  	vector<int> scores;
  	for(int i = 0; i < numScores; i++){
	  	int tmpScore;
	  	cin >> tmpScore;
		scores.push_back(tmpScore);
	}
	Student* s = new Student(firstName, lastName, id, scores);
	s->printPerson();
	cout << "Grade: " << s->calculate() << "\n";
	return 0;
}
