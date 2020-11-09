project('spider', 'c',
  version: '0.0.1',
  license: 'mit')

cargo = find_program('cargo', required: false)
cargo_script = find_program('build-aux/cargo.sh')

cc = meson.get_compiler('c')
wayland_server_dep = dependency('wayland-server')
wayland_client_dep = dependency('wayland-client')
wayland_egl_dep = dependency('wayland-egl')
weston_dep = dependency('weston')
# libweston6_dep = dependency('libweston-6')

subdir('protocol')
subdir('shell')
subdir('client')
