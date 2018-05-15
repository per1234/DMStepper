#ifndef STEPPERGROUP_H
#define STEPPERGROUP_H

#include <vector>
#include "dmstepper.h"

class StepperGroup{
private:
std::vector<DMStepper*> _list;

public:
  StepperGroup* add(DMStepper* motor){ _list.push_back(motor); return this; }

  int  size() { return _list.size(); }

  DMStepper* get(String name);

  bool update();
  bool isRunning();
};

#endif //STEPPERGROUP_H
