To build docker-image use the command:

$ docker build -t avr-unipolar-stepper-builder .

To run container use the command:

$ docker run --name stepper -v ~/src/avr/avr-unipolar-stepper:/usr/src avr-unipolar-stepper-builder

To run existed container use the command:

$ docker start stepper

To watch container logs after the "$ docker start" command use the watch cli:

$ watch -n 0 "docker logs stepper | tail -n 4"
