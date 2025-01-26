class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        
        // set<string> start_city;
        // set<string> final_city;

        // for(auto it:paths)
        // {
        //     start_city.insert(it[0]);
        //     final_city.insert(it[1]);
        // }

        // for(auto it:final_city)
        // {
        //     if(start_city.find(it)==start_city.end())
        //     {
        //         return it;
        //     }
        // }

        // unordered_set<string> start_city;
        // //set<string> final_city;

        // for(auto it:paths)
        // {
        //     start_city.insert(it[0]);
        //     //final_city.insert(it[1]);
        // }

        // for(auto it:paths)
        // {
        //     if(start_city.find(it[1])==start_city.end())
        //     {
        //         return it[1];
        //     }
        // }

        unordered_set<string> start_city;
        for(auto it:paths)
        {
            start_city.insert(it[0]);
        }

        for(auto it:paths)
        {
            if(!start_city.count(it[1]))
            {
                return it[1];
            }
        }

        return paths[1][-1];
    }
};