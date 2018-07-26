class Solution {
public:
    vector<int> ConstructVector(vector<int>& p1, vector<int>& p2){
        vector<int> a1(2,0);
        a1[0]=(p2[0]-p1[0]);
        a1[1]=(p2[1]-p1[1]);
        return a1;
    }
    
    bool IsModEqual(vector<int>& p1, vector<int>& p2){
        if(p1[0]*p1[0]+p1[1]*p1[1]==p2[0]*p2[0]+p2[1]*p2[1]) return true;
        else return false;
    }
    
    bool IsVertical(vector<int>& p1, vector<int>& p2){
        if(p1[0]*p2[0]+p1[1]*p2[1]==0) return true;
        else return false;
    }
    
    bool validSquare(vector<int>& p1, vector<int>& p2, vector<int>& p3, vector<int>& p4) {
        
        vector<int> a1=ConstructVector(p1,p2);
        vector<int> a2=ConstructVector(p1,p3);
        vector<int> a3=ConstructVector(p1,p4);
        if(IsVertical(a1,a2)&&IsVertical(a1,a3)&&IsVertical(a2,a3)) return false;
        if(IsVertical(a1,a2)&&IsModEqual(a1,a2)){
           vector<int> a4= ConstructVector(p4,p3);
           vector<int> a5= ConstructVector(p3,p1); 
            if(IsVertical(a4,a5)&&IsModEqual(a4,a5)) return true;
            else {cout<<"1";return false;}
        }
        else if(IsVertical(a1,a3)&&IsModEqual(a1,a3)){
           vector<int> a4= ConstructVector(p4,p3);
           vector<int> a5= ConstructVector(p4,p1);  
            if(IsVertical(a4,a5)&&IsModEqual(a4,a5)) return true;
            else {cout<<"2";return false;}
        }
        else if(IsVertical(a2,a3)&&IsModEqual(a2,a3)){
            vector<int> a4= ConstructVector(p2,p3);
           vector<int> a5= ConstructVector(p3,p1);  
            if(IsVertical(a4,a5)&&IsModEqual(a4,a5)) return true;
            else {cout<<"2";return false;}
        }
        else {cout<<a1[0]<<a1[1];return false;}
        
    }
};