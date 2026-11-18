#include "ghidra_types.h"

extern int func_0012C718(int param_1);
extern float func_002317C0(undefined2 *param_1,float fparam_0);
extern int func_0023194C(int param_1,undefined4 param_2);
extern float func_00523958(int param_1);
extern float func_00532B54(int param_1);
extern int *DAT_00480268;
extern float DAT_0048026c;

// USA 004801E0 <- EU 004801B8 (Ghidra, non-matching)
// GLOBAL DAT_00480268 int *
// GLOBAL DAT_0048026c float

undefined4 func_004801E0(int param_1)

{
  float fVar1;
  
  if (*(char *)(*DAT_00480268 + 0x70) == '\x04') {
    fVar1 = func_00523958(*DAT_00480268);
    func_0023194C(param_1 + 0xa8,(int)(*(float *)(param_1 + 0xd0) * fVar1));
    if ((0x3f3fffff < (int)ALBW_AS_U32(fVar1)) &&
       (fVar1 = func_00532B54(param_1 + 0x9c), (int)ALBW_AS_U32(fVar1) < 0x3f800000)) {
      func_002317C0((undefined2 *)(param_1 + 0x9c),DAT_0048026c);
      return 0;
    }
  }
  else if ((*(char *)(param_1 + 0xd) == '\x01') ||
          ((*(char *)(param_1 + 0xd) == '\x03' && (*(char *)(param_1 + 0xe) == '\x03')))) {
    return func_0012C718(param_1);
  }
  return 0;
}

