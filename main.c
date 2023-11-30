#include "bplus.h"
#include "test/test.h"

const char *filename = "/tmp/hello.bp";

int main() {
    TRY_REMOVE("hello")
    bp_db_t db;

    assert(bp_open(&db, filename) == 0);
    bp_sets(&db, "hello", "world");

    char *value;
    bp_gets(&db, "hello", &value);
    printf("%s\n", value);
    free(value);

    bp_sets(&db, "hello", "world2");
    bp_gets(&db, "hello", &value);
    printf("%s", value);
    free(value);
    assert(bp_close(&db) == 0);
}
