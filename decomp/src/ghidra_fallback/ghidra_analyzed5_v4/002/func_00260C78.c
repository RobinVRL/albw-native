#include "ghidra_types.h"

extern float DAT_00260d34;

// USA 00260C78 <- EU 00260CA0 (Ghidra, non-matching)
// GLOBAL DAT_00260d34 float

undefined4 func_00260C78(float fparam_0,float fparam_1,float fparam_2,float fparam_3)

{
  if (fparam_1 < fparam_2) {
    if (fparam_3 <= fparam_2) {
      if (fparam_0 < DAT_00260d34) {
        return 0;
      }
      if (fparam_0 <= fparam_1) {
        return 1;
      }
      return 0;
    }
    if ((fparam_2 < fparam_0) && (fparam_0 <= fparam_3)) {
      return 1;
    }
    if (fparam_0 < DAT_00260d34) {
      return 0;
    }
  }
  else if (fparam_0 <= fparam_2) {
    return 0;
  }
  if (fparam_1 < fparam_0) {
    return 0;
  }
  return 1;
}

