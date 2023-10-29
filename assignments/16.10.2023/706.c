class MyHashMap {
    vector<pair<int,int>> v;
    int k;
public:
    MyHashMap() {
        k=0;
    }
    
    void put(int key, int value) {
        for (k=0;k<v.size();k++){
            pair<int,int> p=v[k];
            if(p.first==key){
                break;
            }
        }
        if(k==v.size()){
            pair<int,int> p=make_pair(key,value);
            v.push_back(p);
        }
        else{
            v[k].second=value;
        }
    }
    
    int get(int key) {
        for (k=0;k<v.size();k++){
            pair<int,int> p=v[k];
            if(p.first==key){
                break;
            }
        }

        if(k==v.size()){
            return -1;
        }
        else{
            return v[k].second;
        }
    }
    
    void remove(int key) {
        for (k= 0; k < v.size(); k++){
            pair<int,int> p=v[k];
            if(p.first==key){
                break;
            }
        }

        if(k==v.size()){
            return;
        }
        else{
            v.erase(v.begin() + k);
        }
    }
};