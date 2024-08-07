# FdF (wireframe viewer) 

## 💡 About the project

The FdF project provides a graphical representation of a landscape, where the terrain is outlined with lines to emphasize the topography and surface details. The result is a visually appealing 3D model.

## ❗This is a port from my linux FdF project version

Potentially memory leaks could be found. 

## Some examples of the rendered 3D landscapes:

- <img src="https://github.com/redarling/FdF-42-macOS/blob/main/img2.png" alt="Screenshot 1" width="500"/>
- <img src="https://github.com/redarling/FdF-42-macOS/blob/main/img1.png" alt="Screenshot 2" width="500"/>
- <img src="https://github.com/redarling/FdF-42-macOS/blob/main/img3.png" alt="Screenshot 3" width="500"/>


## 🛠️ Installation Instructions

To get started with the FdF project, follow these steps:

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
