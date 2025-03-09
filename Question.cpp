// Question.cpp
#include "Question.h"
#include <iostream>
using namespace std;

// Definizione del costruttore
Question::Question(const string& questionText, const vector<string>& options, int correctAnswerIndex)
    : questionText(questionText), options(options), correctAnswer(correctAnswerIndex) {}

    void Question::ask() const {
        cout << questionText << endl;
        for (size_t i = 0; i < options.size(); ++i) {
            cout << i + 1 << ". " << options[i] << endl;  // Mostra le opzioni partendo da 1
        }
        // cout << "Risposta corretta (indice): " << (correctAnswer + 1) << endl; // Modifica l'indice per partire da 1
    }
    
    bool Question::checkAnswer(int userAnswer) const {
        if (userAnswer == correctAnswer + 1) {  // Il numero della risposta dell'utente deve corrispondere a "correctAnswer + 1"
            cout << "Risposta corretta! Ottimo lavoro." << '\n' << endl;
            return true;
        } else {
            cout << "Risposta sbagliata!" << '\n' << endl;
            showCorrectAnswer();  // Mostra la risposta corretta
            return false;
        }
    }
    
    void Question::showCorrectAnswer() const {
        if (correctAnswer >= 0 && correctAnswer < options.size()) {
            cout << "La risposta corretta è: " << options[correctAnswer] << '\n' << endl; // Mostra la risposta corretta
        } else {
            cout << "Errore: l'indice della risposta corretta non è valido. "
                 << "Si prega di verificare che l'indice della risposta corretta rientri nell'intervallo delle opzioni disponibili." << '\n' << endl;
        }
    }
    


