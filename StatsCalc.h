#ifndef STATSCALC_H
#define STATSCALC_H

class StatsCalc
{
public:
    // default constructor
    StatsCalc() {};
    // destructor
    ~StatsCalc() {};
    
    float mean(int x1, int x2, int x3, int x4);
    
    float standarddeviation(int x1, int x2, int x3, int x4);
    
private:
    float calcmean ; // variable to store the calculated mean 
};

#endif // !STATSCALC_H
