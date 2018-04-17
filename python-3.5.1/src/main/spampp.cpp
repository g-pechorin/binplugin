
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

PyObject* spam_arraything(PyObject *self, PyObject *args)
{
  // https://docs.python.org/3/extending/extending.html

    std::cerr << "TODO; read the arguments!" << std::endl;
      std::cerr << "TODO; read the arguments!" << std::endl;
        std::cerr << "TODO; read the arguments!" << std::endl;
          std::cerr << "TODO; read the arguments!" << std::endl;
            std::cerr << "TODO; read the arguments!" << std::endl;
              std::cerr << "TODO; read the arguments!" << std::endl;

  // HA!
  std::vector<float> list;

  list.push_back(3.14f);
  list.push_back(19.83f);

  return vector_to_list(list);


  PyErr_SetString(PyExc_RuntimeError, "spam_arraything() is not complete");
  return nullptr;
}



PyObject* vector_to_list(const std::vector<float> input)
{
  PyObject* output = PyList_New(input.size());
  for (int i = 0; i < input.size(); ++i)
    PyList_SetItem(output, i, PyFloat_FromDouble((double)(input[i])));
  return output;
}
