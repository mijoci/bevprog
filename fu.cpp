#include "std_lib_facilities.h"

int main()

{

cout << "Please enter your name:\n";
string keresztnev;
cin >> keresztnev;
cout << "Dear," << keresztnev << "!\n";
cout << "How are u?";
cout << "Im fine. I miss u.\n";
cout << "Can we meet at the weekend?\n";


char f_sex = 0;

cout << "Enter another friend's name:\n";
string friend_name;
cin >> friend_name;
cout << "Have you seen " << friend_name << " lately?\n";
cout << "If male enter m, if famale enter f\n";
cin >> f_sex;

if (f_sex == 'm')
    cout << "If you see "<< friend_name << " please ask him to call me.\n";

else if (f_sex == 'f')
        cout << "If you see " << friend_name << " please ask her to call me.\n";




cout << "Enter your age:\n";
int age;
cin >> age;
if (age <= 0 || age >= 110) simple_error("You are kidding!\n");
else cout << "I hear you just had a birthday and you are "<< age << " years old.\n";


if (age < 12) cout << "Next year you will be "<< age+1 <<" \n";


else if (age == 17) cout << "Next year you will be able to vote.\n";

else if (age > 70) cout << "I hope you are enjoying retirement.\n";


cout << "Your sincerely,\n";
cout << "........................\n";
cout << "József\n";




}
