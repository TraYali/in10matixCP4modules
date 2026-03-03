# Task 1 - simple modules:
Create a module that implements `struct Point`.
`Point` should have its own coordinates, constructor,
accessors and methods for:
printing the contents of the struct
converting coordinates into the reflection on x axis, y axis and center point(0, 0)
Import and test the `Point` module in main.

# Task 2 - module interface unit:
Create a module interface unit called `Hamburger`. It has to contain different kinds of toppings and fillings.
A topping in this case should consist of the function that returns/prints a string of how it should be added to your hamburger.
For example, your meat module should have the following contents:
```
module Hamburger;
import <string>;

std::string meat() {
  return "Grilling a beautiful beef patty.\n";
}
```
So then your Hamburger module interface would look like that:
```
export module Hamburger;

import <string>;

export{
  std::string meat();
}
```
And you have to create the hamburger of your dreams in the main:
```
import <iostream>;
import Hamburger;
int main() {
    std::cout << bread(); // you'll have to create your own bred module!
    std::cout << meat();
    // and so on
}
```

# Task 3 - submodules:
Create a module called `mat` (math) that is composed of `alg` (algebra) and `geo` (geometry) submodules. 
Algebra submodule should implement a function:
`std::pair<double,double> findRoots(float a, float b, float c)` -> returns a pair of roots of a polynomial of type ax^2 + bx + c = 0, throws exception if roots were not found.
Geometry submodule should implement functions:
double findDist(float x1, float y1, float x2, float x2) -> returns distance between two points.
Test the math module in the main. Try to import only one submodule instead of the whole math.

# Task 4 - partitioning:
Create a module called `calc`.
Module `calc` should have `calc::constants` partition and `calc::functions` partition.
`calc::constants` should have a function that returns the pi number.
`calc::functions` should have functions that calculate area and circumference with a given radius parameter. Functions must use the pi number from `calc::constants`.
The `calc::constants` must be hidden from the final user.
