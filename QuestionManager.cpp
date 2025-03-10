#include "QuestionManager.h"
#include <iostream>
using namespace std;

QuestionManager::QuestionManager() {
    loadQuestions();
}

void QuestionManager::loadQuestions() {
    // Domande capitolo 1
    
    chapterOne.push_back(Question("Cosa si intende per alfabeto in informatica?", 
                              {"Un insieme finito non vuoto di simboli", 
                               "Una stringa di simboli", 
                               "Un insieme infinito di caratteri", 
                               "Un linguaggio di programmazione"}, 
                              0));

chapterOne.push_back(Question("Quale tra i seguenti è un esempio di alfabeto?", 
                              {"{0,1}", 
                               "{A,B,C,D}", 
                               "{a-z, A-Z, 0-9, +, -, *}", 
                               "Tutte le precedenti"}, 
                              3));

chapterOne.push_back(Question("Cos'è un monoide sintattico?", 
                              {"Un insieme di stringhe con un'operazione di concatenazione e un elemento neutro", 
                               "Un linguaggio di programmazione", 
                               "Un metodo per comprimere stringhe", 
                               "Un sottoinsieme dell'alfabeto"}, 
                              0));

chapterOne.push_back(Question("Cosa rappresenta l'elemento ε nel monoide sintattico?", 
                              {"La stringa vuota", 
                               "Il simbolo di fine riga", 
                               "Un carattere speciale dell'alfabeto", 
                               "Un'operazione di concatenazione"}, 
                              0));

chapterOne.push_back(Question("Quale tra le seguenti affermazioni è vera sulla concatenazione di stringhe?", 
                              {"Non è commutativa", 
                               "È sempre commutativa", 
                               "Restituisce sempre una stringa vuota", 
                               "Non può essere applicata a stringhe vuote"}, 
                              0));

chapterOne.push_back(Question("Cosa indica la notazione |x| per una stringa x?", 
                              {"La lunghezza della stringa", 
                               "Il valore numerico della stringa", 
                               "Il numero di simboli distinti nella stringa", 
                               "La posizione della stringa nell'alfabeto"}, 
                              0));

chapterOne.push_back(Question("Cosa succede quando una stringa x viene concatenata con la stringa vuota ε?", 
                              {"Rimane invariata", 
                               "Diventa la stringa vuota", 
                               "Si duplica", 
                               "Si annulla"}, 
                              0));

chapterOne.push_back(Question("Come viene indicata la concatenazione iterata di una stringa con sé stessa h volte?", 
                              {"xh", 
                               "x*h", 
                               "h(x)", 
                               "repeat(x, h)"}, 
                              0));

chapterOne.push_back(Question("Qual è la convenzione per rappresentare i caratteri dell'alfabeto Σ?", 
                              {"Con le prime lettere minuscole dell'alfabeto latino", 
                               "Con numeri da 0 a 9", 
                               "Con simboli speciali", 
                               "Con lettere maiuscole dell'alfabeto latino"}, 
                              0));

chapterOne.push_back(Question("Come si definisce un linguaggio in informatica?", 
                              {"Un sottoinsieme di Σ∗", 
                               "Un insieme di numeri", 
                               "Un insieme infinito di parole", 
                               "Un alfabeto ordinato"}, 
                              0));

chapterOne.push_back(Question("Quale delle seguenti affermazioni su un alfabeto Σ è corretta?", 
                              {"Un alfabeto è sempre un linguaggio", 
                               "Un alfabeto non è mai un linguaggio", 
                               "Un alfabeto contiene solo simboli numerici", 
                               "Un alfabeto non può avere più di 10 simboli"}, 
                              0));

chapterOne.push_back(Question("Come si indica il linguaggio vuoto?", 
                              {"Λ", 
                               "ε", 
                               "∅", 
                               "Σ∗"}, 
                              0));

chapterOne.push_back(Question("Quale delle seguenti affermazioni sul linguaggio vuoto è corretta?", 
                              {"Non contiene alcuna stringa", 
                               "Contiene solo la stringa vuota", 
                               "Contiene tutte le stringhe dell'alfabeto", 
                               "È uguale a Σ∗"}, 
                              0));

chapterOne.push_back(Question("Quale di queste affermazioni è falsa?", 
                              {"La concatenazione di stringhe è commutativa", 
                               "L'elemento neutro della concatenazione è la stringa vuota", 
                               "Le stringhe sono elementi di Σ∗", 
                               "Un linguaggio è un sottoinsieme di Σ∗"}, 
                              0));

chapterOne.push_back(Question("Qual è l'elemento neutro della concatenazione di stringhe?", 
                              {"La stringa vuota ε", 
                               "Il primo simbolo dell'alfabeto", 
                               "Un simbolo speciale", 
                               "Un numero"}, 
                              0));

chapterOne.push_back(Question("Cosa succede se concateno una stringa con se stessa 0 volte?", 
                              {"Ottengo la stringa vuota", 
                               "Ottengo la stringa stessa", 
                               "Ottengo una stringa infinita", 
                               "Ottengo una stringa con un solo carattere"}, 
                              0));

chapterOne.push_back(Question("Quale dei seguenti non è un esempio di alfabeto?", 
                              {"{1,2,3,4,5}", 
                               "{a,b,c,d,e}", 
                               "{0,1}", 
                               "{Σ∗}"}, 
                              3));

chapterOne.push_back(Question("Se un linguaggio è un sottoinsieme di Σ∗, allora quale delle seguenti affermazioni è vera?", 
                              {"Può contenere stringhe di diversa lunghezza", 
                               "Deve contenere tutte le stringhe di Σ∗", 
                               "Può contenere solo stringhe di lunghezza fissa", 
                               "Deve contenere solo la stringa vuota"}, 
                              0));

chapterOne.push_back(Question("Qual è il simbolo della concatenazione tra stringhe?", 
                              {"◦ (oppure viene omesso)", 
                               "+", 
                               "*", 
                               "/"}, 
                              0));

chapterOne.push_back(Question("Se x è una stringa e |x| = 5, cosa significa?", 
                              {"x ha lunghezza 5", 
                               "x ha 5 simboli diversi", 
                               "x ha 5 concatenazioni", 
                               "x è un numero"}, 
                              0));

chapterOne.push_back(Question("Se Σ = {0,1}, quale delle seguenti stringhe appartiene a Σ∗?", 
                              {"1010", 
                               "abc", 
                               "ε", 
                               "Entrambe 1010 e ε"}, 
                              3));

chapterOne.push_back(Question("Quale dei seguenti insiemi rappresenta un alfabeto valido?", 
                              {"{a,b,c}", 
                               "{+, -, *, /}", 
                               "{0,1,2,3,4,5,6,7,8,9}", 
                               "Tutte le precedenti"}, 
                              3));

chapterOne.push_back(Question("Cosa rappresenta la stringa ε?", 
                              {"La stringa vuota", 
                               "Una stringa con un solo carattere", 
                               "Un simbolo di fine stringa", 
                               "Un linguaggio"}, 
                              0));

chapterOne.push_back(Question("Quale tra queste è una proprietà della concatenazione?", 
                              {"Non è commutativa", 
                               "È distributiva", 
                               "È sempre associativa", 
                               "Non è definita per stringhe vuote"}, 
                              0));
                              chapterOne.push_back(Question("Come viene definito un insieme finito e non vuoto di simboli?", 
                                {"Alfabeto", 
                                 "Stringa", 
                                 "Linguaggio", 
                                 "Monoide"}, 
                                0));
  
  chapterOne.push_back(Question("Qual è l'alfabeto binario?", 
                                {"{0, 1}", 
                                 "{A, B, C, ..., Z}", 
                                 "{+, -, *, /, <, >}", 
                                 "{0, 1, 2, ..., 9}"}, 
                                0));
  
  chapterOne.push_back(Question("Cosa rappresenta Σ*?", 
                                {"L'insieme di tutte le stringhe sull'alfabeto Σ", 
                                 "L'insieme delle lettere maiuscole e minuscole", 
                                 "L'insieme di tutte le parole del linguaggio Pascal", 
                                 "Un insieme finito di simboli"}, 
                                0));
  
  chapterOne.push_back(Question("Che cos'è il monoide libero 〈Σ∗, ◦, ε〉?", 
                                {"Un insieme con un'operazione di concatenazione e un elemento neutro", 
                                 "Un insieme di simboli non ordinati", 
                                 "Un sottoinsieme di Σ", 
                                 "Un linguaggio formale"}, 
                                0));
  
  chapterOne.push_back(Question("Cosa rappresenta l'elemento ε nel monoide libero?", 
                                {"La parola vuota", 
                                 "L'elemento neutro della somma", 
                                 "Un simbolo speciale dell'alfabeto", 
                                 "Il separatore tra stringhe"}, 
                                0));
  
  chapterOne.push_back(Question("Quale notazione indica la lunghezza di una stringa x?", 
                                {"|x|", 
                                 "||x||", 
                                 "len(x)", 
                                 "strlen(x)"}, 
                                0));
  
  chapterOne.push_back(Question("Cosa indica l'espressione x^h?", 
                                {"La concatenazione della stringa x con se stessa h volte", 
                                 "La conversione di x in maiuscolo", 
                                 "La trasformazione di x in codice ASCII", 
                                 "La lunghezza della stringa x"}, 
                                0));
  
  chapterOne.push_back(Question("Quale tra queste affermazioni sulla concatenazione è corretta?", 
                                {"La concatenazione di due stringhe x e y non è commutativa", 
                                 "La concatenazione di due stringhe x e y è sempre commutativa", 
                                 "La concatenazione è una somma aritmetica", 
                                 "La concatenazione è una divisione tra stringhe"}, 
                                0));
  
  chapterOne.push_back(Question("Come si definisce un linguaggio?", 
                                {"Un sottoinsieme di Σ*", 
                                 "Un insieme finito di simboli", 
                                 "Una stringa composta da più caratteri", 
                                 "Un simbolo speciale in un alfabeto"}, 
                                0));
  
  chapterOne.push_back(Question("Come viene indicato il linguaggio vuoto?", 
                                {"Λ", 
                                 "Σ*", 
                                 "ε", 
                                 "∅"}, 
                                0));
                                chapterOne.push_back(Question("Qual è la definizione di stringa inversa (o riflessa)?", 
                                    {"Una stringa ottenuta invertendo l’ordine dei caratteri", 
                                     "Una stringa ottenuta eliminando vocali", 
                                     "Una stringa che si ripete infinite volte", 
                                     "Una stringa contenente solo lettere maiuscole"}, 
                                    0));
      
      chapterOne.push_back(Question("Quale tra le seguenti stringhe è palindroma?", 
                                    {"abba", 
                                     "abcd", 
                                     "aabb", 
                                     "abca"}, 
                                    0));
      
      chapterOne.push_back(Question("Quale operazione tra linguaggi permette di ottenere un linguaggio contenente solo parole comuni a entrambi?", 
                                    {"Intersezione", 
                                     "Unione", 
                                     "Concatenazione", 
                                     "Complementazione"}, 
                                    0));
      
      chapterOne.push_back(Question("Qual è la definizione formale dell’intersezione tra due linguaggi L1 e L2?", 
                                    {"L1 ∩ L2 = {x ∈ Σ∗ | x ∈ L1 ∧ x ∈ L2}", 
                                     "L1 ∩ L2 = {x ∈ Σ∗ | x ∈ L1 ∨ x ∈ L2}", 
                                     "L1 ∩ L2 = Σ∗ − L1", 
                                     "L1 ∩ L2 = {x ∈ Σ∗ | x ∉ L1}"}, 
                                    0));
      
      chapterOne.push_back(Question("L’unione tra due linguaggi L1 e L2 produce:", 
                                    {"Un linguaggio contenente parole appartenenti ad almeno uno dei due", 
                                     "Solo le parole comuni ai due linguaggi", 
                                     "Tutte le parole dell’alfabeto eccetto quelle di L1 e L2", 
                                     "Le parole di L1 concatenate con quelle di L2"}, 
                                    0));
      
      chapterOne.push_back(Question("Il complemento di un linguaggio L1 è definito come:", 
                                    {"Σ∗ − L1", 
                                     "L1 ∩ L2", 
                                     "L1 ∪ L2", 
                                     "L1 ◦ L2"}, 
                                    0));
      
      chapterOne.push_back(Question("La concatenazione tra due linguaggi L1 e L2 genera:", 
                                    {"Un linguaggio contenente parole formate dalla concatenazione di una stringa di L1 con una di L2", 
                                     "Un linguaggio contenente solo parole di L1", 
                                     "Un linguaggio contenente solo parole di L2", 
                                     "L’intersezione tra L1 e L2"}, 
                                    0));
      
      chapterOne.push_back(Question("Quale tra queste proprietà della concatenazione è vera?", 
                                    {"L ◦ {ε} = {ε} ◦ L = L", 
                                     "L ◦ {ε} = Λ", 
                                     "L ◦ L = L", 
                                     "L ◦ L2 = L2"}, 
                                    0));
      
      chapterOne.push_back(Question("Se L1 = {astro, fisio} e L2 = {logia, nomia}, quali stringhe appartengono a L1 ◦ L2?", 
                                    {"astrologia, astronomia, fisiologia, fisionomia", 
                                     "astrologia, astronomia", 
                                     "fisiologia, fisionomia", 
                                     "astrofisica, fisionomia"}, 
                                    0));
      
      chapterOne.push_back(Question("La potenza L^h di un linguaggio è definita come:", 
                                    {"L^h = L ◦ L^(h−1), con h ≥ 1 e L^0 = {ε}", 
                                     "L^h = L ∪ L^(h−1)", 
                                     "L^h = L − L^(h−1)", 
                                     "L^h = L ∩ L^(h−1)"}, 
                                    0));
      
      chapterOne.push_back(Question("L'operatore '∗' applicato a un linguaggio L prende il nome di:", 
                                    {"Stella di Kleene", 
                                     "Intersezione", 
                                     "Concatenazione", 
                                     "Complementazione"}, 
                                    0));
      
      chapterOne.push_back(Question("Qual è il risultato di L ∗ rispetto alla concatenazione?", 
                                    {"L'insieme di tutte le stringhe ottenute concatenando elementi di L un numero arbitrario di volte", 
                                     "L'insieme di tutte le stringhe palindrome", 
                                     "L'insieme di tutte le stringhe di lunghezza fissa h", 
                                     "L'insieme di tutte le stringhe senza ripetizioni"}, 
                                    0));
      
      chapterOne.push_back(Question("Se L = {aa}, allora L ∗ è:", 
                                    {"{a2n | n ≥ 0}", 
                                     "{a2n | n ≥ 1}", 
                                     "{anbn | n ≥ 1}", 
                                     "{ε, aa}"}, 
                                    0));
      
      chapterOne.push_back(Question("Quale tra le seguenti affermazioni è corretta per L+?", 
                                    {"L+ = L* ∖ {ε}", 
                                     "L+ = L* ∪ {ε}", 
                                     "L+ = L*", 
                                     "L+ = {ε}"}, 
                                    0));
      
      chapterOne.push_back(Question("Qual è il risultato della chiusura riflessiva L∗ di un linguaggio L?", 
                                    {"Include ε e tutte le possibili concatenazioni di elementi di L", 
                                     "Include solo stringhe palindromiche", 
                                     "Include solo stringhe di lunghezza finita", 
                                     "Esclude sempre la stringa vuota"}, 
                                    0));
      
      chapterOne.push_back(Question("Se L1 = {bis} e L2 = {nonno}, quali stringhe appartengono a L1* ◦ L2?", 
                                    {"nonno, bisnonno, bisbisnonno, ...", 
                                     "bis, nonno", 
                                     "bisbis, nonnonno", 
                                     "bis, bisbis, nonnonno"}, 
                                    0));
      
      chapterOne.push_back(Question("Quale relazione esiste tra L* e L+?", 
                                    {"L* = L+ ∪ {ε}", 
                                     "L* = L+ ∩ {ε}", 
                                     "L* = L+", 
                                     "L* = ∅"}, 
                                    0));
      
      chapterOne.push_back(Question("Cosa rappresenta Σ*?", 
                                    {"L’insieme di tutte le stringhe finite sull’alfabeto Σ", 
                                     "L’insieme delle stringhe palindrome", 
                                     "L’insieme delle stringhe senza simboli ripetuti", 
                                     "L’insieme delle stringhe di lunghezza fissa su Σ"}, 
                                    0));
      
      chapterOne.push_back(Question("Quale delle seguenti affermazioni è corretta riguardo L ◦ Λ?", 
                                    {"L ◦ Λ = Λ ◦ L = Λ", 
                                     "L ◦ Λ = L", 
                                     "L ◦ Λ = {ε}", 
                                     "L ◦ Λ = Σ*"}, 
                                    0));
      
      chapterOne.push_back(Question("Se L1 = {an | n ≥ 1} e L2 = {bm | m ≥ 1}, allora L1 ◦ L2 è:", 
                                    {"{anbm | n, m ≥ 1}", 
                                     "{anbn | n ≥ 1}", 
                                     "{bmam | m, n ≥ 1}", 
                                     "{ε}"}, 
                                    0));
      
      chapterOne.push_back(Question("Cosa rappresenta l'operazione di iterazione su un linguaggio?", 
                                    {"La ripetizione arbitraria delle stringhe di un linguaggio", 
                                     "L’eliminazione delle stringhe duplicate", 
                                     "La trasformazione delle stringhe in palindrome", 
                                     "L’ordinamento delle stringhe in base alla lunghezza"}, 
                                    0));
      
      chapterOne.push_back(Question("Come si indica formalmente l’unione di due linguaggi L1 e L2?", 
                                    {"L1 ∪ L2 = {x ∈ Σ* | x ∈ L1 ∨ x ∈ L2}", 
                                     "L1 ∪ L2 = {x ∈ Σ* | x ∈ L1 ∧ x ∈ L2}", 
                                     "L1 ∪ L2 = Σ* − (L1 ∩ L2)", 
                                     "L1 ∪ L2 = Σ*"}, 
                                    0));
        
                                    chapterOne.push_back(Question("Cos’è l'operazione di unione tra due linguaggi L1 e L2?", 
                                        {"L1 ∪ L2 = {x ∈ Σ* | x ∈ L1 ∧ x ∈ L2}", 
                                         "L1 ∪ L2 = {x ∈ Σ* | x ∈ L1 ∨ x ∈ L2}", 
                                         "L1 ∪ L2 = Σ* − (L1 ∩ L2)", 
                                         "L1 ∪ L2 = Σ*"}, 
                                        1));
    
    chapterOne.push_back(Question("Se L1 = {a^n | n ≥ 1} e L2 = {b^m | m ≥ 1}, qual è L1 ◦ L2?", 
                                        {"{a^n b^m | n, m ≥ 1}", 
                                         "{a^n | n ≥ 1}", 
                                         "{b^m | m ≥ 1}", 
                                         "{a, b}"}, 
                                        0));
    
    chapterOne.push_back(Question("Cosa rappresenta l'operatore ∗ in relazione ai linguaggi?", 
                                        {"Concatenazione di linguaggi", 
                                         "Chiusura riflessiva del linguaggio",
                                         "Intersezione di linguaggi", 
                                         "Complemento di linguaggi"}, 
                                        1));
    
    chapterOne.push_back(Question("Qual è la definizione di linguaggio palindromo?", 
                                        {"{x | x = x}", 
                                         "{x | x è la stessa stringa da sinistra a destra e viceversa}", 
                                         "{x | x ∈ Σ*}", 
                                         "{x | x ∈ Σ* e x ≠ x^r}"}, 
                                        1));
    
    chapterOne.push_back(Question("Cos'è il complemento di un linguaggio L1?", 
                                        {"L1 = Σ* − L1", 
                                         "L1 = Σ − L1", 
                                         "L1 = L1 ∪ Σ*", 
                                         "L1 = Σ* ∩ L1"}, 
                                        0));
    
    chapterOne.push_back(Question("Se L = {aa}, quale sarà L∗?", 
                                        {"{a^2n | n ≥ 1}", 
                                         "{a^2n | n ≥ 0}", 
                                         "{a^n | n ≥ 0}", 
                                         "{a^2n | n ≥ 2}"}, 
                                        1));
    
    chapterOne.push_back(Question("Qual è il linguaggio L1 ∩ Λ?", 
                                        {"L1", 
                                         "Λ", 
                                         "{ε}", 
                                         "{x | x ∈ Σ* e x ∈ L1}"}, 
                                        1));
    
    chapterOne.push_back(Question("Qual è il risultato dell'operazione L1 ∪ Λ?", 
                                        {"L1", 
                                         "Λ", 
                                         "Σ*", 
                                         "{ε}"}, 
                                        0));
    
    chapterOne.push_back(Question("Cos’è la potenza di un linguaggio L?", 
                                        {"Lh = L ◦ Lh−1", 
                                         "Lh = L ◦ h", 
                                         "Lh = h ◦ L", 
                                         "Lh = Σ* ∩ L"}, 
                                        0));
    
    chapterOne.push_back(Question("Cosa rappresenta la chiusura di Kleene di un linguaggio L?", 
                                        {"L* = ∞⋃h=0 Lh", 
                                         "L* = Σ* − L", 
                                         "L* = L ∪ {ε}", 
                                         "L* = Σ* ∪ L"}, 
                                        0));
    
    chapterOne.push_back(Question("Qual è la differenza tra L∗ e L+?", 
                                        {"L+ = L∗ ∪ {ε}", 
                                         "L+ = ∞⋃h=0 Lh", 
                                         "L+ = Σ∗ − L", 
                                         "L+ = L ∪ L∗"}, 
                                        0));
    
    chapterOne.push_back(Question("Qual è il risultato dell’operazione L1 ◦ {ε}?", 
                                        {"L1", 
                                         "{ε}", 
                                         "Σ*", 
                                         "Λ"}, 
                                        0));
    
    chapterOne.push_back(Question("Se L = {a}, quale sarà L+?", 
                                        {"{a^2n | n ≥ 1}", 
                                         "{a^2n | n ≥ 0}", 
                                         "{a^n | n ≥ 1}", 
                                         "{a^n | n ≥ 0}"}, 
                                        0));
    
    chapterOne.push_back(Question("Cos’è la concatenazione di due linguaggi L1 e L2?", 
                                        {"L1 ◦ L2 = {x ∈ Σ* | ∃y1 ∈ L1 ∃y2 ∈ L2 (x = y1 ◦ y2)}", 
                                         "L1 ◦ L2 = L1 ∪ L2", 
                                         "L1 ◦ L2 = L1 ∩ L2", 
                                         "L1 ◦ L2 = Σ*"}, 
                                        0));
    
    chapterOne.push_back(Question("Se L1 = {astro, fisio} e L2 = {logia, nomia}, quale sarà L1 ◦ L2?", 
                                        {"{astrologia, astronomia, fisiologia, fisionomia}", 
                                         "{astrofisiologia, astronomania}", 
                                         "{astro, fisio, logia}", 
                                         "{logia, nomia}"}, 
                                        0));
    
    chapterOne.push_back(Question("Cosa si intende con la parola 'palindroma' in un linguaggio?", 
                                        {"La stringa è uguale a se stessa quando letta da destra a sinistra", 
                                         "La stringa contiene solo caratteri ripetuti", 
                                         "La stringa contiene solo lettere minuscole", 
                                         "La stringa è composta solo da simboli distinti"}, 
                                        0));
    
    chapterOne.push_back(Question("Quando L1 ◦ Λ = Λ?", 
                                        {"Sempre", 
                                         "Mai", 
                                         "Se L1 contiene la stringa vuota", 
                                         "Se L1 è vuoto"}, 
                                        0));
    
    chapterOne.push_back(Question("Qual è il significato di Λ nella teoria dei linguaggi formali?", 
                                        {"L'insieme vuoto", 
                                         "L'alfabeto", 
                                         "La stringa vuota", 
                                         "Il linguaggio completo"}, 
                                        2));
    
    chapterOne.push_back(Question("Se L = {a^n | n ≥ 1}, quale sarà L ∗?", 
                                        {"{a^2n | n ≥ 0}", 
                                         "{a^n | n ≥ 0}", 
                                         "{a^n | n ≥ 1}", 
                                         "{a^n | n ≥ 2}"}, 
                                        1));
    
    chapterOne.push_back(Question("Cosa significa che L1 ◦ L2 = Λ?", 
                                        {"L1 e L2 sono entrambi vuoti", 
                                         "L1 o L2 contiene Λ", 
                                         "L1 e L2 contengono solo ε", 
                                         "L1 è uguale a Σ*"}, 
                                        1));
    
    chapterOne.push_back(Question("Cos’è la concatenazione dei linguaggi L1 e L2?", 
                                        {"L1 ◦ L2 = {x ∈ Σ* | x = y1 ◦ y2 per ogni y1 ∈ L1 e y2 ∈ L2}", 
                                         "L1 ◦ L2 = {x ∈ Σ* | x ∈ L1 o x ∈ L2}", 
                                         "L1 ◦ L2 = L1 ∪ L2", 
                                         "L1 ◦ L2 = L1 ∩ L2"}, 
                                        0));
    
    chapterOne.push_back(Question("Cosa significa che L1 ∪ L2 = Σ*?", 
                                        {"L1 e L2 coprono tutto l'alfabeto", 
                                         "L1 è uguale a Σ* e L2 è vuoto", 
                                         "L1 e L2 contengono solo ε", 
                                         "L1 è uguale a Σ* e L2 è {ε}"}, 
                                        0));
    
    chapterOne.push_back(Question("Cos'è l'operazione di intersezione tra due linguaggi?", 
                                        {"L1 ∩ L2 = {x ∈ Σ* | x ∈ L1 ∧ x ∈ L2}", 
                                         "L1 ∩ L2 = {x ∈ Σ* | x ∈ L1 ∨ x ∈ L2}", 
                                         "L1 ∩ L2 = Σ* − (L1 ∪ L2)", 
                                         "L1 ∩ L2 = Σ*"}, 
                                        0));
    
    chapterOne.push_back(Question("Cosa si intende per linguaggio complementare?", 
                                        {"L1 = Σ* − L1", 
                                         "L1 = Σ − L1", 
                                         "L1 = L1 ∪ Σ*", 
                                         "L1 = Σ* ∩ L1"}, 
                                        0));
                                        chapterOne.push_back(Question("Cosa rappresenta l'operazione di intersezione tra due linguaggi L1 e L2?", 
                                            {"L1 ∩ L2 = {x ∈ Σ* | x ∈ L1 ∧ x ∈ L2}", 
                                             "L1 ∩ L2 = {x ∈ Σ* | x ∈ L1 ∨ x ∈ L2}", 
                                             "L1 ∩ L2 = Σ* − (L1 ∪ L2)", 
                                             "L1 ∩ L2 = {x ∈ Σ* | x ∈ L1 ∧ x ∈ Σ*}"}, 
                                            0));
        
        chapterOne.push_back(Question("Qual è la definizione di complemento di un linguaggio L1?", 
                                            {"L1 = Σ* − L1", 
                                             "L1 = {x ∈ Σ* | x ∈ L1}", 
                                             "L1 = {x ∈ Σ* | x ∈ L2}", 
                                             "L1 = Σ* ∪ L1"}, 
                                            0));
        
        chapterOne.push_back(Question("Cos’è la concatenazione di due linguaggi L1 e L2?", 
                                            {"L1 ◦ L2 = {x ∈ Σ* | ∃y1 ∈ L1 ∃y2 ∈ L2 (x = y1 ◦ y2)}", 
                                             "L1 ◦ L2 = {x ∈ Σ* | x ∈ L1 ∧ x ∈ L2}", 
                                             "L1 ◦ L2 = {x ∈ Σ* | x ∈ L1 ∨ x ∈ L2}", 
                                             "L1 ◦ L2 = {x ∈ Σ* | x = y1 ◦ y2, ∀y1 ∈ L1, y2 ∈ L2}"}, 
                                            0));
        
        chapterOne.push_back(Question("Cosa rappresenta L ∪ Λ?", 
                                            {"L ∪ Λ = L", 
                                             "L ∪ Λ = Σ*", 
                                             "L ∪ Λ = Λ", 
                                             "L ∪ Λ = Σ* − L"}, 
                                            0));
        
        chapterOne.push_back(Question("Qual è la definizione di chiusura riflessiva di un linguaggio L?", 
                                            {"L* = ∪h=0∞ Lh", 
                                             "L* = ∪h=1∞ Lh", 
                                             "L* = L + ∪ {ε}", 
                                             "L* = L ∪ {ε}"}, 
                                            0));
        
        chapterOne.push_back(Question("Cosa rappresenta la potenza Lh di un linguaggio?", 
                                            {"Lh = L ◦ Lh−1", 
                                             "Lh = L ◦ Lh", 
                                             "Lh = Lh-1 ◦ L", 
                                             "Lh = Σ∗ − Lh−1"}, 
                                            0));
        
        chapterOne.push_back(Question("Cosa significa L+?", 
                                            {"L+ = ∪h=1∞ Lh", 
                                             "L+ = ∪h=0∞ Lh", 
                                             "L+ = Σ∗ − L*", 
                                             "L+ = Σ* ∪ L*"}, 
                                            0));
        
        chapterOne.push_back(Question("Se L = {aa}, cosa rappresenta L*?", 
                                            {"L* = {a2n | n ≥ 0}", 
                                             "L* = {a2n | n ≥ 1}", 
                                             "L* = {a2n | n < 0}", 
                                             "L* = {a2n | n ≥ 2}"}, 
                                            0));
        
        chapterOne.push_back(Question("Cosa rappresenta la concatenazione di L1 = {astro, fisio} e L2 = {logia, nomia}?", 
                                            {"L1 ◦ L2 = {astrologia, astronomia, fisiologia, fisionomia}", 
                                             "L1 ◦ L2 = {astrofisiologia, astrologia, fisio, nomia}", 
                                             "L1 ◦ L2 = {astro, logia, fisio, nomia}", 
                                             "L1 ◦ L2 = {astrofisio, astronomia}"}, 
                                            0));
        
        chapterOne.push_back(Question("Cos'è la riflessione di una stringa?", 
                                            {"La riflessione di una stringa x è la stessa stringa con l'ordine invertito", 
                                             "La riflessione di una stringa è la concatenazione della stringa con il suo inverso", 
                                             "La riflessione è sempre la stringa vuota", 
                                             "La riflessione non ha senso matematico"}, 
                                            0));
        
        chapterOne.push_back(Question("Qual è la definizione di linguaggio palindromo?", 
                                            {"Un linguaggio palindromo è costituito da stringhe che sono uguali alla loro riflessione", 
                                             "Un linguaggio palindromo contiene solo stringhe di lunghezza pari", 
                                             "Un linguaggio palindromo è un linguaggio che non contiene mai ε", 
                                             "Un linguaggio palindromo è un linguaggio con solo una lettera"}, 
                                            0));
        
        chapterOne.push_back(Question("Se L1 = {an | n ≥ 1} e L2 = {bm | m ≥ 1}, cosa rappresenta L1 ◦ L2?", 
                                            {"L1 ◦ L2 = {anbm | n, m ≥ 1}", 
                                             "L1 ◦ L2 = {anbm | n > m}", 
                                             "L1 ◦ L2 = {an | n ≥ 1}", 
                                             "L1 ◦ L2 = {bm | m ≥ 1}"}, 
                                            0));
        
        chapterOne.push_back(Question("Come si definisce un linguaggio L1 ∪ L2?", 
                                            {"L1 ∪ L2 = {x ∈ Σ* | x ∈ L1 ∨ x ∈ L2}", 
                                             "L1 ∪ L2 = {x ∈ Σ* | x ∈ L1 ∧ x ∈ L2}", 
                                             "L1 ∪ L2 = Σ* − (L1 ∩ L2)", 
                                             "L1 ∪ L2 = Σ*"}, 
                                            0));
        
        chapterOne.push_back(Question("Cosa rappresenta Λ?", 
                                            {"Λ è l'insieme delle stringhe vuote", 
                                             "Λ è l'alfabeto vuoto", 
                                             "Λ è l'insieme di tutte le parole", 
                                             "Λ è l'insieme di tutte le stringhe non vuote"}, 
                                            0));
        
        chapterOne.push_back(Question("Cosa significa L* per un linguaggio L?", 
                                            {"L* = ∪h=0∞ Lh", 
                                             "L* = L ◦ L", 
                                             "L* = L + ∪ {ε}", 
                                             "L* = L + ∪ Σ*"}, 
                                            0));
        
        chapterOne.push_back(Question("Cosa rappresenta la concatenazione di due linguaggi?", 
                                            {"La concatenazione di L1 e L2 è il linguaggio costituito dalle parole di L1 seguite dalle parole di L2", 
                                             "La concatenazione di L1 e L2 è l'unione di L1 e L2", 
                                             "La concatenazione di L1 e L2 è l'intersezione di L1 e L2", 
                                             "La concatenazione di L1 e L2 è il complemento di L1 e L2"}, 
                                            0));
        
        chapterOne.push_back(Question("Cos'è il linguaggio L1 ∩ L2?", 
                                            {"L1 ∩ L2 è l'insieme delle parole comuni tra L1 e L2", 
                                             "L1 ∩ L2 è l'unione di L1 e L2", 
                                             "L1 ∩ L2 è il complemento di L1", 
                                             "L1 ∩ L2 è il linguaggio costituito da tutte le parole di Σ*"}, 
                                            0));
        
        chapterOne.push_back(Question("Cosa indica la notazione Lh?", 
                                            {"Lh è il linguaggio costituito dalla concatenazione di L h volte", 
                                             "Lh è il linguaggio che contiene tutte le parole di lunghezza h", 
                                             "Lh è l'insieme delle parole che iniziano con la lettera h", 
                                             "Lh è il linguaggio che contiene solo parole palindrome"}, 
                                            0));
        
        chapterOne.push_back(Question("Qual è la definizione di stella di Kleene?", 
                                            {"L* è la chiusura riflessiva di L rispetto alla concatenazione", 
                                             "L* è la chiusura riflessiva di L rispetto all'unione", 
                                             "L* è la chiusura di L rispetto alla potenza", 
                                             "L* è la chiusura non riflessiva di L rispetto alla concatenazione"}, 
                                            0));
        
        chapterOne.push_back(Question("Cosa indica L+?", 
                                            {"L+ è la chiusura di L senza ε", 
                                             "L+ è la chiusura riflessiva di L", 
                                             "L+ è la concatenazione di L e L", 
                                             "L+ è l'unione di L e L*"}, 
                                            0));
        
        chapterOne.push_back(Question("Cosa significa Σ*?", 
                                            {"Σ* è l'insieme di tutte le stringhe di lunghezza finita sull'alfabeto Σ", 
                                             "Σ* è l'insieme di tutte le stringhe vuote", 
                                             "Σ* è l'alfabeto stesso", 
                                             "Σ* è l'insieme di tutte le stringhe di lunghezza pari"}, 
                                            0));
        
        chapterOne.push_back(Question("Cosa accade se L1 = {a} e L2 = {b}?", 
                                            {"L1 ◦ L2 = {ab}", 
                                             "L1 ◦ L2 = {ba}", 
                                             "L1 ◦ L2 = {aa, bb}", 
                                             "L1 ◦ L2 = {ab, ba}"}, 
                                            0));
        
        chapterOne.push_back(Question("Cosa succede se L = {a}?", 
                                            {"L* = {a^n | n ≥ 0}", 
                                             "L* = {a^n | n ≥ 1}", 
                                             "L* = {a^n | n < 0}", 
                                             "L* = {aa}"}, 
                                            0));
            chapterTwo.push_back(Question("Cosa rappresenta l’espressione regolare ∅?", 
                                                {"Linguaggio vuoto", 
                                                 "Linguaggio che contiene ε", 
                                                 "Linguaggio con tutte le possibili stringhe", 
                                                 "Linguaggio che contiene solo il simbolo a"}, 
                                                0));
            
            chapterTwo.push_back(Question("Qual è il significato dell'operatore + in un'espressione regolare?", 
                                                {"Unione di due linguaggi", 
                                                 "Concatenazione di due linguaggi", 
                                                 "Chiusura di un linguaggio", 
                                                 "Nessuna delle precedenti"}, 
                                                0));
            
            chapterTwo.push_back(Question("Come si interpreta l’espressione regolare (s + t)?", 
                                                {"L’unione dei linguaggi s e t", 
                                                 "La concatenazione dei linguaggi s e t", 
                                                 "La chiusura del linguaggio s", 
                                                 "La negazione di s e t"}, 
                                                0));
            
            chapterTwo.push_back(Question("Cosa rappresenta l’espressione regolare s∗?", 
                                                {"Zero o più occorrenze del linguaggio s", 
                                                 "Una o più occorrenze del linguaggio s", 
                                                 "L’unione dei linguaggi s", 
                                                 "La concatenazione del linguaggio s con se stesso"}, 
                                                0));
            
            chapterTwo.push_back(Question("Qual è la principale differenza tra le espressioni regolari e i linguaggi context-free?", 
                                                {"Le espressioni regolari rappresentano linguaggi regolari", 
                                                 "I linguaggi context-free sono sempre regolari", 
                                                 "Le espressioni regolari possono rappresentare linguaggi più complessi", 
                                                 "I linguaggi context-free non possono essere descritti con espressioni regolari"}, 
                                                0));
            
            chapterTwo.push_back(Question("Cosa rappresenta l’espressione regolare a∗?", 
                                                {"L’insieme delle stringhe contenenti solo a, di qualsiasi lunghezza", 
                                                 "L’insieme delle stringhe contenenti solo b", 
                                                 "L’insieme di tutte le stringhe non vuote di lunghezza pari", 
                                                 "L’insieme delle stringhe che terminano con a"}, 
                                                0));
            
            chapterTwo.push_back(Question("Come si scrive un’espressione regolare per rappresentare l’unione di due linguaggi s e t?", 
                                                {"(s + t)", 
                                                 "(s · t)", 
                                                 "s∗", 
                                                 "s.t"}, 
                                                0));
            
            chapterTwo.push_back(Question("Cosa rappresenta l’espressione regolare (a + b)∗?", 
                                                {"L’insieme delle stringhe formate da a e b di lunghezza arbitraria", 
                                                 "L’insieme delle stringhe che contengono almeno un a e un b", 
                                                 "L’insieme delle stringhe che terminano con a", 
                                                 "L’insieme delle stringhe che contengono solo a"}, 
                                                0));
            
            chapterTwo.push_back(Question("Cosa indica l’espressione regolare (r)+?", 
                                                {"Una o più occorrenze del linguaggio r", 
                                                 "Zero o più occorrenze del linguaggio r", 
                                                 "La concatenazione di r con se stesso", 
                                                 "L’unione di r con r"}, 
                                                0));
            
            chapterTwo.push_back(Question("Cosa rappresenta l’espressione regolare a∗b?", 
                                                {"L’insieme di tutte le stringhe che contengono zero o più a, seguite da b", 
                                                 "L’insieme di tutte le stringhe che contengono a e b in ordine qualsiasi", 
                                                 "L’insieme di tutte le stringhe che contengono esattamente un a seguito da un b", 
                                                 "L’insieme di tutte le stringhe che contengono solo a e b"}, 
                                                0));
            
            chapterTwo.push_back(Question("Cosa rappresenta l’espressione regolare a∗((aa)∗b + (bb)∗a)b∗?", 
                                                {"Un linguaggio che contiene stringhe di a e b, con condizioni specifiche sui gruppi di a e b", 
                                                 "Un linguaggio che contiene solo stringhe di a", 
                                                 "Un linguaggio che contiene solo stringhe di b", 
                                                 "Un linguaggio che contiene stringhe senza alcuna restrizione sui caratteri"}, 
                                                0));
            
            chapterTwo.push_back(Question("Qual è il significato di ε nelle espressioni regolari?", 
                                                {"La stringa vuota", 
                                                 "Il simbolo per il linguaggio vuoto", 
                                                 "Il simbolo per il linguaggio che contiene solo a", 
                                                 "La concatenazione di due linguaggi vuoti"}, 
                                                0));
            
            chapterTwo.push_back(Question("Cosa rappresenta l’espressione regolare (a + b)∗a?", 
                                                {"L’insieme di tutte le stringhe che terminano con a", 
                                                 "L’insieme di tutte le stringhe che contengono solo a e b", 
                                                 "L’insieme di tutte le stringhe che iniziano con a", 
                                                 "L’insieme di tutte le stringhe che contengono almeno un a e almeno un b"}, 
                                                0));
            
            chapterTwo.push_back(Question("Cosa descrive un linguaggio regolare?", 
                                                {"Un linguaggio che può essere rappresentato con un’espressione regolare", 
                                                 "Un linguaggio che può essere rappresentato con una grammatica context-free", 
                                                 "Un linguaggio che può essere riconosciuto da una macchina di Turing", 
                                                 "Un linguaggio che può essere rappresentato con un automa a stati finiti"}, 
                                                0));
            
            chapterTwo.push_back(Question("Cosa rappresenta l’espressione regolare a(b + c)d?", 
                                                {"Il linguaggio che contiene stringhe che iniziano con a, seguite da b o c e terminano con d", 
                                                 "Il linguaggio che contiene stringhe che iniziano con a, seguite da b e c", 
                                                 "Il linguaggio che contiene solo la stringa abc", 
                                                 "Il linguaggio che contiene solo la stringa ad"}, 
                                                0));
            
            chapterTwo.push_back(Question("Quale simbolo nelle espressioni regolari denota la concatenazione?", 
                                                {"·", 
                                                 "+", 
                                                 "*", 
                                                 "∅"}, 
                                                0));
            
            chapterTwo.push_back(Question("In un’espressione regolare, quale simbolo rappresenta l’operazione di unione?", 
                                                {"+" , 
                                                 "·", 
                                                 "*", 
                                                 "∅"}, 
                                                0));
            
            chapterTwo.push_back(Question("Cosa rappresenta l’espressione regolare a∗b∗?", 
                                                {"L’insieme di tutte le stringhe che contengono solo a e b, con zero o più occorrenze di ciascuno", 
                                                 "L’insieme di tutte le stringhe che contengono almeno un a e almeno un b", 
                                                 "L’insieme di tutte le stringhe che iniziano con a e terminano con b", 
                                                 "L’insieme di tutte le stringhe che contengono esattamente un a e un b"}, 
                                                0));
            
            chapterTwo.push_back(Question("Cosa indica l’operatore ∅ in un’espressione regolare?", 
                                                {"Il linguaggio vuoto", 
                                                 "La stringa vuota", 
                                                 "Il linguaggio che contiene solo ε", 
                                                 "Il linguaggio che contiene solo simboli distinti da a e b"}, 
                                                0));
            
            chapterTwo.push_back(Question("Cosa rappresenta l’espressione regolare (a + b)∗a?", 
                                                {"L’insieme di tutte le stringhe che contengono una sequenza di a e b e terminano con a", 
                                                 "L’insieme di tutte le stringhe che contengono una sequenza di a e b e terminano con b", 
                                                 "L’insieme di tutte le stringhe che contengono solo a e b", 
                                                 "L’insieme di tutte le stringhe che terminano con b"}, 
                                                0));
            
            chapterTwo.push_back(Question("Qual è la principale caratteristica di un linguaggio regolare?", 
                                                {"Può essere descritto da un’espressione regolare", 
                                                 "È sempre rappresentabile da una grammatica context-free", 
                                                 "È sempre riconoscibile da una macchina di Turing", 
                                                 "È sempre infinito"}, 
                                                0));
            
            chapterTwo.push_back(Question("Come si rappresenta la stringa vuota in un’espressione regolare?", 
                                                {"∅", 
                                                 "ε", 
                                                 "a∗", 
                                                 "a+"}, 
                                                0));
            
            chapterTwo.push_back(Question("Qual è la cardinalità di un linguaggio regolare su un alfabeto Σ?", 
                                                {"2ℵ0", 
                                                 "ℵ0", 
                                                 "Finita", 
                                                 "Dipende dalla lunghezza delle stringhe"}, 
                                                0));
            
            chapterTwo.push_back(Question("In un’espressione regolare, quale simbolo rappresenta la chiusura di un linguaggio?", 
                                                {"∗", 
                                                 "+", 
                                                 ".", 
                                                 "/"}, 
                                                0));
            
            chapterTwo.push_back(Question("Come si descrive un linguaggio che può generare qualsiasi combinazione di a e b con lunghezza arbitraria?", 
                                                {"(a + b)∗", 
                                                 "(a · b)∗", 
                                                 "(a + b)+", 
                                                 "a∗b∗"}, 
                                                0));
            
            chapterTwo.push_back(Question("Qual è la definizione di un linguaggio regolare?", 
                                                {"Un linguaggio che può essere descritto da un’automa a stati finiti", 
                                                 "Un linguaggio che può essere descritto da una grammatica context-free", 
                                                 "Un linguaggio che può essere descritto da una grammatica sensibile al contesto", 
                                                 "Un linguaggio che può essere descritto da una macchina di Turing"}, 
                                                0));
            

        }

vector<Question> QuestionManager::getQuestions(int difficulty) const {
    if (difficulty == 1) return chapterOne;
    if (difficulty == 2) return chapterTwo;
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