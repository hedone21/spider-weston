#include <weston.h>

WL_EXPORT int wet_shell_init(struct weston_compositor *ec, 
                             int *argc, char *argv[]) {
    printf("[SPIDER_SHELL] %s\n", __func__);

	return 0;
}
