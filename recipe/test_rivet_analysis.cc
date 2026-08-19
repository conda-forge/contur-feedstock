// Minimal Rivet analysis used only by the recipe tests to exercise the
// runtime rivet-build compilation path (contur 3.1.4 ships no .cc files).
#include "Rivet/Analysis.hh"

namespace Rivet {

  class SmokeTest : public Analysis {
  public:
    RIVET_DEFAULT_ANALYSIS_CTOR(SmokeTest);
    void init() {}
    void analyze(const Event&) {}
    void finalize() {}
  };

  RIVET_DECLARE_PLUGIN(SmokeTest);

}
