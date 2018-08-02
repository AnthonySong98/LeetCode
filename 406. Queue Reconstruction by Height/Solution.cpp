class Solution {
public:
    vector<pair<int, int>> reconstructQueue(vector<pair<int, int>>& people) {
        sort(people.begin(),people.end(),[](pair<int, int> a, pair<int, int> b){return (a.first>b.first)||(a.first==b.first&&a.second<b.second);});pair<int,int>temp;
        for(int i=0;i<people.size();i++){
            if(people[i].second==i) continue;
            else{
                temp=people[i];int j=i-1;
                while(j>=temp.second){
                    people[j+1]=people[j];
                    j--;
                }
                people[j+1]=temp;
            }
           
        
        }
        return people;
    }
};


class Solution {
public:
    
    vector<pair<int, int>> reconstructQueue(vector<pair<int, int>>& people) {
        sort(people.begin(), people.end(), comparator);
        vector<pair<int, int>> res;
        for(int i=0; i<people.size(); ++i)
        {
            res.insert(res.begin() + people[i].second, people[i]);
        }
        return res;
    }
    
    static bool comparator(pair<int, int> p1, pair<int, int> p2)
    {
        if(p1.first>p2.first)
        {
            return true;
        }
        else if(p1.first==p2.first)
        {
            return p1.second < p2.second;
        }
        return false;
    }
};