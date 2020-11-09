#ifndef WESTON_DESKTOP_IFACE
#define WESTON_DESKTOP_IFACE

/* TODO add comment */
struct libweston_iface {
    int (*init_compositor) ();
    int (*init_layers) ();
    int (*init_desktop) ();
};

struct libweston_iface* spider_shell_libweston_new(unsigned int version);

#endif /* WESTON_DESKTOP_IFACE */
