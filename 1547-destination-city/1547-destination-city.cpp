class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        
        set<string> start_city;
        set<string> final_city;

        for(auto it:paths)
        {
            start_city.insert(it[0]);
            final_city.insert(it[1]);
        }

        for(auto it:final_city)
        {
            if(start_city.find(it)==start_city.end())
            {
                return it;
            }
        }

        return paths[1][-1];
    }
};