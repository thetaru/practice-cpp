FROM gcc
RUN apt-get update && apt-get -y install --no-install-recommends gdb
RUN echo 'alias g++="g++ -Wall -Wextra -O3"' >> ~/.bashrc