void game::man(){ //drawing man and if hp is 0 ending game
switch (hp) {
        case 7: cout<<"\n|\n|\n|\n|\n"; break;
    case 6:
        cout << "\n  __\n"
             << " |\n"
             << " |\n"
             << " |\n"
             << " |\n";
        break;

    case 5:
        cout << "\n  __\n"
             << " |  O\n"
             << " |\n"
             << " |\n"
             << " |\n";
        break;

    case 4:
        cout << "\n  __\n"
             << " |  O\n"
             << " |  |\n"
             << " |\n"
             << " |\n";
        break;

    case 3:
        cout << "\n  __\n"
             << " |  O\n"
             << " | /|\n"
             << " |\n"
             << " |\n";
        break;

    case 2:
        cout << "\n  __\n"
             << " |  O\n"
             << " | /|\\\n"
             << " |\n"
             << " |\n";
        break;

    case 1:
        cout << "\n  __\n"
             << " |  O\n"
             << " | /|\\\n"
             << " | /\n"
             << " |\n";
        break;

    case 0:
        cout << "\n  __\n"
             << " |  O\n"
             << " | /|\\\n"
             << " | / \\\n"
             << " |\n";
             
        cout << "OHH NOOO man died!\n"<< "The word was: " << word << endl<<endl<<endl;
        guess = '0';
    break;
}
}