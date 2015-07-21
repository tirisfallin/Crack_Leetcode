class Solution {
public:
    int maxPoints(vector<Point>& points) {
        if(points.size()<2)
            return points.size();
        int samepoint=0;
        int ret=0;
        double slope;
        vector<int> v_temp;
        unordered_map<double, int> groups;
        vector<int> nums;
        for(int i1=0;i1<points.size();i1++){
            samepoint=0;
            groups.clear();
            for(int i2=i1+1;i2<points.size();i2++){
                if(points[i1].x==points[i2].x&&points[i1].y==points[i2].y)
                    samepoint++;
                else if(points[i1].x==points[i2].x)
                    groups[INT_MAX]++;
                else{
                    slope=1.0*(points[i1].y-points[i2].y)/(points[i1].x-points[i2].x);
                    groups[slope]++;
                }
        }
            ret=ret>samepoint?ret:samepoint;
            for(auto it:groups)
                ret=ret>(it.second+samepoint)?ret:it.second+samepoint;
    }
        return ret+1;
    }
};
