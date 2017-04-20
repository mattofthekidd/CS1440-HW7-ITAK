//
// Created by Matthew Kidd on 4/3/17.
//

#ifndef HW6_GENERICS_DICTIONARY_HPP
#define HW6_GENERICS_DICTIONARY_HPP
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <sstream>
#include "KeyValue.hpp"

template <typename K, typename W>
class Dictionary {
public:
    Dictionary();
    Dictionary(int n);
    void add(K keyValue, W word);
    int getCount() const;
    void printDict() const;
    void removeByIndex(int n);
    void removeByKey(const K& k);
    std::string getByIndex(int n) const;
    std::string getByKey(const K&) const;
    int getCapacity() const { return m_list.capacity(); }

private:
    int m_count = 0;
    std::vector<KeyValue<K>> m_list;
    bool isEqual(const K& lhs, const K& rhs) const;

    void determineSize();
};

template <typename K, typename W>
Dictionary<K, W>::Dictionary() {
    m_list.reserve(10);
};

template <typename K, typename W>
Dictionary<K, W>::Dictionary(int n) {
    m_list.reserve(n);
};

template<typename K, typename W>
void Dictionary<K, W>::add(K keyValue, W word) {
    bool unique = true;
    if (m_list.capacity() <= m_list.size()) {
        m_list.reserve(m_list.capacity()*2);
    }
    int pos = 0;
    if(m_list.size() > 0) {
        for (auto i = 0; i < m_list.size() - 1; i++) {
            if (m_list[i].getKeyValue() == keyValue) {
                unique = false;
                pos = i;
            }

        }
        if (unique) {
            KeyValue<K> temp(keyValue, word);
            m_list.push_back(temp);
        } else {
            m_list[pos].addWord(word);
        }
    }
    else {
        KeyValue<K> temp(keyValue, word);
        m_list.push_back(temp);
    }
    determineSize();
};

template<typename K, typename W>
void Dictionary<K, W>::printDict() const {
    for(auto i = 0; i < m_list.size(); i++) {
        std::cout << i+1 << ". " << m_list[i] << std::endl;
    }
};

template<typename K, typename W>
void Dictionary<K, W>::removeByIndex(int n) {
    if(m_list.size() >= n && n >= 0) {
        m_list.erase(m_list.begin()+(n));
        determineSize();
    }
};

//remove
template<typename K, typename W>
void Dictionary<K, W>::removeByKey(const K &k) {
    for(auto i = 0; i < m_list.size(); i++) {
        if(isEqual(m_list[i].getKeyValue(), k)) {
            removeByIndex(i);
            break;
        }
    }
};


//returns total keyValues
template<typename K, typename W>
int Dictionary<K, W>::getCount() const {
    return m_count;
};

template<typename K, typename W>
std::string Dictionary<K, W>::getByKey(const K& k) const {
    std::ostringstream os;
    bool found = false;
    for(auto i = 0; i < m_list.size(); i++) {
        if(isEqual(m_list[i].getKeyValue(), k)) {
            for(auto j = 0; j < m_list[i].getCount(); j++) {
                os << m_list[i].getWordByIndex(j);
                found = true;
            }
        }
    }
    if(!found) {
        os << "not_found";
    }
    return os.str();
};

template<typename K, typename W>
std::string Dictionary<K, W>::getByIndex(int n) const {
    std::string temp = m_list[n].getKeyValue();
    return temp + ", " + getByKey(temp);
};

template<typename K, typename W>
bool Dictionary<K, W>::isEqual(const K& lhs, const K& rhs)const {
    std::string tempLeft = lhs, tempRight = rhs;
    std::transform(tempLeft.begin(), tempLeft.end(), tempLeft.begin(), ::tolower);
    std::transform(tempRight.begin(), tempRight.end(), tempRight.begin(), ::tolower);
    return (tempLeft == tempRight);
};

template<typename K, typename W>
void Dictionary<K, W>::determineSize() {
    int temp = m_list.size();
    for(auto i = 0; i < m_list.size(); i++) {
        if(m_list.at(i).getCount() != 1) {
            temp += m_list.at(i).getCount() - 1;
        }
    }
    m_count = temp;
};


#endif //HW6_GENERICS_DICTIONARY_HPP
