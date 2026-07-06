class Solution {
public:
 int carFleet(int target, vector<int>& position, vector<int>& speed) {
    vector<double> time;
    map<int,int> m;
    stack <float>fleet;
    for (int i = 0; i < position.size(); ++i) {
        m.insert({position[i],speed[i]});
    }
    for (auto it = m.rbegin(); it != m.rend(); ++it) {
        time.push_back((double)(target-it->first)/it->second);
    }
    for(auto t : time)
    {
        if(fleet.empty())
        {
            fleet.push(t);
        }
        else
        {
            if(fleet.top()<t)
            {
                fleet.push(t);
            }
        }
    }
    return fleet.size();
}
};
