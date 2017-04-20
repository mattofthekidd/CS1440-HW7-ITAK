//
// Created by Matthew Kidd on 4/3/17.
//

#ifndef HW6_GENERICS_KEYVALUE_HPP
#define HW6_GENERICS_KEYVALUE_HPP
#include <string>
#include <vector>
#include <iostream>
template <typename K, typename W> class KeyValue;
template <typename K, typename W> std::ostream& operator<<(std::ostream& os, const KeyValue<K, W>& x);

template <typename K, typename W>
class KeyValue {
public:
    KeyValue(K, W);
    K getKeyValue() const { return m_keyValue; }
    W getWordByIndex(int n) const;
    int getCount() const;
    void addWord(const W&);
    friend std::ostream& operator<< <K, W> (std::ostream&, const KeyValue<K, W>&);

private:
    K m_keyValue;
    std::vector<W> m_words;
};

template <typename K, typename W>
KeyValue<K, W>::KeyValue(K k, W word) :
m_keyValue(k)
{
    m_words.push_back(word);
};

template <typename K, typename W>
W KeyValue<K, W>::getWordByIndex(int n) const {
    return m_words.at(n);
};

template <typename K, typename W>
void KeyValue<K, W>::addWord(const W& w) {
    m_words.push_back(w);
};

template <typename K, typename W>
int KeyValue<K, W>::getCount() const {
    return m_words.size();
};

template <typename K, typename W>
std::ostream& operator<<(std::ostream& os, const KeyValue<K, W> & x) {
    for(auto i = 0; i < x.m_words.size(); i++) {
        os << x.m_keyValue + ", ";
        os << x.m_words[i];
    }
    return os;
};



#endif //HW6_GENERICS_KEYVALUE_HPP
