/* -----------------------------------------------------------------------------
 * Rule_bandwidth.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.2
 * Produced : Sun Dec 31 10:33:28 CET 2017
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_bandwidth_hpp
#define Rule_bandwidth_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_bandwidth : public Rule
{
public:
  Rule_bandwidth(const std::string& spelling, const std::vector<const Rule*>& rules);
  Rule_bandwidth(const Rule_bandwidth& rule);

  Rule_bandwidth& operator=(const Rule_bandwidth& rule);

  const Rule_bandwidth* clone(void) const;

  static const Rule_bandwidth* parse(ParserContext& context);

  void* accept(Visitor& visitor) const;
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */