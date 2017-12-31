/* -----------------------------------------------------------------------------
 * Rule_obs_text.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.2
 * Produced : Sun Dec 31 10:33:28 CET 2017
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_obs_text_hpp
#define Rule_obs_text_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_obs_text : public Rule
{
public:
  Rule_obs_text(const std::string& spelling, const std::vector<const Rule*>& rules);
  Rule_obs_text(const Rule_obs_text& rule);

  Rule_obs_text& operator=(const Rule_obs_text& rule);

  const Rule_obs_text* clone(void) const;

  static const Rule_obs_text* parse(ParserContext& context);

  void* accept(Visitor& visitor) const;
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */