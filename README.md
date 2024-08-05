![image](https://github.com/ilopez-r/resources/blob/main/covers/cover-cub3d-bonus.png?raw=true)

## Subject
This is the [subject](https://github.com/ilopez-r/resources/blob/main/subjects/04_cub3d_en.pdf) for this project.

## Introduction
Cub3D is a team project to create a dynamic view inside a 3D maze. Using the MiniLibX library, we must implement raycasting in the style of the famous [Wolfenstein 3D](http://users.atw.hu/wolf3d/) game, the first true FPS in videogame history.

## Clone

Clone the repository:

```shell
git clone https://github.com/ilopez-r/cub3d.git
```

## Compile and Run

There are two versions of the program, the mandatory part and the bonus part. The bonus part adds wall collision, a minimap, and the ability to rotate the view by moving the mouse.

To compile the mandatory part, `cd` into the cloned directory and:

```shell
make
```

To compile the bonus part, `cd` into the cloned directory and:

```shell
make bonus
```
Note: you may need to `make fclean` to switch between the mandatory and bonus compilations (working on a fix for this!).


To run the program:

```shell
./cub3d <path/to/map.cub>
```

The program takes a map file as an argument. Maps are available in the `maps` directory. There are good maps which the program should run smoothly with, and bad maps which the program should reject.
For example:

- `./cub3d maps/good/library.cub` should run.

- `./cub3d maps/bad/filetype_wrong.buc` should print an error and abort.

## Controls

Controls for movement and rotation are:

- `W`: move forward
- `S`: move backward
- `A`: strafe left
- `D`: strafe right
- `left arrow`: rotate left
- `right arrow`: rotate right
- `mouse`: rotate by moving the mouse (bonus only)
