#include "QuestionManager.h"
#include <iostream>
using namespace std;

QuestionManager::QuestionManager() {
    loadQuestions();
}

void QuestionManager::loadQuestions() {
    // Domande
    
    LF.push_back(Question("Sia Σ alfabeto finito. Segnare, fra le affermazioni seguenti, l'unica affermazione esatta:", 
                              {"ε ∉ L+ per ogni L ⊆ Σ*", 
                               "ε ⊆ Σ", 
                               "Sia L ⊆ Σ*. Allora ε ∈ L+ se e solo se  ε ∈ L", 
                               "ε ∉ L* per ogni L ⊆ Σ*"}, 
                              2));

LF.push_back(Question("Sia Σ alfabeto finito. Segnare, fra le affermazioni seguenti, l'unica affermazione sbagliata:", 
                              {"Per ogni L1,L2 ⊆ Σ*, L1 = L1 ◦ L2", 
                               "Esistono L1,L2 ⊆ Σ*,  tali che L1 x L2 ≠ L2 x L1", 
                               "Per ogni L1,L2 ⊆ Σ*, L1 ⊆ L1 ◦ L2 se e solo se ε ∈ L2", 
                               "Esistono L1,L2 ⊆ Σ*,  tali che L1 ◦ L2 ≠ L2 ◦ L1"}, 
                              0));

LF.push_back(Question("Sia Σ alfabeto finito. Segnare, fra le affermazioni seguenti, l'unica affermazione esatta:", 
                              {"Per ogni L ⊆ Σ*, ε ∉ L*", 
                               "Per ogni L ⊆ Σ*,L+ = L*/{ε}", 
                               "Per ogni L ⊆ Σ*,ε ∈ L+", 
                               "Per ogni L ⊆ Σ*,L* = L+ U {ε}"}, 
                              3));

LF.push_back(Question("Sia Σ alfabeto finito e sia L ⊆ Σ*. Segnare, fra le affermazioni seguenti, l'unica affermazione esatta:", 
                              {"sia ε ∈ L, allora ε ∉ L", 
                               "ε ∈ Σ", 
                               "se ε ∈ L, allora ε ∈ L+", 
                               "Nessuna delle risposte è esatta."}, 
                              2));
LF.push_back(Question("Siano L1 = {ε, aba, ba} ed L2 = {ε, aa,bb}. Segnare, fra le affermazioni seguenti, l'unica affermazione SBAGLIATA:", 
                              {"ε ∈ L1 ◦ L2", 
                               "aba ∉ L1 ◦ L2", 
                               "L1 ⊆ L1 ◦ L2", 
                               "L2 ⊆ L1 ◦ L2"}, 
                              1));

LF.push_back(Question("Sia Σ alfabeto finito. Segnare, fra le affermazioni seguenti, l'unica affermazione esatta:", 
                              {"ε ∈ Σ+", 
                               "Per ogni L ⊆ Σ*,ε ∈ L", 
                               "ε ∈ Σ*", 
                               "Per ogni L ⊆ Σ*,ε ∉ L"}, 
                              2));

LF.push_back(Question("Sia Σ alfabeto finito e sia L ⊆ Σ*. Segnare, fra le affermazioni seguenti, l'unica affermazione esatta:?", 
                              {"Nessuna delle risposte è esatte", 
                               "Per ogni L,ε ∈ L", 
                               "Se ε ∈ L+, allora ε ∈ L", 
                               "Per ogni L,ε ∈ L ◦ L"}, 
                              2));

LF.push_back(Question("Sia Σ alfabeto finito. Segnare, fra le affermazioni seguenti, l'unica affermazione esatta:", 
                              {"Λ ◦ Λ = {ε}", 
                               "Λ ◦ Λ = Λ", 
                               "Per ogni L ⊆ Σ*,L ◦ Λ = L", 
                               "Λ ◦ {ε} = {ε}"}, 
                              0));
    LF.push_back(Question("Quali operazioni \"insiemistiche\" binarie possiamo definire sui linguaggi?", 
                                {"intersezione, complemento e unione", 
                                 "intersezione, unione e iterazione", 
                                 "intersezione, unione e concatenazione", 
                                 "complemento e iterazione"}, 
                                2));

LF.push_back(Question("Quali operazioni \"insiemistiche\" unarie possiamo definire sui linguaggi?", 
                                {"intersezione, complemento e unione", 
                                 "intersezione, unione e iterazione", 
                                 "intersezione, unione e concatenazione", 
                                 "complemento e iterazione"}, 
                                3));

LF.push_back(Question("Qual è la convenzione per rappresentare i caratteri dell'alfabeto Σ?", 
                              {"Con le prime lettere minuscole dell'alfabeto latino", 
                               "Con numeri da 0 a 9", 
                               "Con simboli speciali", 
                               "Con le ultime lettere minuscole dell'alfabeto latino"}, 
                              0));
LF.push_back(Question("Quali delle seguenti affermazioni è esatta?", 
                              {"L, ε ∈ L+", 
                               "L, ε ∈ L*", 
                               "Λ = {ε}", 
                               "Λ° ≠ {ε}"}, 
                              1));
LF.push_back(Question("Quale dei seguenti metodi e Riconoscitivo?", 
                              {"Prende in input una stringa e ci dice se essa appartiene al linguaggio o no, La stringa viene definita con un numero finito di elementi.", 
                               "Prende in output una stringa e ci dice se essa appartiene al linguaggio o no, La stringa viene definita con un numero finito di elementi.", 
                               "Partono da un simbolo iniziale a un'insieme finito di regole e da li generano le stringhe del linguaggio detti grammatiche", 
                               "Partono da una stringa iniziale a un'insieme finito di stringhe e da li generano dei linguaggi con un numero finito di elementi."}, 
                              0));
LF.push_back(Question("Quale dei seguenti metodi e generativo?", 
                              {"Prende in input una stringa e ci dice se essa appartiene al linguaggio o no, La stringa viene definita con un numero finito di elementi.", 
                               "Prende in output una stringa e ci dice se essa appartiene al linguaggio o no, La stringa viene definita con un numero finito di elementi.", 
                               "Partono da un simbolo iniziale a un'insieme finito di regole e da li generano le stringhe del linguaggio detti grammatiche", 
                               "Partono da una stringa iniziale a un'insieme finito di stringhe e da li generano dei linguaggi con un numero finito di elementi."}, 
                              2));


LF.push_back(Question("Cosa indica il simbolo di Blank?", 
                              {"la mancanza di un elemento nella cella.", 
                               "Un insieme di numeri", 
                               "Un insieme infinito di parole", 
                               "Un alfabeto ordinato"}, 
                              0));
LF.push_back(Question("Avendo un Automa a stati finiti qual'è la definizione della funzione di transizione ?", 
                              {"F : δ x Σ -> Q", 
                               "Q : δ x Σ -> Q", 
                               "δ : Q x Σ -> Q", 
                               "δ : F x Σ -> Q"}, 
                              2));

LF.push_back(Question("Dato un autma a stati finiti deterministico A = <Σ, Q, δ, q0, F> e due configurazioni (q, x) w (q',y) di A, avremo che (q,x) |- (q',y) se: ", 
                              {"(q,x) |- (q',y)", 
                               "1. Esiste a ∈ Σtale che x = ay, 2. δ(q, a) = q'", 
                               "1. Esiste a ∈ Σ tale che x = ay, 2. δ(q', a) = q", 
                               "1. Esiste a ∈ Σ tale che y = ax, 2. δ(q, a) = q'"}, 
                              1));
LF.push_back(Question("Segnare, fra le definizioni che seguono, la definizione di linguaggio riconosciuto da un Automa a Stati Finiti Deterministico A = <Σ, Q, δ, q0, F>", 
                              {"L(A) = {x ∈ Σ* | (p, x) |-*(q,ε) con q ∈ F}", 
                               "L(A) = {x ∈ Σ* | (q0, x) |-*(q,ε) con q ∈ F}", 
                               "L(A) = {x ∈ Σ* | (q0, x) ∈ F}", 
                               "L(A) = {x ∈ Q* | (q0, x) |-*(q,ε) con q ∈ F}"}, 
                              1));

LF.push_back(Question("Definizione Computare", 
                              {"Ridurre un informazione da una forma implicita a una forma esplicida in modo effettivo", 
                               "ε", 
                               "∅", 
                               "Σ∗"}, 
                              0));

LF.push_back(Question("Quali sono tra i seguenti i diversi modelli computazionali?", 
                              {"Funzioni ricorsive, L'ambda calcolo e la macchina di turing", 
                               "Funzioni parziali, L'ambda calcolo e la macchina di turing", 
                               "Funzione di transizione , calcolo combinatorio e la macchina di von neuman", 
                               "Nessuna delle precedenti"}, 
                              0));

LF.push_back(Question("Una configurazione (q,x) di un Automa a stati finiti deterministico con q ∈ Q e x  Σ∗, è detta accettante se:", 
                              {"q ∈ F", 
                               "x = ε e q ∈ F", 
                               "x = ε e q ∈ Q", 
                               "x = ε"}, 
                              1));

LF.push_back(Question("Sia A Automa a stati finiyi deterministico sull'alfabeto di input ={a,b}, allora nel diagramma degli stati di A:", 
                              {"Tutti i nodi del diagramma degli stati di A, che corrispondono a stati finali di A, non hanno archi uscenti.", 
                               "Esiste almeno un nodo del diagramma degli stati di A con esattamente due archi uscenti etichettati \"a\" e con esattamente un arco uscente etichettato \"b\"", 
                               "Ogni nodo del diagramma degli stati di A ha esattamente un arco uscente etichettato \"a\" e esattamente un arco uscente etichettato \"b\"", 
                               "il nodo del diagramma degli stati di A corrispondente a q0, non ha archi uscenti."}, 
                              2));

LF.push_back(Question("Sia Σ alfabeto finito. Segnare, fra le affermazioni seguenti l'unica affermazione esatta:", 
                              {"Per ogni L ⊆ Σ*, L ◦ Λ = L", 
                               "Per ogni L ⊆ Σ*, L ◦ Λ = {ε}", 
                               "Per ogni L ⊆ Σ*, L ◦ {ε} = Λ", 
                               "Per ogni L ⊆ Σ*, L ◦ {ε} = L"}, 
                              3));

LF.push_back(Question("Siano L1 = {ε , ab} ed L2 = {ε, bbab, bb}: Segnare fra le seguenti affermazioni l'unica esatta:", 
                              {"bbbab ∈ L1 ◦ L2", 
                               "ε ∉ L1 ◦ L2", 
                               "abbbab ∉  L1 ◦ L2", 
                               "ε ∈ L1 ◦ L2"}, 
                              3)); 

LF.push_back(Question("Sia L = {ab, bbb}. Segnare fra le seguenti affermazioni l'unica sbagliata:", 
                              {"bbbab ∈ L2", 
                               "bba ∈ L2", 
                               "bbbabbbb ∈ L*", 
                               "bbbabbbb ∈ L3"}, 
                              1));

LF.push_back(Question("Sia L = {ab, bbb}. Segnare fra le seguenti affermazioni l'unica sbagliata:", 
                                {"bbbabbbb ∈ L*", 
                                 "bb ∈ L*", 
                                 "bbbab ∈ L*", 
                                 "bbbabbbb ∈ L3"}, 
                                1));

LF.push_back(Question("Nella definizione di Automa a stati finiti non Deterministico (ASFND) la funzione di transizione δn è così definita:", 
                              {"δn : Q U Σ -> Σ", 
                               "δn : Q x Σ -> P(Q)", 
                               "δn : Q x Σ* -> P(Q)", 
                               "δn : Q x Σ -> Σ"}, 
                               1));

/* LF.push_back(Question("Se Σ = {0,1}, quale delle seguenti stringhe appartiene a Σ∗?", 
                              {"1010", 
                               "abc", 
                               "ε", 
                               "Entrambe 1010 e ε"}, 
                              3)); */

LF.push_back(Question("Quale dei seguenti insiemi rappresenta un alfabeto valido?", 
                              {"{a,b,c}", 
                               "{+, -, *, /}", 
                               "{0,1,2,3,4,5,6,7,8,9}", 
                               "Tutte le precedenti"}, 
                              3));

LF.push_back(Question("Cosa rappresenta la stringa ε?", 
                              {"La stringa vuota", 
                               "Una stringa con un solo carattere", 
                               "Un simbolo di fine stringa", 
                               "Un linguaggio"}, 
                              0));

LF.push_back(Question("Quale tra queste è una proprietà della concatenazione?", 
                              {"Non è commutativa", 
                               "È distributiva", 
                               "È sempre associativa", 
                               "Non è definita per stringhe vuote"}, 
                              0));
                              LF.push_back(Question("Come viene definito un insieme finito e non vuoto di simboli?", 
                                {"Alfabeto", 
                                 "Stringa", 
                                 "Linguaggio", 
                                 "Monoide"}, 
                                0));
  
  LF.push_back(Question("Qual è l'alfabeto binario?", 
                                {"{0, 1}", 
                                 "{A, B, C, ..., Z}", 
                                 "{+, -, *, /, <, >}", 
                                 "{0, 1, 2, ..., 9}"}, 
                                0));
  
  LF.push_back(Question("Cosa rappresenta Σ*?", 
                                {"L'insieme di tutte le stringhe sull'alfabeto Σ", 
                                 "L'insieme delle lettere maiuscole e minuscole", 
                                 "L'insieme di tutte le parole del linguaggio Pascal", 
                                 "Un insieme finito di simboli"}, 
                                0));
  
  LF.push_back(Question("Che cos'è il monoide libero 〈Σ∗, ◦, ε〉?", 
                                {"Un insieme con un'operazione di concatenazione e un elemento neutro", 
                                 "Un insieme di simboli non ordinati", 
                                 "Un sottoinsieme di Σ", 
                                 "Un linguaggio formale"}, 
                                0));
  
  LF.push_back(Question("Cosa rappresenta l'elemento ε nel monoide libero?", 
                                {"La parola vuota", 
                                 "L'elemento neutro della somma", 
                                 "Un simbolo speciale dell'alfabeto", 
                                 "Il separatore tra stringhe"}, 
                                0));
  
  LF.push_back(Question("Quale notazione indica la lunghezza di una stringa x?", 
                                {"|x|", 
                                 "||x||", 
                                 "len(x)", 
                                 "strlen(x)"}, 
                                0));
  
  LF.push_back(Question("Cosa indica l'espressione x^h?", 
                                {"La concatenazione della stringa x con se stessa h volte", 
                                 "La conversione di x in maiuscolo", 
                                 "La trasformazione di x in codice ASCII", 
                                 "La lunghezza della stringa x"}, 
                                0));
  
  LF.push_back(Question("Quale tra queste affermazioni sulla concatenazione è corretta?", 
                                {"La concatenazione di due stringhe x e y non è commutativa", 
                                 "La concatenazione di due stringhe x e y è sempre commutativa", 
                                 "La concatenazione è una somma aritmetica", 
                                 "La concatenazione è una divisione tra stringhe"}, 
                                0));
  
  LF.push_back(Question("Come si definisce un linguaggio?", 
                                {"Un sottoinsieme di Σ*", 
                                 "Un insieme finito di simboli", 
                                 "Una stringa composta da più caratteri", 
                                 "Un simbolo speciale in un alfabeto"}, 
                                0));
  
  LF.push_back(Question("Come viene indicato il linguaggio vuoto?", 
                                {"Λ", 
                                 "Σ*", 
                                 "ε", 
                                 "∅"}, 
                                0));
    LF.push_back(Question("Qual è la definizione di stringa inversa (o riflessa)?", 
                                    {"Una stringa ottenuta invertendo l’ordine dei caratteri", 
                                     "Una stringa ottenuta eliminando vocali", 
                                     "Una stringa che si ripete infinite volte", 
                                     "Una stringa contenente solo lettere maiuscole"}, 
                                    0));
      
      LF.push_back(Question("Quale tra le seguenti stringhe è palindroma?", 
                                    {"abba", 
                                     "abcd", 
                                     "aabb", 
                                     "abca"}, 
                                    0));
      
      LF.push_back(Question("Quale operazione tra linguaggi permette di ottenere un linguaggio contenente solo parole comuni a entrambi?", 
                                    {"Intersezione", 
                                     "Unione", 
                                     "Concatenazione", 
                                     "Complementazione"}, 
                                    0));
      
      LF.push_back(Question("Qual è la definizione formale dell’intersezione tra due linguaggi L1 e L2?", 
                                    {"L1 ∩ L2 = {x ∈ Σ∗ | x ∈ L1 ∧ x ∈ L2}", 
                                     "L1 ∩ L2 = {x ∈ Σ∗ | x ∈ L1 ∨ x ∈ L2}", 
                                     "L1 ∩ L2 = Σ∗ − L1", 
                                     "L1 ∩ L2 = {x ∈ Σ∗ | x ∉ L1}"}, 
                                    0));
      
      LF.push_back(Question("L’unione tra due linguaggi L1 e L2 produce:", 
                                    {"Un linguaggio contenente parole appartenenti ad almeno uno dei due", 
                                     "Solo le parole comuni ai due linguaggi", 
                                     "Tutte le parole dell’alfabeto eccetto quelle di L1 e L2", 
                                     "Le parole di L1 concatenate con quelle di L2"}, 
                                    0));
      
      LF.push_back(Question("Il complemento di un linguaggio L1 è definito come:", 
                                    {"Σ∗ − L1", 
                                     "L1 ∩ L2", 
                                     "L1 ∪ L2", 
                                     "L1 ◦ L2"}, 
                                    0));
      
      LF.push_back(Question("La concatenazione tra due linguaggi L1 e L2 genera:", 
                                    {"Un linguaggio contenente parole formate dalla concatenazione di una stringa di L1 con una di L2", 
                                     "Un linguaggio contenente solo parole di L1", 
                                     "Un linguaggio contenente solo parole di L2", 
                                     "L’intersezione tra L1 e L2"}, 
                                    0));
      
      LF.push_back(Question("Quale tra queste proprietà della concatenazione è vera?", 
                                    {"L ◦ {ε} = {ε} ◦ L = L", 
                                     "L ◦ {ε} = Λ", 
                                     "L ◦ L = L", 
                                     "L ◦ L2 = L2"}, 
                                    0));
      
      LF.push_back(Question("Se L1 = {astro, fisio} e L2 = {logia, nomia}, quali stringhe appartengono a L1 ◦ L2?", 
                                    {"astrologia, astronomia, fisiologia, fisionomia", 
                                     "astrologia, astronomia", 
                                     "fisiologia, fisionomia", 
                                     "astrofisica, fisionomia"}, 
                                    0));
      
      LF.push_back(Question("La potenza L^h di un linguaggio è definita come:", 
                                    {"L^h = L ◦ L^(h−1), con h ≥ 1 e L^0 = {ε}", 
                                     "L^h = L ∪ L^(h−1)", 
                                     "L^h = L − L^(h−1)", 
                                     "L^h = L ∩ L^(h−1)"}, 
                                    0));
      
      LF.push_back(Question("L'operatore '∗' applicato a un linguaggio L prende il nome di:", 
                                    {"Stella di Kleene", 
                                     "Intersezione", 
                                     "Concatenazione", 
                                     "Complementazione"}, 
                                    0));
      
      LF.push_back(Question("Qual è il risultato di L ∗ rispetto alla concatenazione?", 
                                    {"L'insieme di tutte le stringhe ottenute concatenando elementi di L un numero arbitrario di volte", 
                                     "L'insieme di tutte le stringhe palindrome", 
                                     "L'insieme di tutte le stringhe di lunghezza fissa h", 
                                     "L'insieme di tutte le stringhe senza ripetizioni"}, 
                                    0));
      
      LF.push_back(Question("Se L = {aa}, allora L ∗ è:", 
                                    {"{a2n | n ≥ 0}", 
                                     "{a2n | n ≥ 1}", 
                                     "{anbn | n ≥ 1}", 
                                     "{ε, aa}"}, 
                                    0));
      
      LF.push_back(Question("Quale tra le seguenti affermazioni è corretta per L+?", 
                                    {"L+ = L* ∖ {ε}", 
                                     "L+ = L* ∪ {ε}", 
                                     "L+ = L*", 
                                     "L+ = {ε}"}, 
                                    0));
      
      LF.push_back(Question("Qual è il risultato della chiusura riflessiva L∗ di un linguaggio L?", 
                                    {"Include ε e tutte le possibili concatenazioni di elementi di L", 
                                     "Include solo stringhe palindromiche", 
                                     "Include solo stringhe di lunghezza finita", 
                                     "Esclude sempre la stringa vuota"}, 
                                    0));
      
      LF.push_back(Question("Se L1 = {bis} e L2 = {nonno}, quali stringhe appartengono a L1* ◦ L2?", 
                                    {"nonno, bisnonno, bisbisnonno, ...", 
                                     "bis, nonno", 
                                     "bisbis, nonnonno", 
                                     "bis, bisbis, nonnonno"}, 
                                    0));
      
      LF.push_back(Question("Quale relazione esiste tra L* e L+?", 
                                    {"L* = L+ ∪ {ε}", 
                                     "L* = L+ ∩ {ε}", 
                                     "L* = L+", 
                                     "L* = ∅"}, 
                                    0));
      
      LF.push_back(Question("Cosa rappresenta Σ*?", 
                                    {"L’insieme di tutte le stringhe finite sull’alfabeto Σ", 
                                     "L’insieme delle stringhe palindrome", 
                                     "L’insieme delle stringhe senza simboli ripetuti", 
                                     "L’insieme delle stringhe di lunghezza fissa su Σ"}, 
                                    0));
      
      LF.push_back(Question("Quale delle seguenti affermazioni è corretta riguardo L ◦ Λ?", 
                                    {"L ◦ Λ = Λ ◦ L = Λ", 
                                     "L ◦ Λ = L", 
                                     "L ◦ Λ = {ε}", 
                                     "L ◦ Λ = Σ*"}, 
                                    0));
      
      LF.push_back(Question("Se L1 = {an | n ≥ 1} e L2 = {bm | m ≥ 1}, allora L1 ◦ L2 è:", 
                                    {"{anbm | n, m ≥ 1}", 
                                     "{anbn | n ≥ 1}", 
                                     "{bmam | m, n ≥ 1}", 
                                     "{ε}"}, 
                                    0));
      
      LF.push_back(Question("Cosa rappresenta l'operazione di iterazione su un linguaggio?", 
                                    {"La ripetizione arbitraria delle stringhe di un linguaggio", 
                                     "L’eliminazione delle stringhe duplicate", 
                                     "La trasformazione delle stringhe in palindrome", 
                                     "L’ordinamento delle stringhe in base alla lunghezza"}, 
                                    0));
      
      LF.push_back(Question("Come si indica formalmente l’unione di due linguaggi L1 e L2?", 
                                    {"L1 ∪ L2 = {x ∈ Σ* | x ∈ L1 ∨ x ∈ L2}", 
                                     "L1 ∪ L2 = {x ∈ Σ* | x ∈ L1 ∧ x ∈ L2}", 
                                     "L1 ∪ L2 = Σ* − (L1 ∩ L2)", 
                                     "L1 ∪ L2 = Σ*"}, 
                                    0));
        
                                    LF.push_back(Question("Cos’è l'operazione di unione tra due linguaggi L1 e L2?", 
                                        {"L1 ∪ L2 = {x ∈ Σ* | x ∈ L1 ∧ x ∈ L2}", 
                                         "L1 ∪ L2 = {x ∈ Σ* | x ∈ L1 ∨ x ∈ L2}", 
                                         "L1 ∪ L2 = Σ* − (L1 ∩ L2)", 
                                         "L1 ∪ L2 = Σ*"}, 
                                        1));
    
    LF.push_back(Question("Se L1 = {a^n | n ≥ 1} e L2 = {b^m | m ≥ 1}, qual è L1 ◦ L2?", 
                                        {"{a^n b^m | n, m ≥ 1}", 
                                         "{a^n | n ≥ 1}", 
                                         "{b^m | m ≥ 1}", 
                                         "{a, b}"}, 
                                        0));
    
    LF.push_back(Question("Cosa rappresenta l'operatore ∗ in relazione ai linguaggi?", 
                                        {"Concatenazione di linguaggi", 
                                         "Chiusura riflessiva del linguaggio",
                                         "Intersezione di linguaggi", 
                                         "Complemento di linguaggi"}, 
                                        1));
    
    LF.push_back(Question("Qual è la definizione di linguaggio palindromo?", 
                                        {"{x | x = x}", 
                                         "{x | x è la stessa stringa da sinistra a destra e viceversa}", 
                                         "{x | x ∈ Σ*}", 
                                         "{x | x ∈ Σ* e x ≠ x^r}"}, 
                                        1));
    
    LF.push_back(Question("Cos'è il complemento di un linguaggio L1?", 
                                        {"L1 = Σ* − L1", 
                                         "L1 = Σ − L1", 
                                         "L1 = L1 ∪ Σ*", 
                                         "L1 = Σ* ∩ L1"}, 
                                        0));
    
    LF.push_back(Question("Se L = {aa}, quale sarà L∗?", 
                                        {"{a^2n | n ≥ 1}", 
                                         "{a^2n | n ≥ 0}", 
                                         "{a^n | n ≥ 0}", 
                                         "{a^2n | n ≥ 2}"}, 
                                        1));
    
    LF.push_back(Question("Qual è il linguaggio L1 ∩ Λ?", 
                                        {"L1", 
                                         "Λ", 
                                         "{ε}", 
                                         "{x | x ∈ Σ* e x ∈ L1}"}, 
                                        1));
    
    LF.push_back(Question("Qual è il risultato dell'operazione L1 ∪ Λ?", 
                                        {"L1", 
                                         "Λ", 
                                         "Σ*", 
                                         "{ε}"}, 
                                        0));
    
    LF.push_back(Question("Cos’è la potenza di un linguaggio L?", 
                                        {"Lh = L ◦ Lh−1", 
                                         "Lh = L ◦ h", 
                                         "Lh = h ◦ L", 
                                         "Lh = Σ* ∩ L"}, 
                                        0));
    
    LF.push_back(Question("Cosa rappresenta la chiusura di Kleene di un linguaggio L?", 
                                        {"L* = ∞⋃h=0 Lh", 
                                         "L* = Σ* − L", 
                                         "L* = L ∪ {ε}", 
                                         "L* = Σ* ∪ L"}, 
                                        0));
    
    LF.push_back(Question("Qual è la differenza tra L∗ e L+?", 
                                        {"L+ = L∗ ∪ {ε}", 
                                         "L+ = ∞⋃h=0 Lh", 
                                         "L+ = Σ∗ − L", 
                                         "L+ = L ∪ L∗"}, 
                                        0));
    
    LF.push_back(Question("Qual è il risultato dell’operazione L1 ◦ {ε}?", 
                                        {"L1", 
                                         "{ε}", 
                                         "Σ*", 
                                         "Λ"}, 
                                        0));
    
    LF.push_back(Question("Se L = {a}, quale sarà L+?", 
                                        {"{a^2n | n ≥ 1}", 
                                         "{a^2n | n ≥ 0}", 
                                         "{a^n | n ≥ 1}", 
                                         "{a^n | n ≥ 0}"}, 
                                        0));
    
    LF.push_back(Question("Cos’è la concatenazione di due linguaggi L1 e L2?", 
                                        {"L1 ◦ L2 = {x ∈ Σ* | ∃y1 ∈ L1 ∃y2 ∈ L2 (x = y1 ◦ y2)}", 
                                         "L1 ◦ L2 = L1 ∪ L2", 
                                         "L1 ◦ L2 = L1 ∩ L2", 
                                         "L1 ◦ L2 = Σ*"}, 
                                        0));
    
    LF.push_back(Question("Se L1 = {astro, fisio} e L2 = {logia, nomia}, quale sarà L1 ◦ L2?", 
                                        {"{astrologia, astronomia, fisiologia, fisionomia}", 
                                         "{astrofisiologia, astronomania}", 
                                         "{astro, fisio, logia}", 
                                         "{logia, nomia}"}, 
                                        0));
    
    LF.push_back(Question("Cosa si intende con la parola 'palindroma' in un linguaggio?", 
                                        {"La stringa è uguale a se stessa quando letta da destra a sinistra", 
                                         "La stringa contiene solo caratteri ripetuti", 
                                         "La stringa contiene solo lettere minuscole", 
                                         "La stringa è composta solo da simboli distinti"}, 
                                        0));
    
    LF.push_back(Question("Quando L1 ◦ Λ = Λ?", 
                                        {"Sempre", 
                                         "Mai", 
                                         "Se L1 contiene la stringa vuota", 
                                         "Se L1 è vuoto"}, 
                                        0));
    
    LF.push_back(Question("Qual è il significato di Λ nella teoria dei linguaggi formali?", 
                                        {"L'insieme vuoto", 
                                         "L'alfabeto", 
                                         "La stringa vuota", 
                                         "Il linguaggio completo"}, 
                                        2));
    
    LF.push_back(Question("Se L = {a^n | n ≥ 1}, quale sarà L ∗?", 
                                        {"{a^2n | n ≥ 0}", 
                                         "{a^n | n ≥ 0}", 
                                         "{a^n | n ≥ 1}", 
                                         "{a^n | n ≥ 2}"}, 
                                        1));
    
    LF.push_back(Question("Cosa significa che L1 ◦ L2 = Λ?", 
                                        {"L1 e L2 sono entrambi vuoti", 
                                         "L1 o L2 contiene Λ", 
                                         "L1 e L2 contengono solo ε", 
                                         "L1 è uguale a Σ*"}, 
                                        1));
    
    LF.push_back(Question("Cos’è la concatenazione dei linguaggi L1 e L2?", 
                                        {"L1 ◦ L2 = {x ∈ Σ* | x = y1 ◦ y2 per ogni y1 ∈ L1 e y2 ∈ L2}", 
                                         "L1 ◦ L2 = {x ∈ Σ* | x ∈ L1 o x ∈ L2}", 
                                         "L1 ◦ L2 = L1 ∪ L2", 
                                         "L1 ◦ L2 = L1 ∩ L2"}, 
                                        0));
    
    LF.push_back(Question("Cosa significa che L1 ∪ L2 = Σ*?", 
                                        {"L1 e L2 coprono tutto l'alfabeto", 
                                         "L1 è uguale a Σ* e L2 è vuoto", 
                                         "L1 e L2 contengono solo ε", 
                                         "L1 è uguale a Σ* e L2 è {ε}"}, 
                                        0));
    
    LF.push_back(Question("Cos'è l'operazione di intersezione tra due linguaggi?", 
                                        {"L1 ∩ L2 = {x ∈ Σ* | x ∈ L1 ∧ x ∈ L2}", 
                                         "L1 ∩ L2 = {x ∈ Σ* | x ∈ L1 ∨ x ∈ L2}", 
                                         "L1 ∩ L2 = Σ* − (L1 ∪ L2)", 
                                         "L1 ∩ L2 = Σ*"}, 
                                        0));
    
    LF.push_back(Question("Cosa si intende per linguaggio complementare?", 
                                        {"L1 = Σ* − L1", 
                                         "L1 = Σ − L1", 
                                         "L1 = L1 ∪ Σ*", 
                                         "L1 = Σ* ∩ L1"}, 
                                        0));
                                        LF.push_back(Question("Cosa rappresenta l'operazione di intersezione tra due linguaggi L1 e L2?", 
                                            {"L1 ∩ L2 = {x ∈ Σ* | x ∈ L1 ∧ x ∈ L2}", 
                                             "L1 ∩ L2 = {x ∈ Σ* | x ∈ L1 ∨ x ∈ L2}", 
                                             "L1 ∩ L2 = Σ* − (L1 ∪ L2)", 
                                             "L1 ∩ L2 = {x ∈ Σ* | x ∈ L1 ∧ x ∈ Σ*}"}, 
                                            0));
        
        LF.push_back(Question("Qual è la definizione di complemento di un linguaggio L1?", 
                                            {"L1 = Σ* − L1", 
                                             "L1 = {x ∈ Σ* | x ∈ L1}", 
                                             "L1 = {x ∈ Σ* | x ∈ L2}", 
                                             "L1 = Σ* ∪ L1"}, 
                                            0));
        
        LF.push_back(Question("Cos’è la concatenazione di due linguaggi L1 e L2?", 
                                            {"L1 ◦ L2 = {x ∈ Σ* | ∃y1 ∈ L1 ∃y2 ∈ L2 (x = y1 ◦ y2)}", 
                                             "L1 ◦ L2 = {x ∈ Σ* | x ∈ L1 ∧ x ∈ L2}", 
                                             "L1 ◦ L2 = {x ∈ Σ* | x ∈ L1 ∨ x ∈ L2}", 
                                             "L1 ◦ L2 = {x ∈ Σ* | x = y1 ◦ y2, ∀y1 ∈ L1, y2 ∈ L2}"}, 
                                            0));
        
        LF.push_back(Question("Cosa rappresenta L ∪ Λ?", 
                                            {"L ∪ Λ = L", 
                                             "L ∪ Λ = Σ*", 
                                             "L ∪ Λ = Λ", 
                                             "L ∪ Λ = Σ* − L"}, 
                                            0));
        
        LF.push_back(Question("Qual è la definizione di chiusura riflessiva di un linguaggio L?", 
                                            {"L* = ∪h=0∞ Lh", 
                                             "L* = ∪h=1∞ Lh", 
                                             "L* = L + ∪ {ε}", 
                                             "L* = L ∪ {ε}"}, 
                                            0));
        
        LF.push_back(Question("Cosa rappresenta la potenza Lh di un linguaggio?", 
                                            {"Lh = L ◦ Lh−1", 
                                             "Lh = L ◦ Lh", 
                                             "Lh = Lh-1 ◦ L", 
                                             "Lh = Σ∗ − Lh−1"}, 
                                            0));
        
        LF.push_back(Question("Cosa significa L+?", 
                                            {"L+ = ∪h=1∞ Lh", 
                                             "L+ = ∪h=0∞ Lh", 
                                             "L+ = Σ∗ − L*", 
                                             "L+ = Σ* ∪ L*"}, 
                                            0));
        
        LF.push_back(Question("Se L = {aa}, cosa rappresenta L*?", 
                                            {"L* = {a2n | n ≥ 0}", 
                                             "L* = {a2n | n ≥ 1}", 
                                             "L* = {a2n | n < 0}", 
                                             "L* = {a2n | n ≥ 2}"}, 
                                            0));
        
        LF.push_back(Question("Cosa rappresenta la concatenazione di L1 = {astro, fisio} e L2 = {logia, nomia}?", 
                                            {"L1 ◦ L2 = {astrologia, astronomia, fisiologia, fisionomia}", 
                                             "L1 ◦ L2 = {astrofisiologia, astrologia, fisio, nomia}", 
                                             "L1 ◦ L2 = {astro, logia, fisio, nomia}", 
                                             "L1 ◦ L2 = {astrofisio, astronomia}"}, 
                                            0));
        
        LF.push_back(Question("Cos'è la riflessione di una stringa?", 
                                            {"La riflessione di una stringa x è la stessa stringa con l'ordine invertito", 
                                             "La riflessione di una stringa è la concatenazione della stringa con il suo inverso", 
                                             "La riflessione è sempre la stringa vuota", 
                                             "La riflessione non ha senso matematico"}, 
                                            0));
        
        LF.push_back(Question("Qual è la definizione di linguaggio palindromo?", 
                                            {"Un linguaggio palindromo è costituito da stringhe che sono uguali alla loro riflessione", 
                                             "Un linguaggio palindromo contiene solo stringhe di lunghezza pari", 
                                             "Un linguaggio palindromo è un linguaggio che non contiene mai ε", 
                                             "Un linguaggio palindromo è un linguaggio con solo una lettera"}, 
                                            0));
        
        LF.push_back(Question("Se L1 = {an | n ≥ 1} e L2 = {bm | m ≥ 1}, cosa rappresenta L1 ◦ L2?", 
                                            {"L1 ◦ L2 = {anbm | n, m ≥ 1}", 
                                             "L1 ◦ L2 = {anbm | n > m}", 
                                             "L1 ◦ L2 = {an | n ≥ 1}", 
                                             "L1 ◦ L2 = {bm | m ≥ 1}"}, 
                                            0));
        
        LF.push_back(Question("Come si definisce un linguaggio L1 ∪ L2?", 
                                            {"L1 ∪ L2 = {x ∈ Σ* | x ∈ L1 ∨ x ∈ L2}", 
                                             "L1 ∪ L2 = {x ∈ Σ* | x ∈ L1 ∧ x ∈ L2}", 
                                             "L1 ∪ L2 = Σ* − (L1 ∩ L2)", 
                                             "L1 ∪ L2 = Σ*"}, 
                                            0));
        
        LF.push_back(Question("Cosa rappresenta Λ?", 
                                            {"Λ è l'insieme delle stringhe vuote", 
                                             "Λ è l'alfabeto vuoto", 
                                             "Λ è l'insieme di tutte le parole", 
                                             "Λ è l'insieme di tutte le stringhe non vuote"}, 
                                            0));
        
        LF.push_back(Question("Cosa significa L* per un linguaggio L?", 
                                            {"L* = ∪h=0∞ Lh", 
                                             "L* = L ◦ L", 
                                             "L* = L + ∪ {ε}", 
                                             "L* = L + ∪ Σ*"}, 
                                            0));
        
        LF.push_back(Question("Cosa rappresenta la concatenazione di due linguaggi?", 
                                            {"La concatenazione di L1 e L2 è il linguaggio costituito dalle parole di L1 seguite dalle parole di L2", 
                                             "La concatenazione di L1 e L2 è l'unione di L1 e L2", 
                                             "La concatenazione di L1 e L2 è l'intersezione di L1 e L2", 
                                             "La concatenazione di L1 e L2 è il complemento di L1 e L2"}, 
                                            0));
        
        LF.push_back(Question("Cos'è il linguaggio L1 ∩ L2?", 
                                            {"L1 ∩ L2 è l'insieme delle parole comuni tra L1 e L2", 
                                             "L1 ∩ L2 è l'unione di L1 e L2", 
                                             "L1 ∩ L2 è il complemento di L1", 
                                             "L1 ∩ L2 è il linguaggio costituito da tutte le parole di Σ*"}, 
                                            0));
        
        LF.push_back(Question("Cosa indica la notazione Lh?", 
                                            {"Lh è il linguaggio costituito dalla concatenazione di L h volte", 
                                             "Lh è il linguaggio che contiene tutte le parole di lunghezza h", 
                                             "Lh è l'insieme delle parole che iniziano con la lettera h", 
                                             "Lh è il linguaggio che contiene solo parole palindrome"}, 
                                            0));
        
        LF.push_back(Question("Qual è la definizione di stella di Kleene?", 
                                            {"L* è la chiusura riflessiva di L rispetto alla concatenazione", 
                                             "L* è la chiusura riflessiva di L rispetto all'unione", 
                                             "L* è la chiusura di L rispetto alla potenza", 
                                             "L* è la chiusura non riflessiva di L rispetto alla concatenazione"}, 
                                            0));
        
        LF.push_back(Question("Cosa indica L+?", 
                                            {"L+ è la chiusura di L senza ε", 
                                             "L+ è la chiusura riflessiva di L", 
                                             "L+ è la concatenazione di L e L", 
                                             "L+ è l'unione di L e L*"}, 
                                            0));
        
        LF.push_back(Question("Cosa significa Σ*?", 
                                            {"Σ* è l'insieme di tutte le stringhe di lunghezza finita sull'alfabeto Σ", 
                                             "Σ* è l'insieme di tutte le stringhe vuote", 
                                             "Σ* è l'alfabeto stesso", 
                                             "Σ* è l'insieme di tutte le stringhe di lunghezza pari"}, 
                                            0));
        
        LF.push_back(Question("Cosa accade se L1 = {a} e L2 = {b}?", 
                                            {"L1 ◦ L2 = {ab}", 
                                             "L1 ◦ L2 = {ba}", 
                                             "L1 ◦ L2 = {aa, bb}", 
                                             "L1 ◦ L2 = {ab, ba}"}, 
                                            0));
        
        LF.push_back(Question("Cosa succede se L = {a}?", 
                                            {"L* = {a^n | n ≥ 0}", 
                                             "L* = {a^n | n ≥ 1}", 
                                             "L* = {a^n | n < 0}", 
                                             "L* = {aa}"}, 
                                            0));
            ER.push_back(Question("Cosa rappresenta l’espressione regolare ∅?", 
                                                {"Linguaggio vuoto", 
                                                 "Linguaggio che contiene ε", 
                                                 "Linguaggio con tutte le possibili stringhe", 
                                                 "Linguaggio che contiene solo il simbolo a"}, 
                                                0));
        ER.push_back(Question("Sia L = { 01, 1101, 010}. Segnare fra le seguenti, l'unica affermazione esatta:", 
                                                {"00001 ∈ L2", 
                                                 "011101 ∈ L3", 
                                                 "011101 ∈ L2", 
                                                 "ε ∈ L+"}, 
                                                2));
            
            ER.push_back(Question("Sia alfabeto finito e sia L . Segnare, fra le affermazioni seguenti l'unica affermazione esatta:", 
                                                {"ε ∈", 
                                                 "Se ε ∈ L, allora ε ∈ L+", 
                                                 "Se ε ∈ L, allora ε ∉ L+", 
                                                 "Nessuna delle risposte è esatta precedenti"}, 
                                                1));
            
            ER.push_back(Question("Come si interpreta l’espressione regolare (s + t)?", 
                                                {"L’unione dei linguaggi s e t", 
                                                 "La concatenazione dei linguaggi s e t", 
                                                 "La chiusura del linguaggio s", 
                                                 "La negazione di s e t"}, 
                                                0));
            
            ER.push_back(Question("Cosa rappresenta l’espressione regolare s∗?", 
                                                {"Zero o più occorrenze del linguaggio s", 
                                                 "Una o più occorrenze del linguaggio s", 
                                                 "L’unione dei linguaggi s", 
                                                 "La concatenazione del linguaggio s con se stesso"}, 
                                                0));
            
            ER.push_back(Question("Qual è la principale differenza tra le espressioni regolari e i linguaggi context-free?", 
                                                {"Le espressioni regolari rappresentano linguaggi regolari", 
                                                 "I linguaggi context-free sono sempre regolari", 
                                                 "Le espressioni regolari possono rappresentare linguaggi più complessi", 
                                                 "I linguaggi context-free non possono essere descritti con espressioni regolari"}, 
                                                0));
            
            ER.push_back(Question("Cosa rappresenta l’espressione regolare a∗?", 
                                                {"L’insieme delle stringhe contenenti solo a, di qualsiasi lunghezza", 
                                                 "L’insieme delle stringhe contenenti solo b", 
                                                 "L’insieme di tutte le stringhe non vuote di lunghezza pari", 
                                                 "L’insieme delle stringhe che terminano con a"}, 
                                                0));
            
            ER.push_back(Question("Come si scrive un’espressione regolare per rappresentare l’unione di due linguaggi s e t?", 
                                                {"(s + t)", 
                                                 "(s · t)", 
                                                 "s∗", 
                                                 "s.t"}, 
                                                0));
            
            ER.push_back(Question("Cosa rappresenta l’espressione regolare (a + b)∗?", 
                                                {"L’insieme delle stringhe formate da a e b di lunghezza arbitraria", 
                                                 "L’insieme delle stringhe che contengono almeno un a e un b", 
                                                 "L’insieme delle stringhe che terminano con a", 
                                                 "L’insieme delle stringhe che contengono solo a"}, 
                                                0));
            
            ER.push_back(Question("Cosa indica l’espressione regolare (r)+?", 
                                                {"Una o più occorrenze del linguaggio r", 
                                                 "Zero o più occorrenze del linguaggio r", 
                                                 "La concatenazione di r con se stesso", 
                                                 "L’unione di r con r"}, 
                                                0));
            
            ER.push_back(Question("Cosa rappresenta l’espressione regolare a∗b?", 
                                                {"L’insieme di tutte le stringhe che contengono zero o più a, seguite da b", 
                                                 "L’insieme di tutte le stringhe che contengono a e b in ordine qualsiasi", 
                                                 "L’insieme di tutte le stringhe che contengono esattamente un a seguito da un b", 
                                                 "L’insieme di tutte le stringhe che contengono solo a e b"}, 
                                                0));
            
            ER.push_back(Question("Cosa rappresenta l’espressione regolare a∗((aa)∗b + (bb)∗a)b∗?", 
                                                {"Un linguaggio che contiene stringhe di a e b, con condizioni specifiche sui gruppi di a e b", 
                                                 "Un linguaggio che contiene solo stringhe di a", 
                                                 "Un linguaggio che contiene solo stringhe di b", 
                                                 "Un linguaggio che contiene stringhe senza alcuna restrizione sui caratteri"}, 
                                                0));
            
            ER.push_back(Question("Qual è il significato di ε nelle espressioni regolari?", 
                                                {"La stringa vuota", 
                                                 "Il simbolo per il linguaggio vuoto", 
                                                 "Il simbolo per il linguaggio che contiene solo a", 
                                                 "La concatenazione di due linguaggi vuoti"}, 
                                                0));
            
            ER.push_back(Question("Cosa rappresenta l’espressione regolare (a + b)∗a?", 
                                                {"L’insieme di tutte le stringhe che terminano con a", 
                                                 "L’insieme di tutte le stringhe che contengono solo a e b", 
                                                 "L’insieme di tutte le stringhe che iniziano con a", 
                                                 "L’insieme di tutte le stringhe che contengono almeno un a e almeno un b"}, 
                                                0));
            
            ER.push_back(Question("Cosa descrive un linguaggio regolare?", 
                                                {"Un linguaggio che può essere rappresentato con un’espressione regolare", 
                                                 "Un linguaggio che può essere rappresentato con una grammatica context-free", 
                                                 "Un linguaggio che può essere riconosciuto da una macchina di Turing", 
                                                 "Un linguaggio che può essere rappresentato con un automa a stati finiti"}, 
                                                0));
            
            ER.push_back(Question("Cosa rappresenta l’espressione regolare a(b + c)d?", 
                                                {"Il linguaggio che contiene stringhe che iniziano con a, seguite da b o c e terminano con d", 
                                                 "Il linguaggio che contiene stringhe che iniziano con a, seguite da b e c", 
                                                 "Il linguaggio che contiene solo la stringa abc", 
                                                 "Il linguaggio che contiene solo la stringa ad"}, 
                                                0));
            
            ER.push_back(Question("Quale simbolo nelle espressioni regolari denota la concatenazione?", 
                                                {"·", 
                                                 "+", 
                                                 "*", 
                                                 "∅"}, 
                                                0));
            
            ER.push_back(Question("In un’espressione regolare, quale simbolo rappresenta l’operazione di unione?", 
                                                {"+" , 
                                                 "·", 
                                                 "*", 
                                                 "∅"}, 
                                                0));
            
            ER.push_back(Question("Cosa rappresenta l’espressione regolare a∗b∗?", 
                                                {"L’insieme di tutte le stringhe che contengono solo a e b, con zero o più occorrenze di ciascuno", 
                                                 "L’insieme di tutte le stringhe che contengono almeno un a e almeno un b", 
                                                 "L’insieme di tutte le stringhe che iniziano con a e terminano con b", 
                                                 "L’insieme di tutte le stringhe che contengono esattamente un a e un b"}, 
                                                0));
            
            ER.push_back(Question("Cosa indica l’operatore ∅ in un’espressione regolare?", 
                                                {"Il linguaggio vuoto", 
                                                 "La stringa vuota", 
                                                 "Il linguaggio che contiene solo ε", 
                                                 "Il linguaggio che contiene solo simboli distinti da a e b"}, 
                                                0));
            
            ER.push_back(Question("Cosa rappresenta l’espressione regolare (a + b)∗a?", 
                                                {"L’insieme di tutte le stringhe che contengono una sequenza di a e b e terminano con a", 
                                                 "L’insieme di tutte le stringhe che contengono una sequenza di a e b e terminano con b", 
                                                 "L’insieme di tutte le stringhe che contengono solo a e b", 
                                                 "L’insieme di tutte le stringhe che terminano con b"}, 
                                                0));
            
            ER.push_back(Question("Qual è la principale caratteristica di un linguaggio regolare?", 
                                                {"Può essere descritto da un’espressione regolare", 
                                                 "È sempre rappresentabile da una grammatica context-free", 
                                                 "È sempre riconoscibile da una macchina di Turing", 
                                                 "È sempre infinito"}, 
                                                0));
            
            ER.push_back(Question("Come si rappresenta la stringa vuota in un’espressione regolare?", 
                                                {"∅", 
                                                 "ε", 
                                                 "a∗", 
                                                 "a+"}, 
                                                0));
            
            ER.push_back(Question("Qual è la cardinalità di un linguaggio regolare su un alfabeto Σ?", 
                                                {"2ℵ0", 
                                                 "ℵ0", 
                                                 "Finita", 
                                                 "Dipende dalla lunghezza delle stringhe"}, 
                                                0));
            
            ER.push_back(Question("In un’espressione regolare, quale simbolo rappresenta la chiusura di un linguaggio?", 
                                                {"∗", 
                                                 "+", 
                                                 ".", 
                                                 "/"}, 
                                                0));
            
            ER.push_back(Question("Come si descrive un linguaggio che può generare qualsiasi combinazione di a e b con lunghezza arbitraria?", 
                                                {"(a + b)∗", 
                                                 "(a · b)∗", 
                                                 "(a + b)+", 
                                                 "a∗b∗"}, 
                                                0));
            
            ER.push_back(Question("Qual è la definizione di un linguaggio regolare?", 
                                                {"Un linguaggio che può essere descritto da un’automa a stati finiti", 
                                                 "Un linguaggio che può essere descritto da una grammatica context-free", 
                                                 "Un linguaggio che può essere descritto da una grammatica sensibile al contesto", 
                                                 "Un linguaggio che può essere descritto da una macchina di Turing"}, 
                                                0));
            // logica
            SF.push_back(Question("Una derivazione senza ipotesi è una sequenza finita di:", 
                                                {"Assiomi e conclusioni di regole di inferenza", 
                                                 "Assiomi, premesse e regole di inferenza", 
                                                 "Assiomi e permesse di regole di inferenza", 
                                                 "Assiomi e regole di inferenza"}, 
                                                1));
            SF.push_back(Question("Quale parte è definita nella parte sintattica di un sistema formale D ?", 
                                                {"L'insieme delle regole valide", 
                                                 "Un sottoinsieme di W, i teoremi del sistema formale", 
                                                 "Un sottoinsieme W di S*, le fbf", 
                                                 "Un sottoinsieme di Ax degli assiomi validi"}, 
                                                2));
            SF.push_back(Question("Quale parte è definita nella parte sintattica di un sistema formale D ?", 
                                                {"Un insieme di regole di inferenza", 
                                                 "Un sottoinsieme di W, i teoremi del sistema formale", 
                                                 "Un sottoinsieme di Ax degli assiomi validi", 
                                                 "L'insieme delle regole valide"}, 
                                                0));

            SF.push_back(Question("Quale parte non è definita nella parte sintattica di un sistema formale D ?", 
                                                {"Un insieme di regole di inferenza", 
                                                 "Un sottoinsieme W di S*, le fbf", 
                                                 "Un sottoinsieme di Ax di W degli assiomi", 
                                                 "L'insieme delle regole valide"}, 
                                                3));
            SF.push_back(Question("Quale parte non è definita nella parte sintattica di un sistema formale D ?", 
                                                {"Un insieme di S* di regole inferenza", 
                                                 "Un sottoinsieme W di S*, le fbf", 
                                                 "Un sottoinsieme di Ax di W degli assiomi", 
                                                 "Un alfabeto S"}, 
                                                0));
            SF.push_back(Question("Quale parte è definita nella parte sintattica di un sistema formale D ?", 
                                                {"Un alfabeto S", 
                                                 "Un sottoinsieme di W, i teoremi del sistema formale", 
                                                 "Un sottoinsieme di Ax degli assiomi validi", 
                                                 "L'insieme delle regole valide"}, 
                                                0));
            SF.push_back(Question("Quale parte è definita nella parte sintattica di un sistema formale D ?", 
                                                {"Un insieme di S* di regole inferenza", 
                                                 "Un sottoinsieme di W, i teoremi del sistema formale", 
                                                 "Un sottoinsieme di Ax di W degli assiomi", 
                                                 "L'insieme delle regole valide"}, 
                                                2));
            SF.push_back(Question("Quale parte non è definita nella parte sintattica di un sistema formale D ?", 
                                                {"Un insieme di regole inferenza", 
                                                 "Un sottoinsieme di W, i teoremi del sistema formale", 
                                                 "Un sottoinsieme di Ax di W degli assiomi", 
                                                 "Un alfabeto S"}, 
                                                1));
            SF.push_back(Question("Quale parte non è definita nella parte sintattica di un sistema formale D ?", 
                                                {"Un insieme di regole di inferenza", 
                                                 "Un sottoinsieme di W, i teoremi del sistema formale", 
                                                 "Un sottoinsieme di Ax degli assiomi validi", 
                                                 "Un alfabeto S"}, 
                                                1));
            SF.push_back(Question("in un sistema formale, quale delle seguenti affermazioni può essere derivata dal fatto che abbiamo {𝛼} ⊢ 𝛽 e ⊢ 𝛼", 
                                                {"{𝛼, 𝛽} è una regola per il sistema formale in esame", 
                                                 "Il sistema formale è consistente", 
                                                 "𝛽 è un teorema", 
                                                 "𝛼 non è un teorema"}, 
                                                2)); 
            SF.push_back(Question("Sia Γ un insieme finito di fbf di un sistema formale D; La definizione Con_D(Γ) è:", 
                                                {"{𝛼 ∈ 𝑊 : Γ ⊢ 𝛼}", 
                                                 "La domanda non ha senso , deve essere un insieme di ipotesi", 
                                                 "{𝛼 ∈ Γ : Γ ⊢ 𝛼}", 
                                                 "se 𝛼 ∈ Γ allora Γ ⊢ 𝛼"}, 
                                                0));
            SF.push_back(Question("M ⊢_D 𝛼 si legge:", 
                                                {"M deriva (prova) 𝛼 nel sistema formale", 
                                                 "D deriva (prova) M da 𝛼", 
                                                 "M deriva (prova) 𝛼 da D", 
                                                 "𝛼 è derivabile in D"}, 
                                                0));
            SF.push_back(Question("in un sistema formale, l'insieme Ax degli assiomi è", 
                                                {"Un sottoinsieme di S", 
                                                 "Un sottoinsieme infinito delle fbf", 
                                                 "Un sottoinsieme finito delle fbf", 
                                                 "Nessuna delle altre risposte."}, 
                                                3)); 
            SF.push_back(Question("in un sistema formale la regola è:", 
                                                {"Una relazione", 
                                                 "Una funzione", 
                                                 "Una sequenza di fbf", 
                                                 "Nessuna delle altre risposte."}, 
                                                0));  
            SF.push_back(Question("Una derivazione in un sistema è una sequenza finita di:", 
                                                {"Assiomi, ipotesi e conclusioni di regole di inferenza", 
                                                 "Assiomi, premesse e regole di inferenza", 
                                                 "Assiomi e premesse di regole di inferenza", 
                                                 "Assiomi e regole di inferenza"}, 
                                                0));
            SF.push_back(Question("Scrivendo ⊢_D 𝛼", 
                                                {"è un assioma di D", 
                                                 "una ipotei di D", 
                                                 "un teorema di D", 
                                                 "una conclusione di D"}, 
                                                2));
            SF.push_back(Question("L'assioma Ak di CL è", 
                                                {"(kP)Q)=(kP)", 
                                                 "(kP)Q)=Q", 
                                                 "(k(PQ))=P", 
                                                 "(kP)Q)=P"}, 
                                                3));
            SF.push_back(Question("Secondo la Definizione 2.9, un insieme Γ di fbf è una teoria in D se e solo se:", 
                                                {"Γ è un insieme finito di assiomi", 
                                                "Γ è chiuso rispetto alla relazione ⊢ₚ (Conₚ(Γ) = Γ) , Γ ⊢ₚ 𝛼 segue 𝛼 ∈ Γ", 
                                                "Γ contiene tutti i teoremi di D", 
                                                "Γ è un sottoinsieme delle regole di inferenza"}, 
                                                1));
            SF.push_back(Question("La teoria pura di un sistema formale D è definita come:", 
                                                {"L'insieme di tutte le fbf di D", 
                                                "L'insieme Conₚ(∅)=Conₚ(Ax), cioè le conseguenze degli assiomi senza ipotesi aggiuntive", 
                                                "L'insieme delle regole di inferenza di D", 
                                                "Un insieme massimale di fbf coerenti"}, 
                                                1));
            SF.push_back(Question("Quando due insiemi di fbf Γ e Γ' hanno Conₚ(Γ) = Conₚ(Γ'), significa che:", 
                                                {"Γ e Γ' sono entrambi vuoti", 
                                                "Γ e Γ' sono insiemi inconsistenti", 
                                                "Γ e Γ' generano le stesse conseguenze logiche in D, Conₚ(Γ) = Conₚ(Γ') , pur potendo essere diversi", 
                                                "Un insieme massimale di fbf coerenti"}, 
                                                2));
            SF.push_back(Question("Una teoria pura è sempre:", 
                                                {"Un insieme incoerente.", 
                                                "Una teoria (chiusa rispetto a ⊢ₚ)", 
                                                "Un insieme finito.", 
                                                "Un insieme privo di assiomi."}, 
                                                1));
            SF.push_back(Question("Una derivazione con ipotesi decidibili è una sequenza di fbf finita di:", 
                                                {"Assiomi, ipotesi e conclusioni di regole di inferenza", 
                                                "Assiomi e premesse di regole di inferenza", 
                                                "Assiomi e regole di inferenza", 
                                                "La frase è priva di senso"}, 
                                                0));
            SF.push_back(Question("Un teorema in un sistema formale è", 
                                                {"La conclusione di una derivazione in cui si utilizzano solo assiomi e regole di inferenza", 
                                                "La conclusione di una derivazione in cui si utilizzano ipotesi", 
                                                "La conclusione di una derivazione in cui si utilizzano ipotesi, assiomi e regole di inferenza", 
                                                "La conclusione di una derivazione in cui si utilizzano solo ipotesi e regole di inferenza"}, 
                                                0));
            SF.push_back(Question("cosa è un assioma ?", 
                                                {"Formula accettata come vera senza dimostrazione", 
                                                "Formula assunta temporaneamente per una derivaizone", 
                                                "Formula dimostrata solo da assiomi e regole di inferenza", 
                                                "Schema logico che consente di ottenere nuove formule da formule precedenti"}, 
                                                0));
            SF.push_back(Question("cosa è una regola di inferenza? ", 
                                                {"Formula accettata come vera senza dimostrazione", 
                                                "Formula assunta temporaneamente per una derivaizone", 
                                                "Formula dimostrata solo da assiomi e regole di inferenza", 
                                                "Schema logico che consente di ottenere nuove formule da formule precedenti"}, 
                                                3));
            SF.push_back(Question("Sia Γ un insieme di fbf, e sia 𝛼 una fbf. Scrivendo 𝛼 ⊢ₚ Γ si intende che esiste", 
                                                {"una derivazione di 𝛼 che utilizza tutte le ipotesi in Γ", 
                                                "una sola derivazione di 𝛼 che utilizza ipotesi in Γ", 
                                                "una derivazione di almeno una fbf in Γ che utilizza 𝛼 come ipotesi", 
                                                "La domanda è priva di senso"}, 
                                                3));
            SF.push_back(Question("Sia Γ un insieme di derivazioni di un sistema formale D.  la definizione di Conₚ(Γ) è", 
                                                {"La domanda non ha senso ci dovrebbe essere W al posto di Γ", 
                                                "La domanda non ha senso, per aver senso Γ dovrebbe essere un insieme di fbf", 
                                                "Se 𝛼 ∈ Γ allora Γ ⊢ₚ 𝛼 ", 
                                                "{𝛼 ∈ W | Γ ⊢ₚ 𝛼}",
                                                "{𝛼 ∈ Γ | Γ ⊢ₚ 𝛼}"},
                                                1));                                 
            SF.push_back(Question("Il seguente teorema Teorema, Sia Γ un insieme consistente di fbf di P₀ e sia quindi 𝛼 tale che Γ ⊢ₚ 𝛼 , Allora Γ U {¬𝛼} è consistente", 
                                                {"Sarebbe corretto se ci fosse indicato che Γ non deriva 𝛼", 
                                                "E' corretto", 
                                                "E' privo di senso, poichè non è un Teorema, ma un Lemma", 
                                                "Sarebbe corretto se ci fosse indicato Γ\\¬{𝛼}"},
                                                0)); 
            SF.push_back(Question("Scrivendo Γ ⊢ₚ 𝛼 si intende che esiste", 
                                                {"una derivazione di 𝛼 che utilizza ipotesi in Γ", 
                                                "una derivazione di 𝛼 che utilizza tutte le ipotesi in Γ", 
                                                "una sola derivazione di 𝛼 che utilizza ipotesi in Γ", 
                                                "una derivazione di 𝛼 che utilizza un ipotesi in Γ"},
                                                0));
            SF.push_back(Question("una regola derivabile", 
                                                {"Sono le fbf ad essere derivabili non le regole", 
                                                "non è mai ammissibile", 
                                                "può essere ammissibile", 
                                                "è sempre ammissibile"},
                                                3));  
            SF.push_back(Question("una regola R è ammissibile in un sistema D quando", 
                                                {"⊢_D+R 𝛼 implica a ⊢_D 𝛼", 
                                                "⊢_D+R 𝛼 non implica a ⊢_D 𝛼", 
                                                "⊢_D+R 𝛼 oppure a ⊢_D 𝛼", 
                                                "⊢_D 𝛼 implica a ⊢_D+R 𝛼"},
                                                0));
            SF.push_back(Question("una insieme Γ è una teoria quando", 
                                                {"Γ = Conₚ(Γ)", 
                                                "Conₚ(Conₚ(Γ)) = Conₚ(Γ)", 
                                                "Conₚ(Γ) = Conₚ(W)", 
                                                "Conₚ(Γ) = W"},
                                                0));
            SF.push_back(Question("Γ è consistente quando", 
                                                {"Conₚ(Γ) ≠ Conₚ(∅)", 
                                                "Conₚ(Γ) ≠ W", 
                                                "Conₚ(Γ) = Conₚ(W)", 
                                                "Conₚ(Γ) = W"},
                                                1));
            SF.push_back(Question("Scrivendo PQR (termine di CL) intendiamo", 
                                                {"((PR)(QR)))", 
                                                "P(QR)", 
                                                "((PQ)R)", 
                                                "P(Q)R)"},
                                                2));
            SF.push_back(Question("Quando un sistema è consistente?", 
                                                {"Quando l'insieme W delle fbf è derivabile", 
                                                "Quando non ogni fbf è valida", 
                                                "Quando esiste una fbf derivabile", 
                                                "Quando tutte le fbf sono ipotesi",
                                                "Quando esiste una fbf che on è un teorema"},
                                                4));
            SF.push_back(Question("Si consideri un sistema formale D consistente e con insieme di assiomi non vuoto. Si prenda poi la seguente regola di inferenza: \nR={(𝛼,𝛽) | 𝛼,𝛽 ∈ W },\ndove W è l'insieme delle fbf di D. Quale delle seguenti affermazioni è corretta?", 
                                                {"R è derivabile in D", 
                                                "R è ammissibile in D", 
                                                "R non è nè ammissibile nè derivabile D", 
                                                "La domnda è priva di senso poichè R non rispetta la definizione di regola di inferenza"},
                                                2));
            SF.push_back(Question("Si consideri un sistema formale D con un insieme di assiomi non vuoto e si consideri la seguente regola di inferenza: \nR={(𝛼,𝛽) | 𝛼,𝛽 ∈ W },\ndove W è l'insieme delle fbf di D. Quale delle seguenti affermazioni è corretta?", 
                                                {"Se R è derivabile in D allora D è consistente", 
                                                "Se R è ammissibile in D allora D è inconsistente", 
                                                "Se R è ammissibile in D allora è consistente", 
                                                "La domnda è priva di senso poichè R non rispetta la definizione di regola di inferenza"},
                                                1));
        }

vector<Question> QuestionManager::getQuestions(int difficulty) const {
    if (difficulty == 1) return LF;
    if (difficulty == 2) return ER;
    if (difficulty == 3) return SF;
    return chapterFor;
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