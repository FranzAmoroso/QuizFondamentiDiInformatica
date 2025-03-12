// Domande Matematica discreta
#include "QuestionManager.h"
#include <iostream>
using namespace std;

QuestionManager::QuestionManager() {
    loadQuestions();
}

void QuestionManager::loadQuestions() {
    // definizioni parti 1
    
    chapterOne.push_back(Question("Dato un insieme A dare le definizioni di elemento massimo e elemento massimale di A", 
                              {"Se sull’insieme A è definita una relazione di ordinamento < allora un elemento M è massimale se per ogni x ∈ A abbiamo x < M. Un elemento M 0 è massimo se non esiste un y ∈ A tale che M < y.", 
                               "Se sull’insieme A è definita una relazione di ordinamento > allora un elemento M è massimale se per ogni x ∈ A abbiamo x < M. Un elemento M 0 è massimo se non esiste un y ∈ A tale che M > y.", 
                               "Se sull’insieme A è definita una relazione di ordinamento > allora un elemento M è massimo se per ogni x ∈ A abbiamo x < M. Un elemento M 0 è massimale se non esiste un y ∈ A tale che M < y.", 
                               "Se sull’insieme A è definita una relazione di ordinamento > allora un elemento M è massimale se per ogni x ∈ A abbiamo x < M. Un elemento M 0 è massimo se non esiste un y ∈ A tale che M < y."}, 
                              2));

    chapterFor.push_back(Question("Sia G un grafo planare con 10 vertici. Se lo disegno sul piano vedo che ci sono 5 facce. Quanti archi ha il grafo", 
                              {"La formula di Eulero ci dice che per i grafi planari si ha v + e - f = 2, dove v è il numero dei vertici, e il numero degli archi e f il numero delle facce. Quindi, 10 + e - 5 = 2 ci dice che e = 13.", 
                               "La formula di Eulero ci dice che per i grafi planari si ha v - e + f = 2, dove v è il numero dei vertici, e il numero degli archi e f il numero delle facce. Quindi, 10 − e + 5 = 2 ci dice che e = 13.", 
                               "La formula di Eulero ci dice che per i grafi planari si ha f + e - v = 3, dove v è il numero dei vertici, e il numero degli archi e f il numero delle facce. Quindi, 10 − e + 5 = 3 ci dice che e = 13.", 
                               "La formula di Eulero ci dice che per i grafi planari si ha f + e - v = 3, dove v è il numero dei vertici, e il numero degli archi e f il numero delle facce. Quindi, 5 − e + 10 = 3 ci dice che e = 13."}, 
                              1));

    chapterFor.push_back(Question("Quanti sono gli archi di un grafo regolare di grado 4 con 11 vertici?", 
                              {"In un grafo regolare di grado r con n vertici, il numero degli archi m è uguale a n·r/2 quindi nel nostro caso 11·4/2 = 22.", 
                               "In un grafo non regolare di grado r con n vertici, il numero degli archi m è uguale a n·r/2 quindi nel nostro caso 11·4/2 = 22.", 
                               "In un grafo regolare di grado r con n vertici, il numero degli archi m è uguale a n/r·2 quindi nel nostro caso 4·2/2 = 4.", 
                               "In un grafo regolare di grado r con n vertici, il numero degli archi m è uguale a n/r·2 quindi nel nostro caso 11·2/4 = 5."}, 
                              0));

    chapterOne.push_back(Question("Se T è un insieme l'espressione x ∈ T, si legge:", 
                              {"x appartiene al sottoinsieme T", 
                               "x è un elemento di T", 
                               "T è un elemento di x", 
                               "x non appartiene a T"}, 
                              1));

    chapterOne.push_back(Question("Due insiemi A e B sono uguali se hanno gli stessi elementi. in simboli:", 
                              {"A=B <=> (∀x) (x ∈ A <=> x ∈ B)", 
                               "A=B = (∀x) (x ∈ A => x ∈ B)", 
                               "A=B => (∀x) (x ∈ A <= x ∈ B)", 
                               "A=B = (∀x) (x ∈ A | x ∈ B)"}, 
                              0));

    chapterOne.push_back(Question("Definizione di assioma di estensionalità", 
                              {"Due insiemi A e B sono uguali se non hanno gli stessi elementi.", 
                               "Due insiemi A e B sono uguali se hanno lo stesso simbolo.", 
                               "Due insiemi A e B sono estenzionabili se non hanno gli stessi elementi. in simboli:", 
                               "Due insiemi A e B sono uguali se hanno gli stessi elementi."}, 
                              3));

    chapterOne.push_back(Question("Singoletto", 
                              {"{a}", 
                               "{{a},{a}}", 
                               "{}", 
                               "∅"}, 
                              0));

    chapterOne.push_back(Question("Insieme vuoto", 
                              {"{∅}", 
                               "∅", 
                               "∅(x)", 
                               "{a}"}, 
                              1));

    chapterOne.push_back(Question("Propietà ben definita", 
                              {"Per ogni elemento x, p(x) assume sempre e solo due valori, vero o falso", 
                               "Per ogni elemento x, p(x) può assumere due valori, vero o falso", 
                               "Per ogni insieme A, p(x) assume sempre e solo due valori, vero o falso", 
                               "Per ogni elemento x, p(x) la cardinalità di x è 0."}, 
                              0));

    chapterOne.push_back(Question("Cardinalità", 
                              {"Dato un insieme B, il numero di elementi che lo costituisce è denotata la lunghezza di |B|.", 
                               "Dato un insieme A, il numero di elementi che lo costituisce è denotata la cardinalità di |A|.", 
                               "Dato un elemento x, il numero di elementi che lo precede è denotata la cardinalità di |x|.", 
                               "Dato un insieme A, il numero di elementi che non lo costituisce è denotata la cardinalità di |A|."}, 
                              1));

    chapterOne.push_back(Question("Inclusione", 
                              {"A⊆B <=>(∀x) (x ∈ A => x ∈ B)", 
                               "A=B <=>(∀x) (x ∈ A <=> x ∈ B)", 
                               "A=B <=>(∀x) (x ∈ A => x ∈ B)", 
                               "A⊆B =>(∀x) (x ∈ A <=> x ∈ B)"}, 
                              0));

    chapterOne.push_back(Question("Insieme discreto", 
                              {"Un insieme A si dice discreto se è possibile ordinare i suoi elementi in maniera tale che tra qualunque elemento è il suo successivo non vi siano altri elementi nell'ordinamento dato.", 
                               "ε", 
                               "Un insieme A si dice discreto se è possibile ordinare i suoi elementi in maniera tale che tra qualunque elemento è il suo successivo vi siano altri elementi nell'ordinamento dato.", 
                               "Σ∗"}, 
                              0));

    chapterOne.push_back(Question("Se la cardinalità di un insieme |A| è un numero intero si dice:", 
                              {"finito, altrimenti sarebbe infinito", 
                               "infinito altrimenti sarebbe finito", 
                               "insieme disgiunto", 
                               "insieme delle parti"}, 
                              0));

    chapterOne.push_back(Question("Da quali elementi è composto un insieme discreto?", 
                              {"isolati", 
                               "incidenti", 
                               "discreti", 
                               "uniti"}, 
                              0));

    chapterOne.push_back(Question("Unione di due insiemi", 
                              {"L'unione di due insiemi A e B è formato dagli elementi che appartengono ad entrambi", 
                               "L'unione di due insiemi A e B è formato dagli elementi che non appartengono ad entrambi", 
                               "L'unione di due insiemi A e B è formato dagli elementi che appartengono ad almeno uno dei due insiemi A e B", 
                               "L'unione di due insiemi A e B è formato dagli elementi che non appartengono ad almeno uno dei due insiemi A e B"}, 
                              2));

    chapterOne.push_back(Question("Unione di due insiemi, in notazione:", 
                              {"A ∩ B = {x: x ∈ A 0ppure x ∈ B.}", 
                               "A U∩ B = {x: x ∈ A 0ppure x ∈ B.}", 
                               "A U B = {x: x ∈ A e x ∈ B.}", 
                               "A U B = {x: x ∈ A 0ppure x ∈ B.}"}, 
                              3));

    chapterOne.push_back(Question("Intersezione di due insiemi", 
                              {"L'intersezione di due insiemi A e B è formato dagli elementi che non appartengono ad entrambi gli insiemi A e B.", 
                               "L'intersezione di due insiemi A e B è formato dagli elementi che appartengono ad almeno uno degli insiemi A e B.", 
                               "L'intersezione di due insiemi A e B è formato dagli elementi che non appartengono ad almeno uno degli insiemi A e B", 
                               "L'intersezione di due insiemi A e B è formato dagli elementi che appartengono a tutti gli insiemi A e U"}, 
                              0));

    chapterOne.push_back(Question("Intersezione di due insiemi, in notazione:", 
                              {"A ∩ B = {x: x ∈ A e x ∈ B.}", 
                               "A ∩ B = {x: x ∈ A 0ppure x ∈ B.}", 
                               "A U B = {x: x ∈ A e x ∈ B.}", 
                               "A U B = {x: x ∈ A 0ppure x ∈ B.}"}, 
                              0));

    chapterOne.push_back(Question("Insiemi disgiunti", 
                              {"Due insiemi A e B si dicono disgiunti se la loro intersezione è vuota", 
                               "Due insiemi A e B si dicono disgiunti se la loro intersezione non è vuota", 
                               "Due insiemi A e B si dicono disgiunti se sono composti da elementi isolati", 
                               "Due insiemi A e B si dicono disgiunti se non sono composti da elementi isolati"}, 
                              0));

    chapterOne.push_back(Question("Insiemi disgiunti, in notazione:", 
                              {"A ∩ B ≠ ∅.", 
                               "A U B = ∅.", 
                               "A U B ≠ ∅.", 
                               "A ∩ B = ∅."}, 
                              3));

    chapterOne.push_back(Question("Cardinalità delle differenze", 
                              {"se A e B sono insiemi infiniti allora la cardinalità della differenza è la cardinalità di A meno la cardinalità dell'intersezione di A con B", 
                               "se A e B sono insiemi finiti allora la cardinalità della differenza è la cardinalità di A meno la cardinalità dell'intersezione di A con B", 
                               "se A e B sono insiemi infiniti allora la cardinalità della differenza è la cardinalità di A più la cardinalità dell'intersezione di A con B", 
                               "se A e B sono insiemi finiti allora la cardinalità della differenza è la cardinalità di A più la cardinalità dell'intersezione di A con B"}, 
                              1));

    chapterOne.push_back(Question("Cardinalità delle differenze, in notazione:", 
                              {"|A/B|= |A|+|AUB|", 
                               "|A/B|= |A|-|AUB|", 
                               "|A/B|= |A|-|A∩B|", 
                               "|A/B|= |A|+|A∩B|"}, 
                              2));

    chapterOne.push_back(Question("Complemento di un insieme", 
                              {"U/A≠A", 
                               "U/A=A", 
                               "U+A=A", 
                               "U-A=A"}, 
                              1));

// Definizioni parte 2
    chapterTwo.push_back(Question("Valore assoluto?", 
                                                {"Il valore assoluto (o modulo) di un intero relativo n ∈ Z è l'intero |n|≥0.", 
                                                 "Il valore assoluto (o modulo) di un intero relativo n ∈ Z è l'intero |n|<0.", 
                                                 "Il valore assoluto (o modulo) di un intero relativo n ∈ Z è l'intero |n|=0.", 
                                                 "Il valore assoluto (o modulo) di un intero relativo n ∈ Z è l'intero |n|≥10."}, 
                                                0));
            
    chapterTwo.push_back(Question("Assioma dei numeri naturali identifica la caratteristica esatta:", 
                                                {"Esiste un numero naturale 0.", 
                                                 "Esiste un numero che ha successore 0", 
                                                 "Se a=b allora hanno successori distinti", 
                                                 "Nessuna delle precedenti"}, 
                                                0));
            
    chapterTwo.push_back(Question("Assioma dei numeri naturali identifica la caratteristica esatta:", 
                                                {"Esiste un numero naturale che ha successore 0", 
                                                 "Ogni numero naturale a ha un numero naturale successore, denotato come S(a).", 
                                                 "se a=b allora hanno successori distinti", 
                                                 "se S(a)=S(b) allora a ≠ b."}, 
                                                0));
            
    chapterTwo.push_back(Question("Assioma dei numeri naturali identifica la caratteristica errata:?", 
                                                {"Esiste un numero naturale 0.", 
                                                 "Ogni numero naturale a ha un numero successore denotato con S(a)", 
                                                 "se a ≠ b allora S(a)≠S(b).", 
                                                 "Esiste un numero naturale che ha come successore 0."}, 
                                                3));
            
    chapterTwo.push_back(Question("Assioma del buon ordinamento", 
                                                {"a≥a, a < S(a), a < b se esiste c ∈ N tale che a < c e c<b.", 
                                                 "a≤b, a < S(b), a < a se esiste c ∈ N tale che a < b e c<a.", 
                                                 "a≤a, a < S(a), a < b se esiste c ∈ N tale che a < c e c<b.", 
                                                 "a≥a, a > S(a), a > b se esiste c ∈ N tale che a > c e c>b."}, 
                                                2));
            
    chapterTwo.push_back(Question("Cosa rappresenta l’espressione regolare a∗?", 
                                                {"L’insieme delle stringhe contenenti solo a, di qualsiasi lunghezza", 
                                                 "L’insieme delle stringhe contenenti solo b", 
                                                 "L’insieme di tutte le stringhe non vuote di lunghezza pari", 
                                                 "L’insieme delle stringhe che terminano con a"}, 
                                                0));

        }

vector<Question> QuestionManager::getQuestions(int difficulty) const {
    if (difficulty == 1) return chapterOne;
    if (difficulty == 2) return chapterTwo;
    if (difficulty == 3) return chapterTree;
    if (difficulty == 4) return chapterFor;
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