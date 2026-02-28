# Hangman Game (C++ Console)

![C++](https://img.shields.io/badge/C++-00599C?style=for-the-badge&logo=c%2B%2B&logoColor=white)
![Status](https://img.shields.io/badge/Status-Active-brightgreen?style=for-the-badge)

A structured, modular Hangman game built with C++. This project focuses on **Object-Oriented Programming (OOP)** principles and clean code architecture.

## Key Features

* **Visual ASCII Art:** Dynamic visual representation of the hangman as lives decrease.
* **Manual Word Selection:** Choose specific words from the library via index or type your own word.
* **Modular Design:** Logic is separated into classes and helper functions for maintainability.
* **Cross-Platform C++:** Built using standard C++ libraries, ensuring compatibility.
* **8 HP System:** Wrong guesses reduce HP, and the game ends when HP reaches 0.

## Project Structure

| File / Folder | Description |
| :--- | :--- |
| **`class/game.h`** | Core `Game` class managing player lives and game state. |
| **`functions/play.h`** | Main gameplay loop and input handling. |
| **`functions/words.h`** | Data structure containing the word library. |
| **`include.h`** | Central header for all standard library dependencies. |
| **`main.cpp`** | Application entry point. |


## Rules

1. **Start:** Enter `1` to start, `0` to exit.
2. **Guessing:** Enter letters to reveal the hidden word.
3. **Risk It:** Enter `1` to guess the **whole word** at once.
4. **Penalty:** Each wrong letter reduces your **HP**.
5. **Outcome:** Game ends when HP reaches `0` (Loss) or the word is guessed (Win).


### Example Words

new york, San Francisco, Water bottle, Electric guitar

elephant, whale, Fried chicken, Chocolate cake

diamond sword, Harry Potter, Tony Stark, Batman, Black hole, Solar system





Feel free to fork the repo and make improvements!

Developed by **[Fatih Şahinoğlu](https://github.com/Fatih-Sahinoglu)**