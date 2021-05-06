//
// Created by mc on 21-5-6.
//

#ifndef DATASTRUCT_COMPARATOR_H
#define DATASTRUCT_COMPARATOR_H

template <typename T> static bool lt ( T* a, T* b ) { return lt ( *a, *b ); } //less than
template <typename T> static bool lt ( T& a, T& b ) { return a < b; } //less than
template <typename T> static bool eq ( T* a, T* b ) { return eq ( *a, *b ); } //equal
template <typename T> static bool eq ( T& a, T& b ) { return a == b; } //equal

#endif //DATASTRUCT_COMPARATOR_H
