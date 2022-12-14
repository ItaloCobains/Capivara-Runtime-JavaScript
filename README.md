# CapivaraBR - Creating your own JavaScript runtime tutorial
![capivara logo](./capivara.jpeg)

## Overview
CapivaraBR is a JavaScript runtime built on top of [V8 Javascript Engine](https://github.com/v8/v8) and [Libuv](https://github.com/libuv/libuv) 

- Use the environment to follow the tutorial on a [Gitpod snapshot](https://gitpod.io#snapshot/f5d65d51-37d6-457f-9606-6db394eba60a)

## About
Welcome, this repo is part of my youtube video about Recreating the Node.js project from Scratch using V8, Libuv and C++

First of all, leave your star 🌟 on this repo.

Access our [**exclusive telegram channel**](https://bit.ly/ErickWendelContentHub) so I'll let you know about all the content I've been producing 

## Running

- In the GitPod env you can run the hello world example by running the executable [./start.sh](./capivara/start.sh) script. 

### Notes

- It comes with `live reload` enabled for `C++` and `JS` files using `nodemon`
- It comes with a simple `Print` function, a custom C++ function used as a `console.log` function
- The [./start.sh](./capivara/start.sh) script generates a `binary` called `capivara`. 
    - It works similarly to how `Node.js` works. 
        - By running `capivara index.js` it will read the `JavaScript` content from the file and use `V8` to interpret it nd `libuv` to wait for async events.

- Project uses `V8 v10.7.0`
- Project uses `Libuv v1.x`

- All other dependencies are listed on [scripts](./scripts) folder.

## Examples

I left some file exmaples on [examples](./examples/) folder in case you wanna check out how to create [uv timers](./examples/uv-timers.cpp), [uv threads](./examples/uv-threads.cpp), [native cpp threads](./examples/cpp-native-threads.cpp) or the [v8 custom print function](./examples/v8-print-hello.cpp).

### Running the examples
- You can compile and execute examples by simply executing 
```sh
make example-without-extension
```
For example executing the [v8-print-hello.cpp](./examples/v8-print-hello.cpp):
```sh
make v8-print-hello
# Hello, World!...
```
## Compiling binaries for other platforms

if you wanna compile binaries it by yourself, I left some scripts in case you wanna compile all binaries by yourself

- [Installing libuv](./scripts/libuv-env-script-x86.sh)
- [Installing v8](./scripts/v8-env-script-x86.sh)

## ItaloCobains implementations

I fix bugs in the implementation of v8 srt() function, to solve the previous error it was necessary to make a new lib inclusion but I received a dependency conflict, so I fixed this conflict.


## Author

- [ErickWendel](https://github.com/erickwendel)
- [ItaloCobains](https://github.com/ItaloCobains)
