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

RUN git clone --depth=1 https://github.com/romkatv/powerlevel10k.git ~/powerlevel10k
RUN echo 'source ~/powerlevel10k/powerlevel10k.zsh-theme' >>~/.zshrc

ENTRYPOINT [ "tail", "-f" ]
