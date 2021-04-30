//
// Created by mc on 21-4-29.
//




//template<typename T>
//void MyVector<T>::copyFrom(T const *A, Rank lo, Rank hi) {
//    _elem = new T(_capacity = 2 * (hi - lo));
//    for (int _size = 0; lo < hi; ++_size, lo++) { //复制至_elem[0, hi - lo)
//        _elem[_size] = A[0];
//    }
//}   //用const修饰，保证A中的元素不致被篡改；运行时间 = O(hi-lo)

//template<typename T>
//void MyVector<T>::traverse(void (*visit)(T &)) {
//    for (int i = 0; i < _size; ++i) {
//        visit(_elem[i]);
//    }
//}
//
//template<typename T>
//template<typename VST> //元素类型、操作器
//void MyVector<T>::traverse(VST &visit) { //借助函数对象机制
//    for (int i = 0; i < _size; ++i) {
//        visit(_elem[i]);
//    }
//}