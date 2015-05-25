#include <TRandom3.h>
//TRandom3 is the best generator
TRandom3 rand(0);//Use a seed generated using machine clock (different every second)                                                                         
TRandom3 rand(12345);//user defined seed
double rn;
rn=rand.Uniform(min,max);
rn=rand.Gaus(mean,sigma);

std::cout<<"rn is "<<rn<<std::endl;
