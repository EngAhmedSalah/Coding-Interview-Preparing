class UndergroundSystem {
public:
    map<string , map<string , pair<int , int> > > route;    //store count , sum between A , B
    unordered_map<int , pair<string , int > > customerCI;        //store customer check in
    
    UndergroundSystem() {
        
    }
    
    void checkIn(int id, string stationName, int t) {
        customerCI[id] = {stationName , t};
    }
    
    void checkOut(int id, string stationName, int t) {
        string checkedInStation = customerCI[id].first;
        int checkedInTime = customerCI[id].second;
        
        int difference = t - checkedInTime;
        int cnt = route[checkedInStation][stationName].second + 1;
        int sum = difference + route[checkedInStation][stationName].first;
        //printf("%d %d\n" , sum , cnt);
        route[checkedInStation][stationName] = {sum , cnt};
    }
    
    double getAverageTime(string startStation, string endStation) {
        int sum = route[startStation][endStation].first;
        int cnt = route[startStation][endStation].second;
        return 1.0 * sum / cnt;
    }
};

/**
 * Your UndergroundSystem object will be instantiated and called as such:
 * UndergroundSystem* obj = new UndergroundSystem();
 * obj->checkIn(id,stationName,t);
 * obj->checkOut(id,stationName,t);
 * double param_3 = obj->getAverageTime(startStation,endStation);
 */