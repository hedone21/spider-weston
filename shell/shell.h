#ifndef SPIDER_SHELL_H
#define SPIDER_SHELL_H

#include <weston.h>

struct spider_shell {
    /* libweston dependencies */
    union {
        void *compositor;
        void *desktop;

        void *background_layer;
        void *normal_layer;

        void *padding[8];
    }libweston;
    union {
        struct weston_compositor *compositor;
        struct weston_desktop *desktop;

        struct weston_layer *background_layer;
        struct weston_layer *normal_layer;
    }libweston_9;

	struct wl_listener destroy_listener;
	struct wl_listener output_created_listener;
	struct wl_listener output_resized_listener;
	struct wl_listener output_moved_listener;
	struct wl_listener seat_created_listener;

	struct wl_list output_list;
	struct wl_list seat_list;

    unsigned int version;
};

struct spider_shell* spider_shell_init(unsigned int version, void *compositor);

#endif /* SPIDER_SHELL_H */
