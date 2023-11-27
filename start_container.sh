#!/bin/bash

IMAGE_NAME=epitech_docker_with_emacs
SOURCE_FOLDER=./Exercices
DEST_FOLDER=/home/Docker-env/

docker build -t $IMAGE_NAME .

docker run --rm -v "$SOURCE_FOLDER:$DEST_FOLDER" -it $IMAGE_NAME /bin/bash -c "useradd Docker-env && su - Docker-env"
