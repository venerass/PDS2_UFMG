#include "WordCounter.hpp"
#include "Word.hpp"

using namespace std;

WordCounter::WordCounter(int num_words) {
    words.reserve(num_words);
}

void WordCounter::addWord(string w){
    for(int i = 0; i <= size; i++){
        if(w == this->words[i].word){
            this->words[i].incrementFreq();
            return;
        }
    }
    this->words[this->size].word = w;
    this->words[this->size].incrementFreq();
    this->size++;
}

void WordCounter::print() const{
   
    vector<string> palavras; 
    
    for(int i = 0; i < size; i++){
        palavras.push_back(words[i].word);
    }

    sort(palavras.begin(),palavras.end());
    
    for(int i=0;i < this->size;i++){
        for(int j = 0; j < this->size; j++){
            if(palavras[i]==this->words[j].word){
                cout << this->words[j].word << " " << words[j].count << endl;
            }
        }
    }


}