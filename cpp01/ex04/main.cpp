#include <iostream>
#include <fstream>
#include <string>

static bool read_content(const std::string& filename, std::string& content)
{
  std::ifstream input(filename.c_str());
  if (!input) {
    std::cerr << "Error: opening input file.\n";
    return false;
  }
  char ch;
  content.clear();
  while (input.get(ch))
    content += ch;
  if (input.bad() || (input.fail() && !input.eof())) {
    std::cerr << "Error: reading input file.\n";
    return false;
  }
  input.close();
  return true;
}

int main(int argc, char *argv[]) {
  if (argc != 4) {
    std::cerr
      << "The program takes 3 parameters: filename, string1 and string2.\n";
    return 1;
  }

  std::string filename = argv[1], s1 = argv[2], s2 = argv[3];
  if (s1.empty()) {
    std::cerr << "Error: search string must not be empty.\n";
    return 1;
  }
  std::string content;
  if (!read_content(filename, content))
    return 1;
  std::ofstream output((filename + ".replace").c_str());
  if (!output) {
    std::cerr << "Error: opening output file.\n";
    return 1;
  }

  std::string::size_type pos = 0;
  std::string::size_type found;
  while ((found = content.find(s1, pos)) != std::string::npos)
  {
      output << content.substr(pos, found - pos);
      output << s2;
      pos = found + s1.length();
  }
  output << content.substr(pos);

  output.close();
  if (!output) {
    std::cerr << "Error: writing output file.\n";
    return 1;
  }
  return 0;
}
