# Docker Example

To build this using Docker, first run
```
docker build -t cpp_docker_example .
```
from the directory containing the `Dockerfile`,
after that completes building run 

```.bash
docker run cpp_docker_example
```
And you should see the `Hello World` printed out 
on your terminal.

With this we have a standardized way to compile
and run C++ (or any other programming language).
From any computer that has the Docker Daemon installed.
