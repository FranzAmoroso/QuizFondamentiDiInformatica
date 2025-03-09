// Question.h
#ifndef QUESTION_H
#define QUESTION_H

#include <iostream>
#include <vector>
#include <string>

class Question {
private:
    std::string questionText;
    std::vector<std::string> options;
    int correctAnswer;

public:
    // Costruttore
    Question(const std::string& text, const std::vector<std::string>& opts, int correct);

    // Metodi di accesso
    std::string getQuestionText() const {
        return questionText;
    }

    std::vector<std::string> getOptions() const {
        return options;
    }

    int getCorrectAnswer() const {
        return correctAnswer;
    }

    // Metodo per chiedere la domanda
    void ask() const;

    // Metodo per verificare la risposta
    bool checkAnswer(int userAnswer) const;

    // Metodo per mostrare la risposta corretta
    void showCorrectAnswer() const;
};

#endif // QUESTION_H
