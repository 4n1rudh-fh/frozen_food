# Description
- This repo demonstrates the concepts of *Overriding Function*, *Polymorphism*, and *Abstraction*.
- A base class called `FrozenFood` is created. From that the following two classes are derived `FrozenPizza` and `DeepDishPizza`.
- The class `FrozenFood` has an *abstract virtual function* inside it. That way, no instances of this base class can be created. 
- But, now *overriding function* is a must. Otherwise the derived classes become abstract as well, i.e. no instances of derived objects can be created.
- *Polymorphism* results from the `virtaul` function `Thaw()`. That way, even tghe derived classes can have the same function name, but different functionalities. 

# References
C++ for dummies: John Paul Mueller and Jeff Cogswell