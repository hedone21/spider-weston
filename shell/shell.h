#ifndef SPIDER_SHELL_H
#define SPIDER_SHELL_H

#include <weston.h>

struct spider_shell {
	struct weston_compositor *compositor;
	struct weston_desktop *desktop;

	struct wl_listener destroy_listener;
	struct wl_listener output_created_listener;
	struct wl_listener output_resized_listener;
	struct wl_listener output_moved_listener;
	struct wl_listener seat_created_listener;

	struct weston_layer background_layer;
	struct weston_layer normal_layer;

	struct wl_list output_list;
	struct wl_list seat_list;
};

#endif /* SPIDER_SHELL_H */
