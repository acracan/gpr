#pragma once

#include <string>
#include <vector>

#include "gcode_program.h"

namespace gpr {
    
  block parse_tokens(const std::vector<string>& tokens);
  std::vector<std::string> lex_block(const std::string& block_text);

  gcode_program parse_gcode(const std::string& program_text);

  gcode_program parse_gcode_saving_block_text(const std::string& program_text);

}
