# Experiment 12 – Constructors and Destructors in C++

**Name:** Palak Soni
**PRN:** 24070123069
**Class:** ENTC A3
**Experiment Number:** 12
**Title:** Implementation of Constructors and Destructors in C++

---

## Theory

### Constructors in C++

A **constructor** in C++ is a **special member function** of a class that is executed automatically when an object is created. Its main role is to **initialize data members** so the object begins in a valid and defined state.

#### Key Properties of Constructors:

1. The constructor must have the same name as the class.
2. It has no return type (not even `void`).
3. It executes automatically when an object is instantiated.
4. Constructors can be **overloaded** with different parameter lists.
5. If no constructor is defined, the compiler provides a **default constructor**.

#### Types of Constructors:

1. **Default Constructor**

   * Takes no arguments.
   * Initializes members with default or user-defined values.

2. **Parameterized Constructor**

   * Accepts parameters to set values at object creation.
   * Provides flexibility and control over initialization.

3. **Copy Constructor**

   * Creates a new object as a copy of an existing one.
   * Syntax: `ClassName (const ClassName &obj) { ... }`
   * Used when passing objects by value, returning objects, or duplicating them.

#### Advantages of Constructors:

* Automatic object initialization.
* Makes code more readable and manageable.
* Eliminates repetitive initialization code.
* Supports polymorphism through overloading.

---

### Limitations of Constructors:

* Cannot be declared virtual.
* Cannot return values.
* Cannot be inherited, though base constructors may be called in derived classes.
* Cannot be invoked explicitly like regular functions (only indirectly via object creation).

---

### Constructors as the foundation of OOP in C++:

* Enable safe, automatic, and flexible initialization of objects.
* Exist in multiple forms: default, parameterized, copy, conversion, and dynamic constructors.
* Support constructor overloading and delegation.
* Widely applied in real-world cases for managing resources effectively.

---

### Destructors in C++

A **destructor** is a special member function that is automatically invoked when an object goes out of scope or is explicitly deleted. Its purpose is to **release resources** such as memory, files, or connections acquired during the object’s lifetime.

* Destructor name matches the class but is preceded by `~`.
* It takes no parameters and has no return value.
* A class can only have one destructor (no overloading).

---

#### Key Properties of Destructors:

1. Same name as the class, prefixed with `~`.
2. No parameters and no return type.
3. Only one destructor per class.
4. Called automatically in **reverse order of creation** (last created object destroyed first).

---

#### Uses of Destructors:

* Free dynamically allocated memory.
* Close files or database connections.
* Release locks or network resources.
* Log messages to trace object lifecycle.

---

### Advantages of Destructors:

* Automatic cleanup of resources.
* Avoids manual calls to cleanup functions.
* Prevents memory leaks and dangling resources.
* Encapsulates cleanup logic within the class.
* Provides stability and safer program execution.

### Limitations of Destructors:

* Called in reverse order during inheritance, which requires careful handling.
* Cannot be overloaded.
* Destructor order for global/static objects across multiple files is undefined.
* Resource-heavy cleanup may add overhead.
* Must not throw exceptions (can terminate program).

---

## Codes, Algorithms, and Summary

### Constructors Programs

#### **1. Constructor Inside the Class**

**Summary:**
The `Student` class has a constructor defined within the class. It initializes fields like name, PRN, branch, division, and fee at object creation. A `display()` method prints details. This shows how constructors simplify initialization.

**Algorithm:**

1. Start program.
2. Define `Student` class with members.
3. Write constructor inside class to initialize details.
4. Create `display()` method.
5. In `main()`, create object `s` → constructor runs automatically.
6. Call `display()`.
7. End.

---

#### **2. Constructor Outside the Class**

**Summary:**
Here, the `Student` class constructor is declared inside the class but defined outside using the scope resolution operator. Functionality remains the same, but code organization improves in larger programs.

**Algorithm:**

1. Start.
2. Declare class `Student` with constructor prototype and `display()`.
3. Define constructor outside class with `Student::Student()`.
4. Take input in constructor.
5. Create object in `main()`.
6. Constructor executes automatically.
7. Call `display()`.
8. End.

---

#### **3. Parameterized Constructor**

**Summary:**
The `Practice` class uses a parameterized constructor to initialize variables during object creation. For example, `Practice p(7,8);` sets values directly. This avoids separate input calls and makes initialization flexible.

**Algorithm:**

1. Start.
2. Define `Practice` class with two integers.
3. Write constructor with parameters `(m, n)`.
4. Assign values inside constructor.
5. Create `display()` method.
6. In `main()`, create object with arguments.
7. Call `display()`.
8. End.

---

#### **4. Copy Constructor (Student Example)**

**Summary:**
The `student` class demonstrates a copy constructor. One object (`s1`) is created with a parameterized constructor. Another (`s2`) is initialized as a copy (`student s2 = s1;`). The copy constructor confirms invocation and copies values.

**Algorithm:**

1. Start.
2. Define `student` class with `name` and `age`.
3. Add parameterized constructor.
4. Define copy constructor printing a message.
5. Create object `s1`.
6. Copy `s1` into `s2`.
7. Display both objects.
8. End.

---

#### **5. Copy Constructor (Car Example)**

**Summary:**
The `Car` class has attributes `Car_name`, `Manufacturer`, and `Price`. A parameterized constructor initializes `c1`. A copy constructor creates `copyC(c1);` while printing "copy constructor called!!". Both objects show identical details.

**Algorithm:**

1. Start.
2. Define `Car` class with data members.
3. Add parameterized constructor.
4. Add copy constructor to copy details.
5. Display original object.
6. Create new object using copy constructor.
7. Display copied object.
8. End.

---

### Destructor Programs

#### **6. Destructor (Date Example)**

**Summary:**
The `Date` class contains a destructor that prints a message when objects go out of scope. It demonstrates cleanup tasks handled automatically.

**Algorithm:**

1. Start.
2. Define `Date` class with destructor `~Date()`.
3. Create objects in `main()`.
4. Use loop to create temporary scoped objects.
5. Observe destructor calls.
6. End.

---

#### **7. Destructor (Object Counter Example)**

**Summary:**
This program uses constructors and destructors to count objects. Each constructor call increments a counter, while each destructor decrements it. It shows the object lifecycle clearly.

**Algorithm:**

1. Start.
2. Define class with constructor and destructor.
3. Increment count in constructor; print creation message.
4. Decrement count in destructor; print destruction message.
5. In `main()`, create multiple objects.
6. Use block scope to destroy one object.
7. End.

---

## Final Conclusion

* **Constructors** simplify initialization by automating setup at object creation.
* They can be **default, parameterized, or copy constructors** for different needs.
* **Destructors** handle cleanup automatically when objects are destroyed.
* Together, constructors and destructors ensure **safe and efficient object lifecycle management**.
* They form a core part of **Object-Oriented Programming in C++**, enabling clean, maintainable, and reliable code.
