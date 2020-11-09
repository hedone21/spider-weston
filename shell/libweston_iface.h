#ifndef WESTON_DESKTOP_IFACE
#define WESTON_DESKTOP_IFACE

#include "shell.h"

/* TODO add comment */
struct libweston_iface {
    int (*init_compositor) (struct spider_shell *shell);
    int (*init_layers)     (struct spider_shell *shell);
    int (*init_desktop)    (struct spider_shell *shell);
};

struct libweston_iface* spider_shell_libweston_new(unsigned int version);

#endif /* WESTON_DESKTOP_IFACE */
