class Solution {
public:
    string pushDominoes(string dominoes) {
        string temp = 'L'+dominoes+'R';
        string res="";
        int i,j;int cnt;
        for(j=1,i=0;j<temp.size();j++){
            if(temp[j]=='.') continue;
            else{
                if(temp[i]=='L'&&temp[j]=='L'){ cnt = 0;while(cnt<j-i)  {res+='L';cnt++;}}
                if(temp[i]=='L'&&temp[j]=='R'){ res+='L';cnt = 0;while(cnt<j-i-1)  {res+='.';cnt++;}}
                if(temp[i]=='R'&&temp[j]=='L'){ res+='R';if((i-j)%2!=0){cnt = 0;while(cnt<(j-i-1)/2)  {res+='R';cnt++;}cnt = 0;while(cnt<(j-i-1)/2)  {res+='L';cnt++;}}else {cnt = 0;while(cnt<(j-i)/2-1)  {res+='R';cnt++;}res+='.';cnt = 0;while(cnt<(j-i)/2-1)  {res+='L';cnt++;}}}
                if(temp[i]=='R'&&temp[j]=='R'){ cnt = 0;while(cnt<j-i)  {res+='R';cnt++;}}
                i=j;
            }
        }
        res.erase(res.begin());
        return res;
    }
};