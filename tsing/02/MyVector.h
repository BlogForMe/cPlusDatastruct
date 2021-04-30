//
// Created by mc on 21-4-29.
//

#ifndef DATASTRUCT_MYVECTOR_H
#define DATASTRUCT_MYVECTOR_H

#include <zconf.h>
#include <iostream>

using namespace std;
typedef int Rank; //秩
#define DEFAULT_CAPACITY  3 //默认的初始容量（实际应用中可设置为更大）

template<typename T>
class MyVector { //向量模板类
protected:
    Rank _size;
    int _capacity;
    T *_elem;


    void copyFrom(T const *A, Rank lo, Rank hi) {
        _elem = new T[(_capacity = 2 * (hi - lo))];
        for (_size = 0; lo < hi; _size++, lo++) { //复制至_elem[0, hi - lo)
            _elem[_size] = A[lo];
//            cout<<"_size "<<_size << " lo "<< lo<< " A[lo] "<<A[lo] << " _elem[_size] "<<_elem[_size]<<endl;
        }
    }   //用const修饰，保证A中的元素不致被篡改；运行时间 = O(hi-lo)

public:
    //构造函数
    MyVector(int c = DEFAULT_CAPACITY, int s = 0, T v = 0) { //容量为c、规模为s、所有元素初始为v
        _elem = new T(_capacity = c);
        for (int _size = 0; _size < s; _elem[_size++] = v);
    }

    MyVector(T const *A, Rank n) {    //数组整体复制
        copyFrom(A, 0, n);
    }


    MyVector(T const *A, Rank lo, Rank hi) { //区间
        copyFrom(A, lo, hi);
    }

    MyVector(MyVector<T> const &V) { copyFrom(V._elem, 0, V._size); } //向量整体复制

    MyVector(MyVector<T> const &V, Rank lo, Rank hi) {
        copyFrom(V._elem, lo, hi);
    };

    ~MyVector() {
        delete[]_elem;
    }


    void traverse(void (*visit)(T &)) {
        for (int i = 0; i < _size; ++i) {
            visit(_elem[i]);
        }
    }

    template<typename VST>
    //元素类型、操作器
    void traverse(VST &visit) { //借助函数对象机制
        for (int i = 0; i < _size; ++i) {
            visit(_elem[i]);
        }
    }

    //遍历
    void report(string title) {
        cout << "Vector(" << title << "): ";
        for (int i = 0; i < _size; i++)
            cout << _elem[i] << ", ";
        cout << endl;
    }


    void expand() {
        if (_size < _capacity)return; //尚未满员时，不必扩容
        _capacity = max(_capacity, DEFAULT_CAPACITY); //不低于最小容量
        T *oldElem = _elem;
        _elem = new T[_capacity <<= 1];
        for (int i = 0; i < _size; ++i) { //复制原向量内容
            _elem[i] = oldElem[i];// T为基本类型，或已重载赋值操作符
        }

        cout << "expand()" << endl;
    }

//将 e 作为秩为 r 的元素插入
    Rank insert(Rank r, T const &e) {
        //assert: 0 <= r <= size
        expand(); //若有必要， 扩容
        for (int i = _size; i > r; i--)
            _elem[i] = _elem[i - 1]; //自后向前， 后继元素顺序后移一个单元

        _elem[r] = e;
        _size++;
        return r;
    }


    Rank insert(T const &e) { //默认作为末元素插入
        return insert(_size, e);
    }


    T &operator[](Rank r) const {
        return _elem[r];
    }


    //区间删除
    int remove(Rank lo, Rank hi) { // o(n-hi)
        if (lo == hi)return 0; // 出于效率考虑，单独处理退化清空
        while (hi < _size) _elem[lo++] = _elem[hi++]; //[hi,_size)顺次迁移hi-lo位
        _size = lo;
//                shrink()  更新规模，若有必要则缩容
        return hi - lo; //返回被删除元素的数目
    }

    int remove(Rank r) {
        T e = _elem[r];      //备份被删除元素
        remove(r, r + 1);   //调用区间删除算法，等效于对区间[r, r + 1)的删除
        return e;
    }


    int find(const T &e, Rank lo, Rank hi) {
        while ((lo < hi--) && (e != _elem[hi]));
        return hi;

    }


    int findEquals(const T &e, Rank lo, Rank hi) {
        while (lo < hi--) {
            if (e == _elem[hi]) {
                return hi;
            }
        }
    }

    //删除重复元素，返回被删除元素的数目
    int deduplicate() {
        int oldSize = _size;//记录原规模
        Rank i = 1;  // 从 _elem[1]开始
        while (i < _size) //自前向后注意考察个元素 _elem[i]
            (find(_elem[i], 0, i) < 0) ? //前缀中寻找雷同者
            i++ // 若无雷同则继续考察后继
                                       : remove(i); // 否则删除雷同者

        return oldSize - _size; //向量规模变化量，即删除元素总数
    }


    int disOrdered() const {
#if 0
        int n =0;
        Rank i = 0;
        while (i < _size - 1) {
            if (_elem[i] > _elem[i + 1]) {
                n++;
            }
            i++;
        }
        return n;

#endif
        int n = 0;
        for (int i = 0; i < _size; ++i) {
            n += (_elem[i - 1] > _elem[i]);
        }
        return n;
    }


    int uniquify() {
#if 0
        int oldSize = _size;
        int i = 0;
        while (i<_size-1){
            _elem[i] == _elem[i+1] ?remove(i+1): i++;
        }
        return  oldSize- _size; //向量规模变化量，即删除元素总数
#endif
        Rank i = 0, j = 0;
        while (++j < _size) {
            if (_elem[i] != _elem[j]) {
                _elem[i++] = _elem[j];
                cout << "i " << i << " j " << j << endl;
            }
        }
        _size = ++i;

        return j - i;
    }

    static Rank binSearch(T *S, T const &e, Rank lo, Rank hi) {
#if 0 //递归思想
        while (lo<hi){
            Rank mid = (hi + lo) / 2;
            cout<<" Rank binSearch "<<endl;
            if(A[mid]==e){
                return  mid;
            } else if(e<A[mid]){
                return binSearch(A,e,lo,mid);
            } else if (e>A[mid]){
                return  binSearch(A,e,mid+1,hi);
            }
        }
        return -1;
#endif

#if 1
        while (lo < hi) {
            Rank mid = (hi +lo) >> 1;
//            cout << " Rank binSearch " <<mid <<  endl;
            if (e < S[mid]) {
                hi = mid;
            } else if (e > S[mid]) {
                lo = (mid + 1);
            } else {
                return mid;
            }
        }
        return lo-1;

#endif

#if 0
        while (1 < hi - lo) { //每步迭代仅需做一次比较判断，有两个分支；成功查找不能提前终止
            Rank mi = (lo + hi) >> 1; //以中点为轴点（区间宽度的折半，等效于宽度之数值表示的右移）
                        cout << " Rank binSearch " <<mi <<  endl;
            (e < S[mi]) ? hi = mi : lo = mi; //经比较后确定深入[lo, mi)或[mi, hi)
        } //出口时hi = lo + 1，查找区间仅含一个元素A[lo]
        return e < S[lo] ? lo - 1 : lo; //返回位置，总

#endif

    }


    Rank bin2Search(T *S, T const &e, Rank lo, Rank hi) {
        while (lo < hi) { //每步迭代仅需做一次比较判断，有两个分支

            Rank mi = (lo + hi) >> 1; //以中点为轴点（区间宽度的折半，等效于宽度之数值表示的右移）
            cout << " Rank binSearch " <<mi <<  endl;
            (e < S[mi]) ? hi = mi : lo = mi + 1; //经比较后确定深入[lo, mi)或(mi, hi)
        } //成功查找不能提前终止
        return lo - 1; //循环结束时，lo为大于e的元素的最小秩，故lo - 1即不大于e的元素的最大秩
    }


    void test() {
        int n;
        while (n++) {
            if (n == 100) {
                cout << "退出" << endl;
                return;
            }
        }
    }

};


#endif //DATASTRUCT_MYVECTOR_H