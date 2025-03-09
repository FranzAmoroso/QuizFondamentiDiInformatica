#include "QuestionManager.h"
#include <iostream>
using namespace std;

QuestionManager::QuestionManager() {
    loadQuestions();
}

void QuestionManager::loadQuestions() {
    // Domande capitolo 1
    chapterOne.push_back(Question("Cos'è un alfabeto in informatica?", 
                                     {"Un insieme finito di simboli", "Un tipo di variabile", "Un insieme di regole sintattiche", "Un tipo di dato"}, 
                                     0));
    chapterOne.push_back(Question("Qual è la definizione di stringa?", 
                                     {"Una sequenza di simboli di un alfabeto", "Un numero intero", "Una variabile", "Una funzione"}, 
                                     0));
    
    
    chapterOne.push_back(Question("Che cosa rappresenta Σ* in un linguaggio formale?", 
                                       {"L'insieme di tutte le stringhe, inclusa la stringa vuota", 
                                        "Un linguaggio che contiene solo lettere maiuscole", 
                                        "Un alfabeto", 
                                        "La stringa vuota"}, 
                                       0));
    chapterOne.push_back(Question("Qual è l'operazione di concatenazione in un linguaggio formale?", 
                                       {"Unione di stringhe", "Combinazione di due stringhe", 
                                        "Intersezione di stringhe", "Complemento di una stringa"}, 
                                       1));
    
    chapterOne.push_back(Question("Cosa indica l'operatore * in un linguaggio formale?", 
                                     {"Iterazione con 0 occorrenze", "Concatenazione di stringhe", 
                                      "Unione di linguaggi", "Intersezione di linguaggi"}, 
                                     0));
    chapterOne.push_back(Question("Qual è la differenza tra un linguaggio regolare e un linguaggio formale?", 
                                     {"I linguaggi regolari sono rappresentabili tramite espressioni regolari, mentre i linguaggi formali sono più generali", 
                                      "I linguaggi regolari sono sempre finiti, mentre i linguaggi formali sono infiniti", 
                                      "Un linguaggio regolare è un sottoinsieme di linguaggi formali", 
                                      "Un linguaggio formale può essere sempre rappresentato tramite un automa"}, 
                                     0));

    chapterOne.push_back(Question("Cos'è un alfabeto in informatica?", 
        {"Un insieme finito di simboli", "Un tipo di variabile", "Un insieme di regole sintattiche", "Un tipo di dato"}, 
        0));
    chapterOne.push_back(Question("Qual è la definizione di stringa?", 
        {"Una sequenza di simboli di un alfabeto", "Un numero intero", "Una variabile", "Una funzione"}, 
        0));
    chapterOne.push_back(Question("Che cosa rappresenta Σ* in un linguaggio formale?", 
        {"L'insieme di tutte le stringhe, inclusa la stringa vuota", 
        "Un linguaggio che contiene solo lettere maiuscole", 
        "Un alfabeto", 
        "La stringa vuota"}, 
        0));
    chapterOne.push_back(Question("Qual è l'operazione di concatenazione in un linguaggio formale?", 
        {"Unione di stringhe", "Combinazione di due stringhe", 
        "Intersezione di stringhe", "Complemento di una stringa"}, 
        1));
    chapterOne.push_back(Question("Cosa indica l'operatore * in un linguaggio formale?", 
        {"Iterazione con 0 occorrenze", "Concatenazione di stringhe", 
        "Unione di linguaggi", "Intersezione di linguaggi"}, 
        0));
    chapterOne.push_back(Question("Qual è la differenza tra un linguaggio regolare e un linguaggio formale?", 
        {"I linguaggi regolari sono rappresentabili tramite espressioni regolari, mentre i linguaggi formali sono più generali", 
        "I linguaggi regolari sono sempre finiti, mentre i linguaggi formali sono infiniti", 
        "Un linguaggio regolare è un sottoinsieme di linguaggi formali", 
        "Un linguaggio formale può essere sempre rappresentato tramite un automa"}, 
        0));
    chapterOne.push_back(Question("Qual è l'alfabeto del linguaggio C?", 
        {"{a, z, 0, 9, +, -, <, >, %, !, #}", 
        "{a, b, c, d, e, f}", 
        "{a, b, c, d, e, f, g, h, i, j}", 
        "{0, 1, 2, 3, 4, 5}"}, 
        0));
    chapterOne.push_back(Question("Quale delle seguenti è un'operazione su linguaggi?", 
        {"Intersezione", "Somma", "Sottrazione", "Nessuna delle precedenti"}, 
        0));
    chapterOne.push_back(Question("Che cosa rappresenta Σ+ in un linguaggio formale?", 
        {"L'insieme delle stringhe non vuote", 
        "L'insieme di tutte le stringhe, inclusa la stringa vuota", 
        "Il complemento di Σ*", 
        "L'insieme di tutte le parole invertite"}, 
        0));
    chapterOne.push_back(Question("Cosa rappresenta l'operatore ∅ in un linguaggio?", 
        {"Il linguaggio vuoto", 
        "Il linguaggio di tutte le stringhe", 
        "Un linguaggio che contiene solo stringhe di lunghezza 1", 
        "Un linguaggio che contiene solo stringhe di lunghezza 2"}, 
        0));
    chapterOne.push_back(Question("Che cosa indica la notazione |x|?", 
        {"La lunghezza di una parola x", 
        "Il numero di simboli in un alfabeto", 
        "Il numero di linguaggi in un insieme", 
        "Il numero di lettere in una stringa"}, 
        0));
    chapterOne.push_back(Question("Quale delle seguenti è un operazione di concatenazione tra due linguaggi?", 
        {"L1 ∘ L2", "L1 ∩ L2", "L1 ∪ L2", "L1 - L2"}, 
        0));
    chapterOne.push_back(Question("Cos'è la stella di Kleene?", 
        {"L'operatore di iterazione", 
        "L'operatore di concatenazione", 
        "L'operatore di unione", 
        "L'operatore di complemento"}, 
        0));
    chapterOne.push_back(Question("Quale delle seguenti non è una proprietà della concatenazione?", 
        {"Commutativa", 
        "Associativa", 
        "Distributiva", 
        "Semplice"}, 
        0));
    chapterOne.push_back(Question("Cosa rappresenta l'insieme Σ*?", 
        {"L'insieme di tutte le stringhe, inclusa la stringa vuota", 
        "Il linguaggio di tutte le stringhe non vuote", 
        "Il linguaggio vuoto", 
        "Il linguaggio che contiene solo lettere minuscole"}, 
        0));
    chapterOne.push_back(Question("Qual è la differenza tra un linguaggio e un alfabeto?", 
        {"Un linguaggio è un insieme di stringhe, mentre un alfabeto è un insieme di simboli", 
        "Un linguaggio è un insieme di simboli, mentre un alfabeto è un insieme di stringhe", 
        "Un linguaggio è un alfabeto speciale", 
        "Non c'è alcuna differenza"}, 
        0));
    chapterOne.push_back(Question("Che cosa indica l'operazione di potenza in un linguaggio?", 
        {"L'operazione di concatenazione ripetuta", 
        "L'operazione di unione tra stringhe", 
        "L'operazione di concatenazione tra due linguaggi", 
        "La moltiplicazione tra linguaggi"}, 
        0));
    chapterOne.push_back(Question("Cosa significa Λ in un linguaggio formale?", 
        {"Il linguaggio che non contiene alcuna stringa", 
        "Il linguaggio di tutte le stringhe vuote", 
        "Il linguaggio che contiene solo la stringa vuota", 
        "Il linguaggio di tutte le parole"}, 
        0));
    chapterOne.push_back(Question("Se Σ = {a, b}, quale stringa non appartiene a Σ*?", 
        {"abb", "ba", "abc", "aab"}, 
        2));
    chapterOne.push_back(Question("In quale operazione di linguaggio si uniscono due insiemi di stringhe?", 
        {"Unione", "Intersezione", "Complemento", "Concatenazione"}, 
        0));
    chapterOne.push_back(Question("Quale delle seguenti espressioni regolari rappresenta il linguaggio di tutte le stringhe vuote?", 
        {"∅", "ε", "a*", "a+"}, 
        1));
    chapterOne.push_back(Question("Se Σ = {0, 1}, quale di queste è una stringa di lunghezza 3?", 
        {"011", "110", "101", "tutte le precedenti"}, 
        3));
    chapterOne.push_back(Question("Qual è la cardinalità di un linguaggio che contiene una sola stringa?", 
        {"1", "0", "infinita", "non definita"}, 
        0));
    chapterOne.push_back(Question("Cosa rappresenta la notazione L1 ∪ L2?", 
        {"L'unione di due linguaggi", 
        "La concatenazione di due linguaggi", 
        "L'intersezione di due linguaggi", 
        "La differenza tra due linguaggi"}, 
        0));
    chapterOne.push_back(Question("Quale tra le seguenti è una proprietà della concatenazione di linguaggi?", 
        {"Non commutativa", "Associativa", "Entrambe le precedenti", "Nessuna delle precedenti"}, 
        2));
    chapterOne.push_back(Question("Cosa rappresenta l'espressione regolare a*?", 
        {"Zero o più occorrenze della lettera 'a'", 
        "Una o più occorrenze della lettera 'a'", 
        "Esattamente una lettera 'a'", 
        "Zero o più occorrenze di qualsiasi simbolo"}, 
        0));

        }

vector<Question> QuestionManager::getQuestions(int difficulty) const {
    if (difficulty == 1) return chapterOne;
    if (difficulty == 2) return mediumQuestions;
    return hardQuestions;
}

void QuestionManager::askQuestion(const Question& question) const {
    cout << question.getQuestionText() << endl;

    vector<string> options = question.getOptions();
    for (size_t i = 0; i < options.size(); ++i) {
        cout << i + 1 << ". " << options[i] << endl;
    }

    int userAnswer;
    cout << "Your answer: ";
    cin >> userAnswer;

    if (userAnswer == question.getCorrectAnswer()) {
        cout << "Correct!" << endl;
    } else {
        cout << "Incorrect. The correct answer is: " 
             << options[question.getCorrectAnswer()] << endl;
    }
}