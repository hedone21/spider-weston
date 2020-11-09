#!/bin/sh

export MESON_BUILD_ROOT="$1"
export MESON_SOURCE_ROOT="$2"
export CARGO_TARGET_DIR="$MESON_BUILD_ROOT"/target

cargo build \
    --manifest-path "$MESON_SOURCE_ROOT"/client/Cargo.toml \
    --target-dir "$MESON_SOURCE_ROOT"/build/client
