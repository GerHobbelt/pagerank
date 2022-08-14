
#pragma once

#if defined(BUILD_MONOLITHIC)

#ifdef __cplusplus
extern "C" {
#endif

extern int pagerank_main(int argc, const char** argv);
extern int pagerank_test_main(int argc, const char** argv);

#ifdef __cplusplus
}
#endif

#endif
