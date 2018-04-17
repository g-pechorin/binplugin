
#include "spampp.h"

PyObject* spam_throw(PyObject *self, PyObject *args)
{
    PyErr_SetString(PyExc_RuntimeError, "yup - that's an error");
    return nullptr;
}