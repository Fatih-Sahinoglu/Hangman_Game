void game::words(){
cout<<"\nSome words examples: \n";
cout<<"------------------------\n";

ifstream file("words.txt");
if(file.is_open()){
    string words;
    int choosing_words=1;

    while(getline(file,words,',') && getline(file,hint)){ //showing all words in file
        cout<<choosing_words<<". "<<words<<endl;
        choosing_words++;
    }

cout<<"------------------------\n";

choosing_words=0;
file.clear(); //clear the state of the file
file.seekg(0); //go to the beginning of the file

cout<<endl<<"Please enter the number of words you choose: ";
cin>>choosing_words;

for(int i=0; i<choosing_words-1; i++){ //read and ignore all words until the chosen one
    getline(file,words);
    }

    getline(file,word,','); //get the chosen word until ,
    getline(file,hint); //get the hint for the chosen word
    file.close(); //close the file

}
else cout<<"File not found\n";
}