#include <iostream>
#include <vector>
#include <algorithm>
#include "sorted.h"
SortedArray::SortedArray(){
	numbers_={};
}
SortedArray::~SortedArray(){
}

void SortedArray::AddNumber(int num){
	numbers_.push_back(num);}

std::vector<int> SortedArray::GetSortedAscending(){
	sort(numbers_.begin(), numbers_.end());
	return numbers_;}
bool desc(int a, int b){
	return a>b; }
std::vector<int> SortedArray::GetSortedDescending(){
	sort (numbers_.begin(), numbers_.end(), desc); 
	return numbers_;}
int SortedArray::GetMax(){
	int max= *max_element(numbers_.begin(), numbers_.end());
	return max; }
int SortedArray::GetMin(){
	int min= *min_element(numbers_.begin(), numbers_.end());
 	return min; }
