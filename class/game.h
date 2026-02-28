class game{ 
public:
string word; //The word to be guessed
signed short int hp=8,round=0; //hp and number of rounds
char wrong[8]={' ',' ',' ',' ',' ',' ',' ',' '}; //Because after 8 game will over
char guess; //for getting letters

void man(); //drawing man
void words();
game(){

   cout<<"\n\n(for see and choose example words 0)\n";
   cout<<"Enter the word: ";
   getline(cin,word);
   if(word=="0") words();
    
for(int i=0; i<word.length(); i++) //making all letters low
{
 word[i]=tolower(word[i]);   
}

for (int i = 0; i <= 23; i++) //for gap
    cout << "*\n";
}

void play(){

for(int i=0; i<word.length(); i++){  //how many letter in word
    if(word[i]!=' ')
    cout<<"_ ";
    else cout<<" ";
}


cout<<endl;

string re= string(word.length(),'_'); // putting _ inside of re

// if there is ' ' write now becase inputting this is not possible
for(int i=0; i<word.length(); i++){ 
    if(word[i]==' ')
    re[i]=word[i];
}

string control=re; //for controlling is re changed


  do{ //Run until 0 is entered or the game ends

cout<<"\n\nChoose a letter\n(for guessing the word 1)\n";
cin>>guess;
cin.ignore(numeric_limits<streamsize>::max(),'\n');
 //if there is letter more than 1 delete others and use just first one


if(guess=='1'){ 
    unique_ptr<string> whole_word = make_unique<string>();
    cout<<"Make the guess\n";
    getline(cin,*whole_word);

    for(int i=0; i<(*whole_word).length(); i++) //lowering all letters
    (*whole_word)[i]=tolower((*whole_word)[i]);
    
    if(*whole_word==word){
        cout<<endl<<"You won\n\n\n";
        guess='0';
        break;
    }
    else{hp--;
    man();
    }
}

else{

guess=tolower(guess);  
for(int j=0; j<word.length(); j++){
if(guess==word[j]) { //if there is ,put inside of re 
re[j]=word[j];}
else{
if(re[j]!=word[j])
  re[j]='_';
}  
}

if(re==word){
    cout<<"\nYou won ("<<re<<") \n\n"<<endl;
    guess='0';
    break;
}
else{
cout<<"\nNow : "; //showing how many letter knowing
for(int k=0; k<word.length(); k++)
cout<<re[k];
cout<<endl;


if(control==re){ //if it's wrong or entering same letter than ***
    hp--;


if(round==7){ //if it is last round already game is end
     man();
     break;}

else{ //but if it is not
cout<<endl;

wrong[round]=guess; //put wrong letter to inside of array


round++;  //and increase round number

}
    
}

 else control=re; //if it's not wrong and same change control ***
 
 man();
cout<<endl;
for(int i=0; i<=7; i++){ //write wrongs one by one
    cout<<wrong[i]<<' ';
}
cout<<endl;
}
}
}while(guess!='0');
}
};