#ifndef BP_TREE_PRIVATE_UTILS_H_
#define BP_TREE_PRIVATE_UTILS_H_

#ifdef __cplusplus
extern "C" {
#endif

#include <stdint.h> /* uint64_t */

uint64_t bp__compute_hashl(uint64_t key);

#ifndef htonll

uint64_t htonll(uint64_t value);

#endif
#ifndef ntohll

uint64_t ntohll(uint64_t value);

#endif
#ifdef __cplusplus
} // extern "C"
#endif

#endif /* BP_TREE_PRIVATE_UTILS_H_ */
