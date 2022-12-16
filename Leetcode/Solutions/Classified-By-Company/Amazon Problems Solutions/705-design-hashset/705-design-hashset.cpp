class MyHashSet {
public:
    int hashArray[1000001];
    MyHashSet() {
        
    }
    
    void add(int key) {
        hashArray[key] = 1;
    }
    
    void remove(int key) {
        hashArray[key] = 0;
    }
    
    bool contains(int key) {
        return hashArray[key] == 1;
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */