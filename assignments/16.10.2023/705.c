class MyHashSet {
    vector<int> v;
    int k;
public:
    MyHashSet() {
      k=0;  
    }
    
    void add(int key) {
        for (k =0;k< v.size();k++){
            if(v[k] == key){
                break;
            }
        }
        if (k== v.size()){
            v.push_back(key);
        }
        else{
            return;
        }
    }
    
    void remove(int key) {
        for (k=0;k<v.size();k++){
            if(v[k]==key){
                break;
            }
        }
        if (k==v.size()){
            return;
        }
        else{
            v.erase(v.begin() + k);
        }
    }
    
    bool contains(int key) {
        for (k=0;k<v.size();k++){
            if(v[k]==key){
                break;
            }
        }
        if (k==v.size()){
            return false;
        }
        else{
            return true;
        }
    }
};