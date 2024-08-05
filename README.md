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

To compile the game, `cd` into the cloned directory and:

```shell
make
```

To run the program:

```shell
./cub3d maps/map.cub
```

The program takes a map file as an argument. Maps are available in the `maps` directory. 
## Controls

Controls for movement and rotation are:

- `W`: move forward
- `S`: move backward
- `A`: strafe left
- `D`: strafe right
- `left arrow`: rotate left
- `right arrow`: rotate right
- `mouse`: rotate by moving the mouse (bonus only)
