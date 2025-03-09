// QuizGame.h
#ifndef QUIZGAME_H
#define QUIZGAME_H

#include "QuestionManager.h"
#include <vector>

class QuizGame {
public:
    QuizGame();
    void run();
private:
    void showMenu();
    void startQuiz();  
    void chooseChapter();  
    void showScore(); 
    void startQuizWithDifficulty(int difficulty);  
    QuestionManager questionManager;
    int score;
    int chapter;
};

#endif
