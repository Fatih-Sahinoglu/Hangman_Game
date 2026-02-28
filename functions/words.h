void game::words(){

string general[14]={
    "new york","San Francisco",
    "Water bottle","Electric guitar",
    "elephant","whale",
    "Fried chicken","Chocolate cake",
"diamond sword",
"Harry Potter","Tony Stark", "Batman",
"Black hole","Solar system"};

cout<<"\nSome words examples: \n";
cout<<"------------------------\n";
for(int i=0; i<=13; i++){
    cout<<i+1<<". "<<general[i]<<endl;
}
cout<<"------------------------\n";
int choosing_words=0;
cout<<endl<<"Please enter the number of words you choose: ";
cin>>choosing_words;

word=general[choosing_words-1];

}