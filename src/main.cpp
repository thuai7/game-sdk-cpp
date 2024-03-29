#include <iostream>
#include <string>
#include <websocketpp/client.hpp>
#include <websocketpp/config/asio_no_tls_client.hpp>

using client = websocketpp::client<websocketpp::config::asio_client>;

auto main() -> int {
  bool done = false;
  std::string input;

  while (!done) {
    std::cout << "Enter Command: ";
    std::getline(std::cin, input);

    if (input == "quit") {
      done = true;
    } else if (input == "help") {
      std::cout << "\nCommand List:\n"
                << "help: Display this help text\n"
                << "quit: Exit the program\n"
                << std::endl;
    } else {
      std::cout << "Unrecognized Command" << std::endl;
    }
  }

  return 0;
}
