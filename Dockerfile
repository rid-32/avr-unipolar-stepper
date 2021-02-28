FROM ubuntu:latest

ARG BUILD_DEPS="make binutils gcc-avr avr-libc"

RUN set -ex && \
    apt-get update && \
    apt-get upgrade -y && \
    apt-get install -y --no-install-recommends $BUILD_DEPS && \
    rm -rf /var/lib/apt/lists/*

WORKDIR /usr/src

CMD ["make", "build"]
