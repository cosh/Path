#include <assert.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <errno.h>
#include "path_tests.h"
#include "path.h"

TEST(test_path_basic_1) {
	assert(1 > 0);

	return 0;
}

TEST(test_path_basic_2) {
        assert(1 > 0);

        return 0;
}

int main() {
        int err = 0;
	Path *path;

        test_path_basic_1(path);
	test_path_basic_2(path);

        return err ? -1 : 0;
}

