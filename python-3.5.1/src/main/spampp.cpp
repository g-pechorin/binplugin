
#include <Python.h>
#include <vector>

PyObject* vector_to_list(const std::vector<float> input);

#include "spampp.h"

PyObject* spam_throw(PyObject *self, PyObject *args)
{
    PyErr_SetString(PyExc_RuntimeError, "yup - that's an error");
    return nullptr;
}

#include "run_arraything.hpp"


#include <iostream>
#include <sstream>

PyObject* spam_arraything(PyObject *self, PyObject *args)
{
  // https://docs.python.org/3/extending/extending.html

  std::cerr << "TODO; read the arguments!" << std::endl;
  std::cerr << "TODO; read the arguments!" << std::endl;
  std::cerr << "TODO; read the arguments!" << std::endl;
  std::cerr << "TODO; read the arguments!" << std::endl;
  std::cerr << "TODO; read the arguments!" << std::endl;
  std::cerr << "TODO; read the arguments!" << std::endl;

  std::stringstream message;

  message << "arguments;";
  message << "\n\targs = " << (nullptr == args ? "<null>" : ">args<");

  std::cerr << "TODO; parse the tuple" << std::endl;

  // parse the tuple.
  // python (I think) passes all arguments as some sort fo tuple thingie
  // ... and if it can't be parsed; python sets up an error
  // ... and they're "Borrowed" so we don't have to decrement them
  // ... but lists are full python object (yuck!) so we need to dance shenanigans to read them
  // https://docs.python.org/3/c-api/arg.html#c.PyArg_ParseTuple
  // https://stackoverflow.com/questions/22458298/extending-python-with-c-pass-a-list-to-pyarg-parsetuple#22487015
  float factor;
  PyObject* data;
  if (!PyArg_ParseTuple(args, ("O" "f"), &data, &factor))
    return nullptr;

  message << "\n\tdata = " << (nullptr == data ? "<null>" : ">data<");
  message << "\n\tfactor = " << factor;

  PyErr_SetString(PyExc_RuntimeError, message.str().c_str());
  return nullptr;

  // HA!
  std::vector<float> list;

  list.push_back(3.14f);
  list.push_back(19.83f);

  return vector_to_list(list);
}



PyObject* vector_to_list(const std::vector<float> input)
{
  PyObject* output = PyList_New(input.size());
  for (int i = 0; i < input.size(); ++i)
    PyList_SetItem(output, i, PyFloat_FromDouble((double)(input[i])));
  return output;
}
