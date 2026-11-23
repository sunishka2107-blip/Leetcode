class ProductOfNumbers {
public:
    vector<int> v;
    ProductOfNumbers() {
        v.clear();
    }
    
    void add(int num) {
       v.push_back(num); 
    }
    
    int getProduct(int k) {
        int n = v.size();
        if(k==0 || k>n){
            return 1 ; 
        }
        int p = 1 ; 
        for(int i=n-1 ; i>=n-k ; i--){
            p = p*v[i];
        }
        return p;
    }
};

/**
 * Your ProductOfNumbers object will be instantiated and called as such:
 * ProductOfNumbers* obj = new ProductOfNumbers();
 * obj->add(num);
 * int param_2 = obj->getProduct(k);
 */