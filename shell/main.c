#include <weston.h>
#include "shell.h"
#include "libweston_iface.h"

WL_EXPORT int wet_shell_init(struct weston_compositor *ec, 
                             int *argc, char *argv[]) {
    printf("[SPIDER_SHELL] %s\n", __func__);

    spider_shell_init(9, ec);

    /*
	if (!weston_compositor_add_destroy_listener_once(ec,
							 &shell->destroy_listener,
							 spider_shell_destroy)) {
		free(shell);
		return 0;
	}

	weston_layer_init(&shell->background_layer, ec);
	weston_layer_init(&shell->normal_layer, ec);

	weston_layer_set_position(&shell->background_layer,
				  WESTON_LAYER_POSITION_BACKGROUND);
	weston_layer_set_position(&shell->normal_layer,
				  WESTON_LAYER_POSITION_NORMAL);

	shell->desktop = weston_desktop_create(ec, &spider_shell_desktop_api,
					       shell);
	if (!shell->desktop) {
		return -1;
    }
    */

	return 0;
}
