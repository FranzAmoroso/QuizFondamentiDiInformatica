// QuestionManager.h
#ifndef QUESTIONMANAGER_H
#define QUESTIONMANAGER_H

#include "Question.h"
#include <vector>

class QuestionManager {
public:
    QuestionManager();
    std::vector<Question> getQuestions(int difficulty) const;
    void askQuestion(const Question& question) const;  // Aggiungi questa dichiarazione
private:
    void loadQuestions();
    std::vector<Question> LF;
    std::vector<Question> ER;
    std::vector<Question> SF;
    std::vector<Question> chapterFor;
};

#endif
