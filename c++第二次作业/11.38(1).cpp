// Copyright [2019] <Copyright fanghao>
#include <iostream>
#include <string>
#include <map>
#include <tr1/unordered_map>  
using namespace std;

int main() {
	tr1::unordered_map<string, size_t> word_count; //string到size_t的空map 
    string word;
    while(cin >> word)
        ++word_count[word];        //提取word的计数器并将其加1 
    for(const auto &w : word_count)
    	cout << w.first << " occurs " << w.second << ((w.second > 1) ? " times" : " time") << endl;
    return 0;
} 

