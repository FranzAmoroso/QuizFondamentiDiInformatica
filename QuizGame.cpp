#include "QuizGame.h"
#include <iostream>
using namespace std;

QuizGame::QuizGame() : score(0), chapter(1) {}

void QuizGame::run() {
    int choice;
    do {
        showMenu();
        cin >> choice;
        switch(choice) {
            case 1:
                startQuiz();
                break;
            case 2:
                chooseChapter();
                break;
            case 3:
                showScore();
                break;
            case 0:
                cout << "Arrivederci!" << endl;
                break;
            default:
                cout << "Opzione non valida, per favore scegli una valida." << endl;
        }
    } while (choice != 0);
}

void QuizGame::showMenu() {
    cout << "\n=== QUIZ GAME ===" << endl;
    cout << "1. Inizia Quiz" << endl;
    cout << "2. Scegli Capitolo" << endl;
    cout << "3. Vedi Punteggio" << endl;
    cout << "0. Esci" << endl;
    cout << "Scegli un'opzione: ";
}

void QuizGame::startQuiz() {
    // Se il capitolo non è stato ancora scelto, chiedi all'utente di farlo
    if (chapter == 0) {
        cout << "Per favore, scegli prima un capitolo (difficoltà) tramite l'opzione 2." << endl;
        return;
    }
   
    startQuizWithDifficulty(chapter);  // Avvia il quiz con il capitolo selezionato
}

void QuizGame::chooseChapter() {
    cout << "Scegli un capitolo da 1 a 2 (altri ancora non disponibilis)." << endl;
    int chapterChoice;
    cin >> chapterChoice;
    
    // Imposta il capitolo selezionato
    if (chapterChoice == 1) {
        chapter = chapterChoice;
        cout << "Hai scelto Capitolo " << chapter << "." << endl;
    } else {
        cout << "Capitolo ancora non disponibile." << endl;
        chapter = 1;  // Resetta il capitolo se la scelta non è valida
    }
}

void QuizGame::showScore() {
    cout << "Il tuo punteggio totale è: " << score << endl;
}

void QuizGame::startQuizWithDifficulty(int difficulty) {
    // Recupera le domande in base al capitolo/difficoltà
    vector<Question> questions = questionManager.getQuestions(difficulty);
    int correctAnswers = 0;
    
    
    for (auto& question : questions) {
        question.ask();
        
        
        int userAnswer;
        cout << "Inserisci la tua risposta (1-4): ";
        cin >> userAnswer;
        
        
        if (question.checkAnswer(userAnswer)) {
            correctAnswers++;
        } else {
            question.showCorrectAnswer(); 
        }
    }
    
    // Mostra il risultato finale
    cout << "Hai risposto correttamente a " << correctAnswers << " domande su " << questions.size() << "." << endl;
    score += correctAnswers;  // Aggiungi i punteggi corretti al totale del punteggio
    cout << "Punteggio totale: " << score << endl;  // Mostra il punteggio totale
}
