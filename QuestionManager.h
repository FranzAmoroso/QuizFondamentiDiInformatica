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
    std::vector<Question> chapterOne;
    std::vector<Question> mediumQuestions;
    std::vector<Question> hardQuestions;
};

#endif
