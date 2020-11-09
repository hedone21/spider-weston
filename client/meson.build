src = files(
        'src/main.rs',
        )

custom_target(
        'spider-client',
        build_by_default: true,
        input: src,
        output: 'spider-client',
        command: [
            cargo_script,
            meson.build_root(),
            meson.source_root(),
            '@OUTPUT@',
            ]
        )
