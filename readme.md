# Templates assignment

Code written by Youssef Hussein and Lusine Keshishyan.<br/>
<br/>
Included is C++ code, header files, CMakeLists and a build directory implementing variants on a set collection type.<br/>
<br/>

We augmented the provided starter code to implement three versions of both simple_set and range_set. All the specifications defined in the assignment are met.

* array_simple_set<T>: there is a constructor, destructor, + operator and a contains function.
* carray_range_set<T, C, I>: implementation is based on array_simple_set methods
* hashed_simple_set<T, F>
* hashed_range_set<T, F, C, I>
* bin_search_simple_set<T, C>
* bin_search_range_set<T, C>

# Extra credit

* operator -(difference) is implemented

# Run

Please use the following commands for compilation.<br/>
`mkdir build`
`cd build`
`cmake ..`
`make`
<br/>
For execution and testing, please use `./main` command while in the build directory.
