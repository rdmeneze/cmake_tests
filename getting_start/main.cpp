#include "CMain.h"
#include <iostream>

int main(int argc, char **argv) {
  CMain *app = new CMain(argc, argv);

  std::cout << "Version: " << app->version() << "\n";

  return app->execute();
}
