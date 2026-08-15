class TimeMap {
public:
    struct data
    {
        string felling;
        int timestamp;
    };
    unordered_map<string,vector<data>> mp;
    TimeMap() {
    }

    void set(string key, string value, int timestamp) {
        mp[key].push_back({value,timestamp});
    }

    string get(string key, int timestamp) {
            int left = 0;
            int right = mp[key].size()-1;
            int mid;
            int candidate=-1;
          while (left <= right)
            {

                mid = left + (right - left)/2   ;
                if(timestamp == mp[key][mid].timestamp)
                {
                    return mp[key][mid].felling;
                }
                else if(timestamp > mp[key][mid].timestamp)
                {
                    candidate=mid;
                    left = mid + 1;

                }
                else
                {
                    right = mid - 1;

                }

            }
          if(candidate != -1)
          {
              return mp[key][candidate].felling;
          }
            return "";
        }
    };