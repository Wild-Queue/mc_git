#include <bits/stdc++.h>
using namespace std;

void FirtsPartTests() {
  vector <Director> SetOfDirectors;
  Director Alex("Alex", 600, 6);
  SetOfDirectors.push_back(Alex);

  Admin Mihail("Mihail");
  
  vector <Professor> Prof;
  Professor Ivan("Ivan", 501, 5);
  Prof.push_back(Ivan);
  Professor Khan("Khan", 502, 5);
  Prof.push_back(Khan);

  vector <LabEmpoyer> Team;
  LabEmpoyer Nastya("Nastya", 409, 4);
  Team.push_back(Nastya);
  LabEmpoyer Roman("Roman", 410, 4);
  Team.push_back(Roman);
  LabEmpoyer Svetlana("Svetlana", 413, 4);
  Team.push_back(Svetlana);

  vector <Student> Group;
  Student Nick("Nick");
  Group.push_back(Nick);
  Student Anna("Anna");
  Group.push_back(Anna);
  Student Iskander("Iskander");
  Group.push_back(Iskander);
  Student Mark("Mark");
  Group.push_back(Mark);
  Student David("David");
  Group.push_back(David);

  Room One(108, Lecture, 150, 1, Yellow);
  Room Two(312, Class, 35, 3, Green);
  Room Three(245, Conference, 100, 1, Yellow);
  Room Four(310, Class, 15, 1, Green);


  cout << "///////////////////////The first test///////////////////////////" << endl;  
  cout<<"Tskander trying to book room 312" << endl;
  if (Iskander.IsAccess(One)){
	if (Iskander.BookRoom(One, "15:00", "16:00"))
		cout << "Iskander is authorized to book this room" << endl;
	else cout << "At this time. the room is occupied" << endl;
  }
  else cout << "Iskander is not authorized to book this room :(" << endl;
  
  cout << "Now Iskander booked this rooms: " << endl;
  Iskander.PrintAllBookedRoom();

  cout << endl << "///////////////////////The second test///////////////////////////" << endl;

  cout<<"Tskander trying to book room 312" << endl;
  if (Iskander.IsAccess(Two)){
	if (Iskander.BookRoom(Two, "15:00", "16:00"))
		cout << "Iskander is authorized to book this room" << endl;
	else cout << "At this time. the room is occupied" << endl;
  }
  else cout << "Iskander is not authorized to book this room :(" << endl;
  
  cout << "Now Iskander booked this rooms: " << endl;
  Iskander.PrintAllBookedRoom();
  cout << endl << "///////////////////////The third test///////////////////////////" << endl;

  cout<<"Tskander trying to book room 312" << endl;
  if (Iskander.IsAccess(Two)){
	if (Iskander.BookRoom(Two, "15:00", "16:00"))
		cout << "Iskander is authorized to book this room" << endl;
	else cout << "At this time. the room is occupied" << endl;
  }
  else cout << "Iskander is not authorized to book this room :(" << endl;
  
  cout << "Now Iskander booked this rooms: " << endl;
  Iskander.PrintAllBookedRoom();

  cout << endl << "///////////////////////The fourth test///////////////////////////" << endl;

  Mihail.ChangeAccess(Mark, Yellow);
  cout<<"Mark trying to book room 245" << endl;
  if (Mark.IsAccess(Three)){
	if (Mark.BookRoom(Three, "15:30", "18:00"))
		cout << "Mark is authorized to book this room" << endl;
	else cout << "At this time. the room is occupied" << endl;
  }
  else cout << "Mark is not authorized to book this room :(" << endl;
  
  cout << "Now Mark booked this rooms: " << endl;
  Mark.PrintAllBookedRoom();

  David.Shushukatsya();
  Anna.Noet();


  cout << endl << "///////////////////////Mood test///////////////////////////" << endl;
  
  cout<<"Student's mood:" << endl;
  for (int i = 0; i < Group.size(); i++){
  	cout << Group[i].GetMood() << " ";
  }
  Ivan.CreateAssignment(Group);

  cout<<"Student's mood, when professor create assignment:"<<endl;
  for (int i = 0; i < Group.size(); i++){
  	cout << Group[i].GetMood() << " ";
  }

  cout << endl << "///////////////////////Second Mood test///////////////////////////" << endl;

  cout<<"Student's mood:" << endl;
  for (int i = 0; i < Group.size(); i++){
  	cout << Group[i].GetMood() << " ";
  }
  cout<<endl;
  cout<<"Director's mood:" << endl;
  cout << Alex.GetMood() << endl;

  Svetlana.CreateProject(Group, SetOfDirectors);

  cout<<"Student's mood, when professor create assignment:" << endl;
  for (int i = 0; i < Group.size(); i++){
  	cout << Group[i].GetMood() << " ";
  }
  cout<<endl;
  cout<<"Director's mood, when professor create assignment:" << endl;
  cout << SetOfDirectors[0].GetMood() << endl;

  cout << endl << "///////////////////////Drop test///////////////////////////" << endl;

  cout << Nick.Get_Name() << endl;
  
  Alex.DropStudent(Nick);

  cout << Nick.Get_Name() << endl << "Nick was dropped ;(" << endl;
}