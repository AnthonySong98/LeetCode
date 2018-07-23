typedef struct mytest{
    string word;
    int count;
    mytest(){}
    mytest(string _word,int _count):word(_word),count(_count){}
    
    bool operator < (const mytest &b) const {return count < b.count;}
    bool operator > (const mytest &b) const {return count > b.count;}
    bool operator == (const mytest &b) const {return count == b.count;}
    bool operator <= (const mytest &b) const {return count <= b.count;}
    bool operator >= (const mytest &b) const {return count >= b.count;}
    
    
    
} mytest;

bool CompareMytest(const mytest &a,const mytest &b){
    return a.count <b.count;
}


struct myclass {
  bool operator() (string i,string j) { return (i<j);}
} myobject;


class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        vector<string> f;int i,j;
        if(words.size()==0) return f;
        map<string,int> mapFrequent;
        map<string,int>::iterator iter;
        for(i=0;i<words.size();i++){
            iter=mapFrequent.find(words[i]);
            if(iter==mapFrequent.end()) mapFrequent.insert(pair<string ,int>(words[i],1));
            else iter->second++;
        }
        vector<mytest> res;
        
        for(iter=mapFrequent.begin();iter!=mapFrequent.end();iter++){
            cout<<iter->first<<iter->second<<endl;
            res.push_back(mytest(iter->first,iter->second));
            
        }
        cout<<res.size();
        
        make_heap(res.begin(),res.end(),CompareMytest);
        sort_heap(res.begin(),res.end());
        
        vector<mytest>::iterator iter2;
        vector<string> result;
        
        int tag=res.back().count;
        j=0;i=0;
        while(result.size()<k)
        {
            while(res.back().count==tag&&!res.empty())
            {
                tag=res.back().count;
                result.push_back(res.back().word);i++;
                res.pop_back();
            }
            sort(result.begin()+j,result.begin()+i);
            j=i;
            tag=res.back().count;
             
        }
        
        cout<< result[0];

        //  sort (result.begin(), result.end()); 
        
        vector<string> final_result;
        for(int j=0;j<k;j++){
            final_result.push_back(result[j]);
        }
        
        return final_result;
        
        
        
    }
};