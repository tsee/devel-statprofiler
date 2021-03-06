#ifndef _DEVEL_STATPROFILER_RUNLOOP
#define _DEVEL_STATPROFILER_RUNLOOP

#include "EXTERN.h"
#include "perl.h"

namespace devel {
    namespace statprofiler {
        void init_runloop(pTHX);
        void clone_runloop(pTHX);
        void install_runloop();

        void set_enabled(bool enabled);
        void set_output_file(const char *path);
        void set_sampling_interval(unsigned int interval);
    }
}

#ifdef _DEVEL_STATPROFILER_XSP
using namespace devel::statprofiler;
#endif

#endif
