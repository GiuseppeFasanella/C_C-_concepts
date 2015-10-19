#### String to numeric

float              stof(const string& str, size_t *idx = 0);
double             stod(const string& str, size_t *idx = 0);
long double        stold(const string& str, size_t *idx = 0);
int                stoi(const string& str, size_t *idx = 0, int base = 10);
long               stol(const string& str, size_t *idx = 0, int base = 10);
unsigned long      stoul(const string& str, size_t *idx = 0, int base = 10);
long long          stoll(const string& str, size_t *idx = 0, int base = 10);
unsigned long long stoull(const string& str, size_t *idx = 0, int base = 10);

# Example 
std::string si = "98765";
std::string sf = "3.14";
int i = std::stoi(si);
float f = std::stof(sf);

#### Numeric to string 
std::string s = std::to_string(42);
//A questo punto puoi castare la stringa in una TString cosi' e' piu' facile da usare in root
UnaTString+TString(s)+".root"; //qualcosa del genere e funziona

## Puoi fare anche cosi', ma mi piace molto meno
TString varName="";
varName.Form("%d",var);

