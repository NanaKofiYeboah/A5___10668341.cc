#include <iostream>

#include <fstream>

#include <cstdlib>


using namespace std;

struct Student

{

    int IdNumber[5];

    string name[5];

    int age[5];

    string gender[5];

    double score[5];

    string grade[5];


};


int main()

{

    double totalScores = 0;

    int totalAge = 0;

    int maleCount = 0;

    int femaleCount = 0;

    double averageScore = 0;

    double averageAge = 0;

    int numStudents;

    double myscore;

    Student Daniel;


    for (int i = 0; i<numStudents;i++)

    {

        cout<< "Enter your ID: ";

        cin>>Daniel.IdNumber[i];

        cout << "Enter your Name: ";

        cin>> Priscila.name[i];

        cout<< "Enter your Age: " ;

        cin>> Daniel.age[i];

        cout <<"Enter your Gender: ";

        cin >>Daniel.gender[i];

        cout << "Enter Score: ";

        cin >> Daniel.score[i];


        if(Daniel.score[i]>80 && Daniel.score[i]<=100)

        {

            Daniel.grade[i]="A";


        } else if(Daniel.score[i]>=70 && .score[i]<80)

        {

            Daniel.grade[i] = "B";

        } else if(Daniel.score[i]>=60 && Daniel.score[i]<70)

        {

Daniel.grade[i] = "C" ;

        } else if(Daniel.score[i]>=50 && Daniel.score[i]<60) {

        Daniel.grade[i]= "D";

        } else if(Daniel.score[i]>=40 && Daniel.score[i]<=50)

        {

            Daniel.grade[i] = "E";

        } else {Daniel.grade[i]= "F";

        }

        cout <<endl;

        if (Daniel.grade[i]=="male")

        {

            maleCount++;

        }

else if(Daniel.gender[i]=="female") {

    femaleCount++;

}

       cout << "*********************************" <<endl;

cout << " ID" << " " << "Name " << " " << "Age" << " " << "Gender " << " " << "Score" << " " << "Grade " << endl;


cout << "********************************" << endl;

    for (int i=0;i <numStudents; i++)

    {


        totalScores=totalScores+Daniel.score[i];
        totalScores=totalScores+.score[i];


           totalAge= totalAge+Daniel.age[i];


          averageScore= totalScores/numStudents;


           averageAge= totalAge/numStudents;


            cout << Daniel.IdNumber[i] << "/t" << Daniel.name[i] << "/t" << Daniel.age[i] << "/t" << Daniel.gender[i];
            cout << .IdNumber[i] << "/t" << Daniel.name[i] << "/t" << Daniel.age[i] << "/t" << Daniel.gender[i];

        cout << "/t" << Daniel.score[i] << "/t" << Daniel.grade[i] ;
        cout << "/t" << Daniel.score[i] << "/t" << Daniel.grade[i] ;
        cout << "/t" << Daniel.score[i] << "/t" << Daniel.grade[i] ;


       cout << endl;

    }




    cout << "The average age is: " << averageAge << endl;


    cout << "The average score is: " << averageScore << endl;


    cout << "The number of females are: " << femaleCount << endl;


    cout << "The number of males are: " << maleCount << endl;


    ofstream A_student;

    A_student.open("Mystudents.txt", ios:: app);


    A_student<< "*********************************" <<endl;


    A_student << " ID" << " " << "Name " << " " << "Age" << " " << "Gender " << " " << "Score" << " " << "Grade " << endl;


    A_student << "********************************" << endl;


     for (int i=0;i <numStudents; i++)

    {


          totalScores=totalScores.score[i];


           totalAge= totalAge+Daniel.age[i];


          averageScore= totalScores/numStudents;


           averageAge=totalAge/numStudents;


            A_student << Daniel.IdNumber[i] << "\t" << .name[i] << "\t" << Daniel.age[i] << "\t" << Daniel.gender[i];

        A_student << "\t" << Daniel.score[i] << "\t" << Daniel.grade[i] ;
        A_student << "\t" << Daniel.score[i] << "\t" << Daniel.grade[i] ;


       A_student << endl;

    }


     A_student << "The average age is: " << averageAge << endl;


    A_student << "The average score is: " << averageScore << endl;


   A_student << "The number of females are: " << femaleCount << endl;


    A_student << "The number of males are: " << maleCount << endl;


    A_student.close();


    }

    return 0;

}


