//It's useful, but I don't really like to use it because after a while I forget how I redefined things

typedef std::map< TString, TChain* > chain_map_t;
typedef std::map< TString, chain_map_t > tag_chain_map_t;

//Now, instead of writing:
//std::map<TString, TChain* > a; 
//you can type: 
chain_map_t a;
