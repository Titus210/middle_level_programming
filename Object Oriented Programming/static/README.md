#   Static Keyword
This is a keyword modifier that belongs to type not instance. <br/>
Instance is not required to access static members
***
## Use
Static Keyword are used to modify the behaviour of class members and variables.
__example__: <br/>
1. When they are applied to class member ( method or Variable), the member is
shared by all objects in the class rater than having different copy of each object.

```
    class MyClass{
        public:
            static int classValue
    }
    int MyClass::classValue = 1;
```
From above example: <br>
`classValue` is member static member of the class `MyClass`, which can be accessed by all objects
of the class name and scope resolution operator, i.e `MyClass::classValue`.

2. When applied to a local variable in a  function, it returns and retains function
between function calls. i.e 
```
    void countStudents(){
        static int value = 0;
        value ++;
        cout << "The number of students is "<<  value << endl;
    }

    // driver function

    int main(){

        for(i = 0; i <= students.length; i++)
            countStudents();

        return 0;
    }
```

1. When applied to global variable, it contains external linkage only
visible to code to code in same translation(i.e translation)