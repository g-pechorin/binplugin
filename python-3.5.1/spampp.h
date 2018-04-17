#pragma once

#include <Python.h>

#ifdef __cplusplus
extern "C" {
#endif

  /// throws a python exception from C/++
  PyObject* spam_throw(PyObject *self, PyObject *args);

#ifdef __cplusplus
}
#endif
