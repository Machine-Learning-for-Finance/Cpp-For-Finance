FROM ubuntu:18.04

RUN apt-get update && apt-get install -y build-essential

RUN mkdir /app
COPY . /app

WORKDIR /app

RUN make

WORKDIR /app/build/apps
CMD ["./program"]