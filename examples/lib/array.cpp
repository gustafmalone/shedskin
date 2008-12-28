#include "array.hpp"

namespace __array__ {

str *const_0;

str *__name__;

void * default_0;

/**
class array
*/

class_ *cl_array;

void *array::fromlist(list<int> *l) {
    for(int i=0; i<len(l); i++)
        unit->append(l->__getitem__(i));
    return NULL;
}

list<int> *array::tolist() {
    return unit->__slice__(0,0,0,0);
}

void *array::fromstring(str *s) {
    for(int i=0; i<len(s); i++)
        unit->append((unsigned char)(s->unit[i]));
    return NULL;
}

void *array::tofile(file *f) {
    
    return NULL;
}

str *array::tostring() {
    str *r = new str();
    for(int i=0; i<len(unit); i++)
        r->unit += ((unsigned char)(unit->__getitem__(i)));
    return r;
}

int array::__len__() {
    
    return 1;
}

array *array::__slice__(int x, int l, int u, int s) {
    
    return this;
}

void *array::fromfile(file *f, int n) {
    str *r = f->read(n); 
    fromstring(r); 
    return NULL;
}

void *array::__init__(str *flags, list<int> *arg) {
    unit = new list<int>();
    if(arg != NULL) 
        fromlist(arg);
    return NULL;
}

void *array::__delete__(int x, int a, int b, int s) {
    
    return NULL;
}
void *array::__setitem__(int i, int e) {

    return NULL;
}

str *array::__repr__() {
    return __add_strs(3, new str("array('B', "), repr(unit), new str(")"));
}

void __init() {
    const_0 = new str("");

    __name__ = new str("array");

    cl_array = new class_("array", 29, 29);

    default_0 = NULL;
}

} // module namespace

