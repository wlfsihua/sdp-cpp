/* -----------------------------------------------------------------------------
 * Rule_path_empty.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.2
 * Produced : Sun Dec 31 10:33:28 CET 2017
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_path_empty_hpp
#define Rule_path_empty_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_path_empty : public Rule
{
public:
  Rule_path_empty(const std::string& spelling, const std::vector<const Rule*>& rules);
  Rule_path_empty(const Rule_path_empty& rule);

  Rule_path_empty& operator=(const Rule_path_empty& rule);

  const Rule_path_empty* clone(void) const;

  static const Rule_path_empty* parse(ParserContext& context);

  void* accept(Visitor& visitor) const;
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */