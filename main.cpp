#include "include.h"

int main()
{
    char play='1';
cout<<"\nTHE HANGMAN\n"
<<"------------------------\n"
<<"RULES: \n"
<<"* You can write your words or choose words\n"
<<"* You can guess letter or the whole word\n"
<<"* You have 8 hp\n"
<<"* Letters which is wrong or guessed before will decrease your hp\n"
<<"* Have Fun\n";

    do{

cout<<"------------------------\n"<<"\n\n1. Start\n0. Exit\n\n";

cin>>play;
cin.ignore(numeric_limits<streamsize>::max(),'\n');

cout<<"------------------------\n";
if(play=='1'){
    game obj;
    obj.play();}

    else if (play=='0'){
    cout<<"\n\nThanks for playing\n\n";
break;}
    else cout<<"\n\nPlease choose correctly\n";
}while(play!='0');
    return 0;
}