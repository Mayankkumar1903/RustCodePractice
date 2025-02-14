class ProductOfNumbers {
public:
    vector<int>res;
    ProductOfNumbers() {
        
    }
    
    void add(int num) {
        res.push_back(num);
    }
    
    int getProduct(int k) {
        int temp = k;
        int prod = 1;
        for(int i=res.size()-1;i>=0 && temp;i--){
            prod *= res[i];
            temp--;
        }
        return prod;
    }
};

/**
 * Your ProductOfNumbers object will be instantiated and called as such:
 * ProductOfNumbers* obj = new ProductOfNumbers();
 * obj->add(num);
 * int param_2 = obj->getProduct(k);
 */