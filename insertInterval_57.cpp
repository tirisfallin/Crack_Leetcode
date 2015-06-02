  struct Interval {
      int start;
      int end;
      Interval() : start(0), end(0) {}
      Interval(int s, int e) : start(s), end(e) {}
  };
 
class Solution {
public:
    vector<Interval> insert(vector<Interval>& intervals, Interval newInterval) {
        vector<Interval> intervallist;
        if(intervals.empty())
        {
            intervallist.push_back(newInterval);
            return  intervallist;
        }
        vector<pair<int,bool>> order;
        vector<Interval>::iterator low=intervals.begin(),high=intervals.end()-1,points;
        while(low!=intervals.end()&&newInterval.start>low->start){
            low++;
        }
            low--;// the start of low is less then the start of newInterval
        while(high>=intervals.begin()&&newInterval.end<high->end){
            high--;
        }
            high++; // the end of high is more then the end of newInterval
        
        if(low>=intervals.begin()&&(newInterval.start>=low->start&&newInterval.start<=low->end))
            newInterval.start=low->start;
        else
            low++;
        if(high<intervals.end()&&(newInterval.end>=high->start&&newInterval.end<=high->end))
            newInterval.end=high->end;
        else
            high--;
        if(high>=low)
        {intervals.erase(low,high);
        *low=newInterval;
        }
        else{
            intervals.insert(low,newInterval);
        }

      return intervals;
 
        
        
    }
};
