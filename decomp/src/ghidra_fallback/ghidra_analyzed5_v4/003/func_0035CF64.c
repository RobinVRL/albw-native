#include "ghidra_types.h"

extern int func_00325308(int *param_1);
extern int func_00325C70(int param_1);
extern int func_00520EE4(int param_1);
extern int func_0052107C(int param_1);
extern int func_0054E044(int param_1);
extern int func_0054E67C(void);
extern int func_0066697C(undefined4 *param_1,undefined1 param_2);
extern float DAT_0035d050;

// USA 0035CF64 <- EU 0035CF40 (Ghidra, non-matching)
// GLOBAL DAT_0035d050 float

undefined4 func_0035CF64(int *param_1)

{
  float fVar1;
  bool bVar2;
  int iVar3;
  
  fVar1 = DAT_0035d050;
  if (ALBW_AS_F32(param_1[0x148]) == DAT_0035d050 && ALBW_AS_F32(param_1[0x14a]) == DAT_0035d050) {
    param_1[0xf7] = (int)ALBW_AS_U32(DAT_0035d050);
    param_1[0xf9] = (int)ALBW_AS_U32(fVar1);
    bVar2 = func_0054E044((int)param_1);
    if (((bVar2) && (iVar3 = func_0054E67C(), iVar3 != 0)) ||
       (iVar3 = func_00325C70((int)param_1), iVar3 != 0)) {
      func_00325308(param_1);
      iVar3 = (**(code **)(*param_1 + 0x5c))(param_1,param_1 + 0x11e);
      if (iVar3 != 0) {
        return func_0066697C(param_1 + 0x13e,1);
      }
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x133) = 1;
    *(undefined1 *)((int)param_1 + 0x4cd) = 1;
    param_1[0xf7] = param_1[0x148];
    param_1[0xf9] = param_1[0x14a];
    param_1[0x148] = (int)ALBW_AS_U32(fVar1);
    param_1[0x149] = (int)ALBW_AS_U32(fVar1);
    param_1[0x14a] = (int)ALBW_AS_U32(fVar1);
  }
  bVar2 = func_0052107C((int)param_1);
  if ((bVar2) && (iVar3 = func_00520EE4((int)param_1), iVar3 != 0)) {
    return func_0066697C(param_1 + 0x13e,4);
  }
  return 0;
}

