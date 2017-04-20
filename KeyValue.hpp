//
// Created by Matthew Kidd on 4/3/17.
//

#ifndef HW6_GENERICS_KEYVALUE_HPP
#define HW6_GENERICS_KEYVALUE_HPP
#include <string>
#include <vector>
#include <iostream>
template <typename T> class KeyValue;
template <typename T> std::ostream& operator<<(std::ostream& os, const KeyValue<T>& x);

template <typename K, typename W>
class KeyValue {
public:
    KeyValue(T, std::string);
    std::string getKeyValue() const { return m_keyValue; }
    std::string getWordByIndex(int n) const;
    int getCount() const;
    void addWord(const std::string&);
    friend std::ostream& operator<< <T> (std::ostream&, const KeyValue<T>&);

private:
    T m_keyValue;
    std::vector<T> m_words;
};

template <typename T>
KeyValue<T>::KeyValue(T t, std::string word) :
m_keyValue(t)
{
    m_words.push_back(word);
};

template <typename T>
std::string KeyValue<T>::getWordByIndex(int n) const {
    return m_words.at(n);
};

template <typename T>
void KeyValue<T>::addWord(const std::string& x) {
    m_words.push_back(x);
};

template <typename T>
int KeyValue<T>::getCount() const {
    return m_words.size();
};

template <typename T>
std::ostream& operator<<(std::ostream& os, const KeyValue<T> & x) {
    for(auto i = 0; i < x.m_words.size(); i++) {
        os << x.m_keyValue + ", ";
        os << x.m_words[i];
    }
    return os;
};



#endif //HW6_GENERICS_KEYVALUE_HPP
