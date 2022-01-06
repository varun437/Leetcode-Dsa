class Solution {
public:
    int countBalls(int lowLimit, int highLimit) {
        
        vector<int> v(46,0);
        for(int i=lowLimit;i<=highLimit;i++)
        {
            int sum=0;
            int temp=i;
            while(temp)
            {
                sum+=temp%10;
                temp=temp/10;
            }
            v[sum]++;
        }
        return *max_element(v.begin(),v.end());
        
    }
};
