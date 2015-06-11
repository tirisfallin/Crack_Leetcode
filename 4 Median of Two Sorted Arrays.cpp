class Solution {
public:
    int findmkth(vector<int> a,int aL,int aR,vector<int> b,int bL,int bR,int k){
        if(aL>aR) return b[bL+k-1];
        if(bL>bR) return a[aL+k-1];
        int aMid=(aL+aR)/2;
        int bMid=(bL+bR)/2;
        if(a[aMid]<=b[bMid]){
            if(k<=(aMid-aL+1)+(bMid-bL))
                return findmkth(a, aL, aR, b, bL, bMid-1, k);
            else
                return findmkth(a,aMid+1,aR, b, bL, bR,k-(aMid-aL+1));
            
        }
        else{
            if(k<=(aMid-aL+1)+(bMid-bL))
                return findmkth(b, bL, bR, a, aL, aMid-1, k);
            else
                return findmkth(b,bMid+1,bR, a, aL, aR,k-(bMid-bL+1));

        }
        
        
        
    }
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size()+nums2.size()+1;
        double k=(double)findmkth(nums1, 0, nums1.size()-1, nums2,0, nums2.size()-1, n/2);
        
        if(n%2!=0)
        {
            double k1=(double)findmkth(nums1, 0, nums1.size()-1, nums2,0, nums2.size()-1, n/2+1);
            return (k+k1)/2;
            
        }
        return k;
    }
};
