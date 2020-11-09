#include <stdlib.h>
#include "shell.h"

struct spider_shell* spider_shell_init(unsigned int version, void *compositor) {
    struct spider_shell *shell;
    shell = calloc(1, sizeof(*shell));
    if (shell == NULL) {
        return NULL;
    }

    shell->version = version;

    if (version == 9) {
        shell->libweston_9.compositor = compositor;
    }else {
        /* TODO print error and exit */
    }

    return shell;
}
