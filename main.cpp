#include <iostream>
#include <cstdio>
#include <cstring>
#include <SFML/Graphics.hpp>

void log_help(std::ostream& os){
  os<<"Provide the following arguments:\n";
  os<<"\t- the color for which the gradient is generated, it must be 'r', 'g' or 'b'\n";
  os<<"\t- the name of the file to be saved in './data/'\n";
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
  sf::Image img;
  img.create(256, 50);
  char choice = argv[1][0];
  for(int i=0; i < 256; i++)
    for(int j=0; j < 50; j++)
      img.setPixel(
        i, j,
        sf::Color(
          'r' == choice ? i : 0,
          'g' == choice ? i : 0,
          'b' == choice ? i : 0
        )
      );
  char file[251];
  sprintf(file, "data/%s.png", argv[2]);
  img.saveToFile(file);
  return 0;
}
