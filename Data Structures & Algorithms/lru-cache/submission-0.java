class LRUCache {
    int capacity = 0;
    LinkedHashMap<Integer, Integer>mp;
    public LRUCache(int capacity) {
        this.capacity = capacity;
        mp = new  LinkedHashMap<>(capacity,0.75f,true);
    }
    
    public int get(int key) {
        if(!mp.containsKey(key)) {
            return  -1;
        }
        return mp.get(key);
    }
    
    public void put(int key, int value) {  
        mp.put(key, value);
        if(mp.size() > capacity) {
            int firstKey = mp.keySet().iterator().next();
            mp.remove(firstKey);
        }
    }
}