3.6

-vector is a simple and one of the most useful ways to store data

-a vector is simply a sequence of elements you can access by index.

-elements are individual data contained within a data structure.

-Only accepts elements of its declared type.

-a vwector is a dynamic array

-code for initializing and defining a vector:

vector<type> v = {1, 3, 5};
// initializing the elements in the definition 

vector<type> v(6);
//which just declares a vector of size 6



-------------
3.6.1 Traversing a vector

-using size function we can traverse a vector

-traditional for loop with comparison set for less than v.size()

-range for loop:
for(int x : v)
//for each int x in v 


------------------
3.6.2 Growing a Vector

-Vectors are often initialized empty with no size: vector<double> v;

-v.push_back(data) adds a new element to a vector. the new element becomes the last element in vector


-v.push_back() is refered to as a member function call
object-name.member-function-name(arguments list)

-Vectors are similar to arrays, but the size does not need to be mentioned in advance. They are also dynamic.

-----------------
3.6

-if safe to say that Vectors have a very wide use of applications in the world. If you need to analyze data, you will probably use a vector.

***range for loops executes vector.size() times while simultaneously assigning int num = vector[x], x being whatever iteration < vector.size()








