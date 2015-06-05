#include <string>
#include <iostream>

std::string full_string = "scott>=tiger>=mushroom";
std::string delimiter = ">=";

std::cout<<full_string<<std::endl;
size_t pos = 0;
std::string partial_string;
while ((pos = full_string.find(delimiter)) != std::string::npos) {
  partial_string = full_string.substr(0, pos);
  full_string.erase(0, pos + delimiter.length());
  std::cout << partial_string << std::endl;
}
std::cout << full_string << std::endl;
//Output is                                                                                                                                                                    
//scott>=tiger>=mushroom                                                                                                                                                       
//scott                                                                                                                                                                        
//tiger                                                                                                                                                                        
//mushroom                                                                                                                                                                     
//At the end of the code, the initial string is empty
