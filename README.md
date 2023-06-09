# Filter
Second practice of High Performance Computing at National [Autonomus University of Mexico](https://www.unam.mx/) (2023-2)


GPL License 3.0



## Project description
This project consists of the implementation of a PNG image filter (gray scale) programmed in C that works in parallel with MPICH. The work was built over a graphic interface made in class with Glade and Python3.

## Running and compilation
In order to be able to run the program you will need to have Glade, PyGObject and stb installed.


To compile the filter program you have to type on the terminal:
```
mpicc \-o try filter1.c -lm
```
To run the Python constructor
```
python3 readpng.py
```

Once the above is finished you will be able to watch the graphic interface as follows


![Graphic interface screenshot](https://github.com/Kadkam8a/Filter/blob/main/glade.png)

This window allows you to explore your personal files to choose the image to which the filter will be applied. As soon as we select the image it is shown in the graphic interface enabling us to apply the MPI filter.


![](https://github.com/Kadkam8a/Filter/blob/main/mpifilter.png)


Then we have to choose how many processors we want to use.


![](https://github.com/Kadkam8a/Filter/blob/main/noprocessors.png)


And finally when we click on *Accept* the filtered image is depicted.


![](https://github.com/Kadkam8a/Filter/blob/main/result.png)

## Example
For the example above the input image was:

![](https://github.com/Kadkam8a/Filter/blob/main/dice.png)

And the output:

![](https://github.com/Kadkam8a/Filter/blob/main/Shapes_gray.png)

## Used tools

- [MPICH](https://www.mpich.org/).
- [stb](https://github.com/nothings/stb).
- [Glade](https://developer-old.gnome.org/gtkmm-tutorial/stable/chapter-builder.html.es).
- [PyGObject](https://pypi.org/project/PyGObject/)
- [Python3](https://www.python.org/).
## Another references
- https://solarianprogrammer.com/2019/06/10/c-programming-reading-writing-images-stb_image-libraries/
