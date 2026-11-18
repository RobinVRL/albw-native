#include "ghidra_types.h"

extern int func_00312754(int param_1);
extern int func_004D838C(float *param_1,float *param_2,float fparam_0,float fparam_1,float fparam_2);
extern int func_00583B1C(int param_1);
extern float DAT_00312bfc;
extern float DAT_00312c00;
extern float DAT_00312c04;
extern undefined4 DAT_00312c08;

// USA 00312B54 <- EU 00312B30 (Ghidra, non-matching)
// GLOBAL DAT_00312bfc float
// GLOBAL DAT_00312c00 float
// GLOBAL DAT_00312c04 float
// GLOBAL DAT_00312c08 undefined4

undefined4 func_00312B54(int *param_1)

{
  int iVar1;
  int *piVar2;
  
  if ((char)param_1[0x262] == '\0') {
    if ((short)param_1[0x28c] == 0) {
      (**(code **)(*param_1 + 0xac))(param_1,6,0xffffffff);
      piVar2 = (int *)func_00312754((int)param_1);
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 0x5c))(piVar2,DAT_00312c08);
      }
      *(char *)(param_1 + 0x262) = (char)param_1[0x262] + '\x01';
    }
    else {
      *(short *)(param_1 + 0x28c) = (short)param_1[0x28c] + -1;
    }
  }
  else {
    func_004D838C((float *)(param_1 + 0xf4),(float *)(param_1 + 0x285),DAT_00312c04,DAT_00312c00,
                  DAT_00312bfc);
    if ((*(char *)((int)param_1 + 0x852) == '\x06') &&
       (iVar1 = func_00583B1C((int)param_1), iVar1 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x00312b94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      return (**(code **)(*param_1 + 0xac))(param_1,7,0xffffffff);
    }
  }
  return 0;
}

