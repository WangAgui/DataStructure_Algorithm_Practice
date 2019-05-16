#ifndef HASH_H_
#define HASH_H_
#include<vector>
//设计一个哈希集合 
class MyHashSet {
 
    int *arr=null;
    /** Initialize your data structure here. */
    public MyHashSet() {
 
        arr=new int[100001];
        memset(arr,-1,100001); 
 
    }
 
    public void add(int key) {
 
        arr[key]=key;
    }
 
    public void remove(int key) {
 
        arr[key]=-1;
    }
 
    /** Returns true if this set contains the specified element */
    public boolean contains(int key) {
 
        if (arr[key]!=key)
            return false;
        return true;
 
    }
}
 

#endif
