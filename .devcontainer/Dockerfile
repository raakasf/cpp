FROM gcc:14

RUN apt update 
RUN apt install -y \
	docker.io \
	gdb \
	cmake \
	ninja-build \
	zsh

RUN sh -c "$(wget -O- https://github.com/deluan/zsh-in-docker/releases/download/v1.2.0/zsh-in-docker.sh)" -- \
	-t robbyrussell

ENTRYPOINT [ "tail", "-f" ]
