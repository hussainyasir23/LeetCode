class LRUCache{
public:
    int capacity;
    unordered_map<int, int> um;
    list<int> l;

    LRUCache(int capacity){
        this->capacity = capacity;
    }

    int get(int key){
        if (um.find(key) != um.end())
        {
            auto it = um.find(key);
            int ans = it->second;
            l.remove(key);
            l.push_front(key);
            return ans;
        }
        else
            return -1;
    }

    void put(int key, int value){
        if (um.find(key) != um.end())
        {
            um[key] = value;
            l.remove(key);
        }
        else
            um[key] = value;
        l.push_front(key);
        if (l.size() > capacity)
        {
            um.erase(l.back());
            l.pop_back();
        }
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */
