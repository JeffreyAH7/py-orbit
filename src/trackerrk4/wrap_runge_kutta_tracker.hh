#ifndef WRAP_RUNGE_KUTTA_TRACKER_H
#define WRAP_RUNGE_KUTTA_TRACKER_H

#include "Python.h"

#ifdef __cplusplus
extern "C" {
#endif

  namespace wrap_trackerrk4{
    void initRungeKuttaTracker(PyObject* module);
  }

#ifdef __cplusplus
}
#endif

#endif
