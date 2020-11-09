shell_src = [
    'main.c',
    'shell.c'
]

shell_dep = [
    wayland_server_dep,
    wayland_egl_dep,
    weston_dep,
]

shell_so = shared_library('spider-shell',
                          shell_protocol_c,
                          shell_server_protocol_h,
                          xdg_shell_protocol_c,
                          xdg_shell_server_protocol_h,
                          xdg_shell_unstable_v6_protocol_c,
                          xdg_shell_unstable_v6_server_protocol_h,
                          shell_src,
                          dependencies: shell_dep,
                          include_directories: include_directories('..'),
                          name_prefix: '',
                          )
