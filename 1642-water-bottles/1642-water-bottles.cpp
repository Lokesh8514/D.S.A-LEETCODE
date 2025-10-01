class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int eb=numBottles;
        int fb=0;
        int sum=numBottles;
        while(eb>=numExchange){
            sum+=eb/numExchange;
            fb=eb/numExchange;
            eb%=numExchange;
            eb+=fb;
            fb=0;
        }
        return sum;
    }
};