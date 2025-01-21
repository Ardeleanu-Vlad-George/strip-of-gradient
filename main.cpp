#include <iostream>
#include <SFML/Graphics.hpp>
#include <cstring>

void log_help(std::ostream& os){
  std::cout<<"Provide the following arguments:\n";
  std::cout<<"\t- the color for which the gradient is generated, it must be 'r', 'g' or 'b'\n";
  std::cout<<"\t- the name of the file to be saved in './data/'\n";
}

int main(int argc, char *argv[]){
  if(2 == argc && strcmp(argv[1], "HELP") == 0){
    log_help(std::clog);
    return 1;
  }
  if(3 != argc){
    std::cerr<<"Too few arguments\n";
    log_help(std::cerr);
    return 2;
  }
  if(strcmp(argv[1], "r")!=0 && strcmp(argv[1], "b")!=0 && strcmp(argv[1], "g")!=0){
    std::cerr<<"Incorrect color option\n";
    log_help(std::cerr);
    return 3;
  }
  std::cout<<"Normal behaviour\n";
  return 0;
}
