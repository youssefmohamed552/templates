#include "my_set.h"


/*
 * bin_search_simple_set
 */


template<typename T, typename C>
bin_search_simple_set<T, C>::
bin_search_simple_set(int max)
  : m_max(max) {}


template<typename T, typename C>
simple_set<T, C>&
bin_search_simple_set<T, C>::
operator+=(const T item){
  //TODO add an element to the set
  return *this;
}



template<typename T, typename C>
simple_set<T, C>&
bin_search_simple_set<T, C>::
operator-=(const T item){
  //TODO remove an element from a set
  return *this;
}



template<typename T, typename C>
bool
bin_search_simple_set<T, C>::
contains(const T& item)const{
  //TODO does the set contain an element
  return false;
}
