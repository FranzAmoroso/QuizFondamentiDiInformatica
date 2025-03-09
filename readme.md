
# Simulatore di Esame a Risposta Multipla

Questo progetto è un simulatore di esame a risposta multipla per la materia Fondamenti di Informatica. Permette di testare le proprie conoscenze con domande a vari livelli di difficoltà (facile, medio, difficile). Ogni domanda viene presentata con una serie di opzioni, e l'utente può scegliere la risposta corretta inserendo il numero corrispondente.

## Struttura del Codice

Il progetto è composto da diversi file C++:

### 1. main.cpp
Il punto di ingresso principale del programma. Crea un oggetto QuizGame e avvia il gioco.

```cpp
#include "QuizGame.h"
#include <iostream>
using namespace std;

int main() {
    QuizGame game;
    game.run();
    return 0;
}
```

### 2. Question.h e Question.cpp
Questi file definiscono e implementano la classe Question, che rappresenta una domanda del quiz. Ogni domanda ha un testo, delle opzioni di risposta e l'indice della risposta corretta.

- **ask()**: Stampa la domanda e le opzioni di risposta.
- **checkAnswer()**: Verifica se la risposta dell'utente è corretta.

### 3. QuestionManager.h e QuestionManager.cpp
Questi file definiscono e implementano la classe QuestionManager, che gestisce un insieme di domande divise per difficoltà. Le domande sono caricate all'interno del QuestionManager e sono suddivise in tre categorie: facile, medio e difficile.

- **loadQuestions()**: Aggiunge le domande predefinite.
- **getQuestions()**: Restituisce le domande in base al livello di difficoltà selezionato.

### 4. QuizGame.h e QuizGame.cpp
La classe QuizGame è il cuore del gioco. Gestisce il menu di selezione della difficoltà e avvia il quiz, facendo uso della classe QuestionManager per recuperare le domande.

- **run()**: Avvia il ciclo principale del gioco e permette all'utente di scegliere il livello di difficoltà.
- **showMenu()**: Mostra il menu principale con le opzioni per iniziare il quiz o uscire.
- **startQuiz()**: Avvia il quiz, mostra le domande e verifica le risposte dell'utente.

## Come Usare

1. Clona il repository sul tuo computer:

   ```bash
   git clone https://github.com/tuo-username/quiz-game.git
   ```

2. Compila il progetto:
   Usa un compilatore C++ come g++:

   ```bash
   g++ -o quiz main.cpp Question.cpp QuestionManager.cpp QuizGame.cpp
   ```

3. Esegui il programma:

   ```bash
   ./quiz
   ```

4. Interagisci con l'esame:
   - Scegli un capitolo (ancora c'è solo il capitolo 1).
   - Rispondi alle domande inserendo il numero corrispondente alla risposta.
   -Ogni risposta data il quiz ti darà la risposta giusta se errata.
   - Alla fine del quiz, il programma ti dirà quante risposte corrette hai dato.

## Funzionalità

- **Domande con vari capitoli**
- **Verifica della risposta**: per ogni domanda, viene controllato se la risposta dell'utente è corretta.
- **Punteggio**: alla fine del quiz, il punteggio (numero di risposte corrette) viene visualizzato.

## Struttura del Progetto

```
quiz-game/
├── main.cpp
├── Question.cpp
├── Question.h
├── QuestionManager.cpp
├── QuestionManager.h
├── QuizGame.cpp
└── QuizGame.h
```

## Contribuire

1. Forka il progetto.
2. Crea un ramo per una nuova funzionalità o una correzione di bug.
3. Aggiungi nuove domande o capitoli.
4. Fai le modifiche nel tuo ramo.
5. Invia una pull request descrivendo le modifiche apportate.

## Licenza

Questo progetto è rilasciato sotto la Licenza MIT.