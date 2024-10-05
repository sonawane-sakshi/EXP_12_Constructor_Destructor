# Experiment 12
Constructors and Destructors

## Aim 
To study Constuctors and Destructors

## Theory
### Definition
#### Constuctors
- A constructor is a special member function of a class that is automatically called when an object of that class is created.
- Its primary purpose is to initialize the object’s properties or allocate resources.
> For example:
```cpp
#include <iostream>
using namespace std;

class Point {
public:
    int x, y;

    Point(int xCoord, int yCoord) {
        x = xCoord;
        y = yCoord;
    }

    void display() {
        std::cout << "Point(" << x << ", " << y << ")" << std::endl;
    }
};

int main() {
    Point p1(10, 20);
    p1.display();

    return 0;
}

```
### Constructors can be categorized into three main types:

#### 1. Default Constructor
- A constructor that either has no parameters or has all parameters set to default values.
#### 2. Parameterized Constructor
- A parameterized constructor takes one or more parameters. This allows the programmer to initialize an object with specific values at the time of creation.
#### 3. Copy Constructor
- A copy constructor is a special constructor that initializes a new object as a copy of an existing object. It takes a reference to an object of the same class as its parameter.

#### Destructors
- Destructor is a special member function of a class that is automatically called when an object of that class is destroyed.
- The primary purpose of a destructor is to release resources that the object may have acquired during its lifetime, such as memory or file handles.
> For example:
```cpp
#include <iostream>
using namespace std;

class Simple {
public:
    Simple() {
        cout << "Constructor called: Object created." << endl;
    }
    
    ~Simple() {
        cout << "Destructor called: Object destroyed." << endl;
    }
};

int main() {
    cout << "Creating an object of Simple class." << endl;
    Simple obj;

    cout << "Exiting main function." << endl;

    return 0;
}

```

## Algorithms
### Default Constructor

1. **Start**

2. **Class Definition**
   - **Define a class named `construct`.**
   - **Declare public member variables:**
     - **`int a`.**
     - **`int b`.**

3. **Default Constructor**
   - **Implement a default constructor:**
     - **Initialize `a` to `10`.**
     - **Initialize `b` to `20`.**

4. **Display Method**
   - **Define a method `void display()`:**
     - **Print the values of `a` and `b` to the console in the format:**
       - **"a = [value of a]"**
       - **"b = [value of b]"**

5. **Main Function**
   - **Create an instance of the `construct` class named `constructor`.**
   - **Call the `display()` method on `constructor` to output the values of `a` and `b`.**

6. **End**


### Copy Constructor

1. **Start**

2. **Define a class named Wall**
   - **Declare private member variables:**
     - **double `length`**
     - **double `height`**
  
3. **Constructor**
   - **Create a constructor that takes two parameters:**
     - **`double len` (length)**
     - **`double hgt` (height)**
   - **Initialize `length` with `len` and `height` with `hgt`.**
  
4. **Copy Constructor**
   - **Create a copy constructor that takes a reference to another `Wall` object (`const Wall& 
     obj`).**
   - **Initialize `length` with `obj.length` and `height` with `obj.height`.**
  
5. **Method to Calculate Area**
   - **Define a method `double calculateArea() const`:**
     - **Return the product of `length` and `height`.**
    
5. **Main Function**
   - **Create an instance of `Wall` named `wall1` using the constructor with specified length 
     and height.**
   - **Create a second instance of `Wall` named `wall2` using the copy constructor to copy 
     `wall1`.**
   - **Output the area of `wall1` using `calculateArea()`.**
   - **Output the area of `wall2` using `calculateArea()`.**

6. **End**


### Destructor

1. **Start**

2. **Global Variable Declaration**
   - **Declare a global integer variable `count` and initialize it to `0`.**

3. **Class Definition**
   - **Define a class named `Student`.**

4. **Constructor**
   - **Implement the default constructor `Student()`:**
     - **Increment the `count` variable by `1`.**
     - **Print the current number of objects created: "No. of objects created: [current
       count]".**

5. **Destructor**
   - **Implement the destructor `~Student()`:**
     - **Decrement the `count` variable by `1`.**
     - **Print the current number of objects destroyed: "No. of objects destroyed: [current 
       count]".**

6. **Main Function**
   - **Create three instances of the `Student` class: `aa`, `bb`, and `cc`.**
     - **For each instance created, the constructor will increment `count` and display the 
       count.**
   - **Create a block (scope) for a new instance of `Student` named `dd`.**
     - **Inside this block, the constructor will increment `count` and display the updated 
       count.**
   - **Once the block is exited, the destructor for dd will be called, decrementing `count` 
     and displaying the updated count.**

     ## Conclusion
In This Practical We Learnt The concepts of contructor and destructor and implement programs for it.
