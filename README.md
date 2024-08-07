# FdF (wireframe viewer) 

## 💡 About the project

The FdF-42-macOS project provides a graphical representation of a landscape, where the terrain is outlined with lines to emphasize the topography and surface details. The result is a visually appealing 3D model that helps in understanding and analyzing the landscape's features.

## 🖼️ Screenshots

Here are some examples of the rendered 3D landscapes:

- ![Screenshot 1](https://github.com/redarling/FdF-42-macOS/blob/main/img2.png)
- ![Screenshot 2](https://github.com/redarling/FdF-42-macOS/blob/main/img1.png)
- ![Screenshot 3](https://github.com/redarling/FdF-42-macOS/blob/main/img3.png)

## 🛠️ Installation Instructions

To get started with the FdF-42-macOS project, follow these steps:

1. Clone the repository using the command:

        git clone https://github.com/redarling/FdF-42-macOS.git

2. Navigate to the project directory:

        cd FdF-42-macOS

3. To build the project, execute the following command:

        make

After successful compilation, you can run the application by providing a valid map

## Example command:

    ./fdf maps/elem-fract.fdf

## 🛠️ Features

-   3D Terrain Visualization: Represents landscapes as 3D objects with
  outlined surfaces by providing a file with terrain data when running the application.

Example of the valid map:

      0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0
      0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0
      0  0 10 10  0  0 10 10  0  0  0 10 10 10 10 10  0  0  0
      0  0 10 10  0  0 10 10  0  0  0  0  0  0  0 10 10  0  0
      0  0 10 10  0  0 10 10  0  0  0  0  0  0  0 10 10  0  0
      0  0 10 10 10 10 10 10  0  0  0  0 10 10 10 10  0  0  0
      0  0  0 10 10 10 10 10  0  0  0 10 10  0  0  0  0  0  0
      0  0  0  0  0  0 10 10  0  0  0 10 10  0  0  0  0  0  0
      0  0  0  0  0  0 10 10  0  0  0 10 10 10 10 10 10  0  0
      0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0
      0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0

The numbers respresent the height of a point in the landscape.

-   Interactive Controls: Navigate and manipulate the 3D view using intuitive controls.

## 📝 Author
- [asyvash](https://github.com/redarling)
