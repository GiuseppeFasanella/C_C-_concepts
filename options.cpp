#include <iostream>
#include <string>
#include <boost/program_options.hpp>

//g++ -o options.exe options.cpp -lboost_program_options

using namespace std;

int main(int argc, char **argv) {
  //------------------------------------------------------------
  // parsing input options to the program                       
  using namespace boost;
  namespace po = boost::program_options;
  std::string my_message;
  int my_number;

  po::options_description desc("Main options");
  po::options_description outputOption("Output options");
  //------------------------------ adding options' description  
  desc.add_options()
    ("help,h","Help message")
    ("number", po::value<int>(&my_number)->default_value(10), "This is my number")
    ;
  outputOption.add_options()
    ("message", po::value<string>(&my_message)->default_value("ciao"),"ciao or not ciao")
    ;

  desc.add(outputOption);
 
  po::variables_map vm;
  po::store(po::parse_command_line(argc, argv, desc), vm);
  po::notify(vm);

  if (vm.count("help")) {
    cout << desc << "\n";
    return 1;
  }

  cout<<"My message is "<<my_message<<" "<<my_number<<endl;
  return 0;

}

