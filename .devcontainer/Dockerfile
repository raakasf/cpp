FROM gcc:14

RUN apt update 
RUN apt install -y \
	gdb \
	cmake \
	ninja-build \
	zsh

ENTRYPOINT [ "tail", "-f" ]
